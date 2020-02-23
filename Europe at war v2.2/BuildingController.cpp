//
// Created by Ted on 6/3/2018
//

#include "BuildingController.h"

                                                /*  Constructor  */

BuildingController::BuildingController()
{
    /**  Default constructor. Creates the object and populates it with hardcoded buildings.     */

    populateEconomicList();
    populateEducationList();
    populateProductionList();
    populateMilitaryList();
    populateResourceList();
}


                                            /*  Population methods  */

void BuildingController::populateEducationList()
{
    /**  Fills up the object's education vector with the buildings below and calls setter methods as necessary.  */

    //Object creation
    Building university = Building("University", 150, 50, 100, 50, 2);
    Building public_school = Building("Public School", 300, 200, 200, 100, 3);
    Building research_center = Building("Research center", 400, 300, 200, 150, 5);

    //Objects are added to vector
    educationBuildings.push_back(university);
    educationBuildings.push_back(public_school);
    educationBuildings.push_back(research_center);

    //Setter method calls
    public_school.setPrerequisiteBuildings(university, emptyBuilding);
    research_center.setPrerequisiteBuildings(public_school, emptyBuilding);
}

void BuildingController::populateMilitaryList()
{
    /**  Fills up the object's military vector with the buildings below and calls setter methods as necessary.  */

    //Object creation
    Building barracks = Building("Barracks", 150, 50, 100, 50, 2);
    Building military_academy = Building("Military academy", 200, 100, 200, 100, 4);
    Building military_base = Building("Military base", 450, 200, 400, 150, 8);
    Building naval_base = Building("Naval base", 250, 100, 75, 50, 2);
    Building airfield = Building("Airfield", 250, 100, 75, 50, 2);

    //Objects are added to vector
    militaryBuildings.push_back(barracks);
    militaryBuildings.push_back(military_academy);
    militaryBuildings.push_back(military_base);
    militaryBuildings.push_back(naval_base);
    militaryBuildings.push_back(airfield);

    //Setter method calls
    military_academy.setPrerequisiteBuildings(barracks, emptyBuilding);
    military_base.setPrerequisiteBuildings(military_academy, emptyBuilding);
}

void BuildingController::populateProductionList()
{
    /**  Fills up the object's production vector with the buildings below and calls setter methods as necessary.  */

    //Object creation
    Building factory = Building ("Factory", 275, 100, 75, 25, 2);
    Building armour_factory = Building ("Armour factory", 320, 125, 100, 50, 2);
    Building small_air_factory = Building ("Small air factory", 320, 125, 100, 50, 2);
    Building medium_air_factory = Building ("Medium air factory", 320, 125, 100, 50, 2);
    Building large_air_factory = Building ("Large air factory", 320, 125, 100, 50, 2);
    Building harbor = Building ("Harbor", 150, 50, 100, 25, 2);
    Building shipyard = Building ("Shipyard", 320, 125, 100, 50, 3);

    //Objects are added to vector
    productionBuildings.push_back(factory);
    productionBuildings.push_back(armour_factory);
    productionBuildings.push_back(small_air_factory);
    productionBuildings.push_back(medium_air_factory);
    productionBuildings.push_back(large_air_factory);
    productionBuildings.push_back(harbor);
    productionBuildings.push_back(shipyard);

    //Prerequisite buildings setter method calls
    armour_factory.setPrerequisiteBuildings(factory, emptyBuilding);
    small_air_factory.setPrerequisiteBuildings(factory, emptyBuilding);
    medium_air_factory.setPrerequisiteBuildings(factory, emptyBuilding);
    large_air_factory.setPrerequisiteBuildings(factory, emptyBuilding);
    shipyard.setPrerequisiteBuildings(factory, harbor);

    //Incompatible buildings setter method calls
    armour_factory.setIncompatibleBuildings(small_air_factory, medium_air_factory,  large_air_factory);
    small_air_factory.setIncompatibleBuildings(armour_factory, large_air_factory, emptyBuilding);
    medium_air_factory.setIncompatibleBuildings(armour_factory, emptyBuilding, emptyBuilding);
    large_air_factory.setIncompatibleBuildings(armour_factory, small_air_factory, emptyBuilding);
}

void BuildingController::populateResourceList()
{
    /**  Fills up the object's resource vector with the buildings below. This method doesn't use setters. */

    //Object creation
    Building synthetic_oil_refinery = Building ("Synthetic oil refinery", 400, 250, 300, 150, 2);
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
    stock_exchange.setPrerequisiteBuildings(bank, emptyBuilding);
}



                                          /*  Single building search methods  */

