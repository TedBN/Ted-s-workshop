//
// Created by Ted on 6/3/2018
//

#include "BuildingController.h"

BuildingController::BuildingController()
{
    /**  Default constructor. Creates the object and populates it with hardcoded buildings.     */

    this->populateEconomicList();
    this->populateEducationList();
    this->populateProductionList();
    this->populateMilitaryList();
    this->populateResourceList();
}

void BuildingController::populateEducationList()
{
    /**  Fills up the object's education vector with the buildings below and calls setter methods as necessary.  */

    //Object creation
    Building university = Building("University", 150, 50, 100, 50, 2);
    Building public_school = Building("Public School", 300, 200, 200, 100, 3, /*Placeholder*/, 1);
    Building research_center = Building("Research center", 400, 300, 200, 150, 5, /*Placeholder*/, 3);

    //Objects are added to vector
    educationBuildings.push_back(university);
    educationBuildings.push_back(public_school);
    educationBuildings.push_back(research_center);

    //Setter method calls
    public_school.setPrerequisiteBuildings(university, empty);
    research_center.setPrerequisiteBuildings(public_school, empty);
}

void BuildingController::populateMilitaryList()
{
    /**  Fills up the object's military vector with the buildings below and calls setter methods as necessary.  */

    //Object creation
    Building barracks = Building("Barracks", 150, 50, 100, 50, 2, /*Placeholder*/, 0);
    Building military_academy = Building("Military academy", 200, 100, 200, 100, 4);
    Building military_base = Building("Military base", 450, 200, 400, 150, 8);
    Building naval_base = Building("Naval base", 250, 100, 75, 50, 2, /*Placeholder*/, 0);
    Building airfield = Building("Airfield", 250, 100, 75, 50, 2, /*Placeholder*/, 0);

    //Objects are added to vector
    militaryBuildings.push_back(barracks);
    militaryBuildings.push_back(military_academy);
    militaryBuildings.push_back(military_base);
    militaryBuildings.push_back(naval_base);
    militaryBuildings.push_back(airfield);

    //Setter method calls
    military_academy.setPrerequisiteBuildings(barracks, empty);
    military_base.setPrerequisiteBuildings(military_academy, empty);
}

void BuildingController::populateProductionList()
{
    /**  Fills up the object's production vector with the buildings below and calls setter methods as necessary.  */

    //Object creation
    Building factory = Building ("Factory", 275, 100, 75, 25, 2);
    Building armour_factory = Building ("Armour factory", 320, 125, 100, 50, 2, /*Placeholder*/, 0);
    Building small_air_factory = Building ("Small air factory", 320, 125, 100, 50, 2, /*Placeholder*/, 0);
    Building medium_air_factory = Building ("Medium air factory", 320, 125, 100, 50, 2, /*Placeholder*/, 0);
    Building large_air_factory = Building ("Large air factory", 320, 125, 100, 50, 2, /*Placeholder*/, 0);
    Building harbor = Building ("Harbor", 150, 50, 100, 25, 2);
    Building shipyard = Building ("Shipyard", 320, 125, 100, 50, 3, /*Placeholder*/, 0);

    //Objects are added to vector
    productionBuildings.push_back(factory);
    productionBuildings.push_back(armour_factory);
    productionBuildings.push_back(small_air_factory);
    productionBuildings.push_back(medium_air_factory);
    productionBuildings.push_back(large_air_factory);
    productionBuildings.push_back(harbor);
    productionBuildings.push_back(shipyard);

    //Prerequisite buildings setter method calls
    armour_factory.setPrerequisiteBuildings(factory, empty);
    small_air_factory.setPrerequisiteBuildings(factory, empty);
    medium_air_factory.setPrerequisiteBuildings(factory, empty);
    large_air_factory.setPrerequisiteBuildings(factory, empty);
    shipyard.setPrerequisiteBuildings(factory, harbor);

    //Incompatible buildings setter method calls
    armour_factory.setIncompatibleBuildings(small_air_factory, medium_air_factory,  large_air_factory);
    small_air_factory.setIncompatibleBuildings(armour_factory, large_air_factory, empty);
    medium_air_factory.setIncompatibleBuildings(armour_factory, empty, empty);
    large_air_factory.setIncompatibleBuildings(armour_factory, small_air_factory, empty);
}

void BuildingController::populateResourceList()
{
    /**  Fills up the object's resource vector with the buildings below. This method doesn't use setters. */

    //Object creation
    Building synthetic_oil_refinery = Building ("Synthetic oil refinery", 400, 250, 300, 150, 2, /*Placeholder*/, 0);
    Building oil_well = Building ("Oil well", 200, 150, 100, 25, 3);
    Building coal_mine = Building ("Coal mine", 200, 50, 100, 25, 2);
    Building quarry = Building ("Quarry", 200, 150, 50, 25, 2);
    Building mine_shaft = Building ("Mine shaft", 200, 150, 100, 10, 2);

    //Objects are added to vector
    resourceBuildings.push_back(synthetic_oil_refinery);
    resourceBuildings.push_back(oil_well);
    resourceBuildings.push_back(coal_mine);
    resourceBuildings.push_back(quarry);
    resourceBuildings.push_back(mine_shaft);
}

void BuildingController::populateEconomicList()
{
    /**  Fills up the object's economic vector with the buildings below and calls setter methods as necessary. */

    //Object creation
    Building bank = Building ("Bank", 250, 100, 50, 125, 0);
    Building stock_exchange = Building ("Stock exchange", 450, 200, 100, 250, 0);

    //Objects are added to vector
    economicBuildings.push_back(bank);
    economicBuildings.push_back(stock_exchange);

    //Setter method calls
    stock_exchange.setPrerequisiteBuildings(bank, empty);
}