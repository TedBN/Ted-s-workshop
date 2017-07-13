#include <iostream>
#include "MilitaryObjects.h"
#include "Controller.h"
#include "Countries.h"

int main()
{
    /**  Currently used to test database and new game code. Set to create default database
      *  and game objects.                                                                          */

    Controller::create_database();

    /*  Creation of default objects for technologies class. Setter functions are used afterwards.   */

    //Debug technology
    Technology none = Technology (100, "Test", 0, 0);

    //Technology class object creation
    //TO-DO: Add more techs and adjust current techs
    Technology militia_primary_weapons = Technology (101, "Militia primary weapons", 1200, 1);
    Technology militia_support_weapons = Technology (102, "Militia support weapons", 1200, 1);
    Technology militia_anti_tank_weapons = Technology (103, "Militia anti-tank weapons", 1200, 1);
    Technology militia_light_artillery = Technology (104, "Militia light artillery", 1200, 1);

    Technology infantry_creation = Technology (105, "Infantry", 2000, 0);
    Technology infantry_primary_weapons = Technology (106, "Infantry primary weapons", 2000, 1);
    Technology infantry_support_weapons = Technology (107, "Infantry support weapons", 2000, 1);
    Technology infantry_anti_tank_weapons = Technology (108, "Infantry anti-tank weapons", 2000, 1);
    Technology infantry_light_artillery = Technology (109, "Infantry light artillery", 2000, 1);

    Technology mountain_infantry_creation = Technology (107, "Mountain infantry", 2000, 0);
    Technology marine_infantry_creation = Technology (108, "Marine infantry", 2000, 0);
    Technology elite_infantry_creation = Technology (109, "Elite infantry", 2000, 1);
    Technology motorized_infantry_creation = Technology (110, "Motorized infantry", 2000, 1);
    Technology airborne_infantry_creation = Technology (111, "Motorized infantry", 2000, 1);
    Technology mechanized_infantry_creation = Technology (112, "Motorized infantry", 2000, 1);

    /*  Creation of default objects for building class. Setter functions are used afterwards.       */

    //Debug building class object creation
    Building empty = Building (0, "Empty", 0, 0, 0, 0, 0, NULL, NULL, NULL, NULL);

    //Building class object creation
    //TO-DO: Add tech prerequisite arguments
    Building university = Building (1, "University", 150, 50, 100, 50, 2, 1, NULL, NULL);
    Building public_school = Building (2, "Public School", 300, 200, 200, 100, 3, 1, NULL, NULL);
    Building research_center = Building (3, "Research center", 400, 300, 200, 150, 5, 1, NULL, NULL);

    Building barracks = Building (4, "Barracks", 150, 50, 100, 50, 2, 3, 12, NULL, infantry_creation);
    Building military_academy = Building (5, "Military academy", 200, 100, 200, 100, 4, 3, 11, 12);
    Building military_base = Building (6, "Military base", 450, 200, 400, 150, 8, 3, 11, NULL);

    Building factory = Building (7, "Factory", 275, 100, 75, 25, 2, 2, 7, NULL);
    Building armour_factory = Building (8, "Armour factory", 320, 125, 100, 50, 2, 3, 7, NULL);
    Building small_air_factory = Building (9, "Small air factory", 320, 125, 100, 50, 2, 2, 3, 7);
    Building medium_air_factory = Building (10, "Medium air factory", 320, 125, 100, 50, 2, 2, 3, 7);
    Building large_air_factory = Building (11, "Large air factory", 320, 125, 100, 50, 2, 2, 3, 7);

    Building harbor = Building (12, "Harbor", 150, 50, 100, 25, 2, 3, 7, 9);
    Building shipyard = Building (13, "Shipyard", 320, 125, 100, 50, 3, 2, 3, NULL);

    Building naval_base = Building (14, "Naval base", 250, 100, 75, 50, 2, 9, NULL, NULL);
    Building airfield = Building (15, "Airfield", 250, 100, 75, 50, 2, 9, NULL, NULL);

    Building synthetic_oil_refinery = Building (16, "Synthetic oil refinery", 400, 250, 300, 150, 2, 3, NULL, NULL);
    Building oil_well = Building (17, "Oil well", 200, 150, 100, 25, 3, 6, NULL, NULL);
    Building coal_mine = Building (18, "Coal mine", 200, 50, 100, 25, 2, 4, NULL, NULL);
    Building quarry = Building (19, "Quarry", 200, 150, 50, 25, 2, 5, NULL, NULL);
    Building mine_shaft = Building (20, "Mine shaft", 200, 150, 100, 10, 2, 13, NULL, NULL);

    Building bank = Building (21, "Bank", 250, 100, 50, 125, 0, 10, 0, 0);
    Building stock_exchange = Building (22, "Stock exchange", 450, 200, 100, 250, 0, 10, NULL, NULL);

    //Prerequisite settings for buildings
    public_school.set_prerequisite_buildings(university, empty);
    research_center.set_prerequisite_buildings(public_school, empty);

    military_academy.set_prerequisite_buildings(barracks, empty);
    military_base.set_prerequisite_buildings(military_academy, empty);

    armour_factory.set_prerequisite_buildings(factory, empty);
    small_air_factory.set_prerequisite_buildings(factory, empty);
    medium_air_factory.set_prerequisite_buildings(factory, empty);
    large_air_factory.set_prerequisite_buildings(factory, empty);
    shipyard.set_prerequisite_buildings(factory, harbor);

    stock_exchange.set_prerequisite_buildings(bank, empty);

    //Incompatibility settings for buildings
    armour_factory.set_incompatible_buildings(small_air_factory, medium_air_factory,  large_air_factory);
    small_air_factory.set_incompatible_buildings(armour_factory,  large_air_factory, empty);
    medium_air_factory.set_incompatible_buildings(armour_factory, empty, empty);
    large_air_factory.set_incompatible_buildings(armour_factory, small_air_factory, empty);

    return 0;
}