int BuildingController::findEducationBuildingIdByName(const std::string targetName)
{
    /** Searches for an education building in the respective list via a string that contains the target
      * objects's name. Returns the matching building object's id if found, -1 if nothing is found.         */

    for ( Building building : educationBuildings )
    { if ( building.getName() == targetName ) { return building.getId(); }}

    return -1;
}

int BuildingController::findMilitaryBuildingIdByName(const std::string targetName)
{
    /** Searches for an military building in the respective list via a string that contains the target
      * objects's name. Returns the matching building object's id if found, -1 if nothing is found.         */

    for ( Building building : militaryBuildings )
    { if ( building.getName() == targetName ) { return building.getId(); }}

    return -1;
}

int BuildingController::findProductionBuildingIdByName(const std::string targetName)
{
    /** Searches for a production building in the respective list via a string that contains the target
      * objects's name. Returns the matching building object's id if found, -1 if nothing is found.         */

    for ( Building building : productionBuildings )
    { if ( building.getName() == targetName ) { return building.getId(); }}

    return -1;
}

int BuildingController::findResourceBuildingIdByName(const std::string targetName)
{
    /** Searches for a resource building in the respective list via a string that contains the target
      * objects's name. Returns the matching building object's id if found, -1 if nothing is found.         */

    for ( Building building : resourceBuildings )
    { if ( building.getName() == targetName ) { return building.getId(); }}

    return -1;
}

int BuildingController::findEconomicBuildingIdByName(const std::string targetName)
{
    /** Searches for an economic building in the respective list via a string that contains the target
      * objects's name. Returns the matching building object's id if found, -1 if nothing is found.         */

    for ( Building building : economicBuildings )
    { if ( building.getName() == targetName ) { return building.getId(); }}

    return -1;
}


                                         /*  Technology requirement methods  */

void BuildingController::addIdToTechPrerequisites(const std::pair <int, int> entry)
{
    /** Takes a pair of integers and adds them to the tech prerequisites vector. The first number is the
      * technology ID and the second one is the minimum technology level. Called at building initialization.   */

    requiredTechsById.push_back(entry);
}

void BuildingController::setAllBuildingTechPrerequisites()
{
    /** Sets the two technology prerequisite members in already created buildings with data from the required
      * technology IDs vector. At the end of the function the required technologies vector is cleared. Called
      * only once at initialization.
      *
      * NOTE: This function is hardcoded, so if there are any bugs with a building's technological prerequisites,
      * this function along with it's related initialization section in the main function should be checked first.  */

    //Education buildings
    educationBuildings[1].setPrerequisiteTechnology(requiredTechsById[0].first, requiredTechsById[0].second);
    educationBuildings[2].setPrerequisiteTechnology(requiredTechsById[1].first, requiredTechsById[1].second);

    //Military buildings
    militaryBuildings[0].setPrerequisiteTechnology(requiredTechsById[2].first, requiredTechsById[2].second);
    militaryBuildings[3].setPrerequisiteTechnology(requiredTechsById[3].first, requiredTechsById[3].second);
    militaryBuildings[4].setPrerequisiteTechnology(requiredTechsById[4].first, requiredTechsById[4].second);

    //Production buildings
    productionBuildings[1].setPrerequisiteTechnology(requiredTechsById[5].first, requiredTechsById[5].second);
    productionBuildings[2].setPrerequisiteTechnology(requiredTechsById[4].first, requiredTechsById[4].second);
    productionBuildings[3].setPrerequisiteTechnology(requiredTechsById[6].first, requiredTechsById[6].second);
    productionBuildings[4].setPrerequisiteTechnology(requiredTechsById[7].first, requiredTechsById[7].second);
    productionBuildings[6].setPrerequisiteTechnology(requiredTechsById[3].first, requiredTechsById[3].second);

    //Resource buildings
    resourceBuildings[0].setPrerequisiteTechnology(requiredTechsById[8].first, requiredTechsById[8].second);

    //Prerequisites vector's purpose was accomplished, so empty it
    requiredTechsById.clear();
}


                                                    /*  Getter methods  */

std::vector<Building> BuildingController::getEducationList()
{
    /** Returns an object's education building vector.  */

    return educationBuildings;
}

std::vector<Building> BuildingController::getMilitaryList()
{
    /** Returns an object's military building vector.  */

    return militaryBuildings;
}

std::vector<Building> BuildingController::getProductionList()
{
    /** Returns an object's production building vector.  */

    return productionBuildings;
}

std::vector<Building> BuildingController::getResourceList()
{
    /** Returns an object's resource building vector.  */

    return resourceBuildings;
}

std::vector<Building> BuildingController::getEconomicList()
{
    /** Returns an object's economic building vector.  */

    return economicBuildings;
}
