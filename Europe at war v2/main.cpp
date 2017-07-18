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

    //Land unit techs
    Technology militia_primary_weapons = Technology (101, "Militia primary weapons", 1200, 1);
    Technology militia_support_weapons = Technology (102, "Militia support weapons", 1200, 1);
    Technology militia_anti_tank_weapons = Technology (103, "Militia anti-tank weapons", 1200, 1);
    Technology militia_light_artillery = Technology (104, "Militia light artillery", 1200, 1);

    Technology cavalry_primary_weapons = Technology (105, "Cavalry primary weapons", 1600, 1);
    Technology cavalry_support_weapons = Technology (106, "Cavalry support weapons", 1600, 1);
    Technology cavalry_anti_tank_weapons = Technology (107, "Cavalry anti-tank weapons", 1600, 1);
    Technology cavalry_light_artillery = Technology (108, "Cavalry light artillery", 1600, 1);

    Technology infantry_creation = Technology (109, "Infantry", 2000, 0);
    Technology infantry_primary_weapons = Technology (110, "Infantry primary weapons", 2000, 1);
    Technology infantry_support_weapons = Technology (111, "Infantry support weapons", 2000, 1);
    Technology infantry_anti_tank_weapons = Technology (112, "Infantry anti-tank weapons", 2000, 1);
    Technology infantry_light_artillery = Technology (113, "Infantry light artillery", 2000, 1);

    Technology mountain_infantry_creation = Technology (114, "Mountain infantry", 2000, 0);
    Technology marine_infantry_creation = Technology (115, "Marine infantry", 2000, 0);
    Technology elite_infantry_creation = Technology (116, "Elite infantry", 2000, 1);
    Technology motorized_infantry_creation = Technology (117, "Motorized infantry", 2000, 1);
    Technology airborne_infantry_creation = Technology (118, "Motorized infantry", 2000, 1);
    Technology mechanized_infantry_creation = Technology (119, "Motorized infantry", 2000, 1);

    Technology artillery_creation = Technology (120, "Artillery", 2000, 0);
    Technology artillery_gun = Technology (121, "Artillery barrel and ammunition", 2000, 1);
    Technology artillery_sights = Technology (122, "Artillery sights and carriage", 2000, 1);

    Technology anti_tank_creation = Technology (123, "Anti-tank gun", 2000, 0);
    Technology anti_tank_gun = Technology (124, "Anti-tank barrel and ammunition", 2000, 1);
    Technology anti_tank_sights = Technology (125, "Anti-tank sights and carriage", 2000, 1);

    Technology anti_aircraft_creation = Technology (126, "Anti-aircraft gun", 2000, 0);
    Technology anti_aircraft_gun = Technology (127, "Anti-aircraft barrel and ammunition", 2000, 1);
    Technology anti_aircraft_sights = Technology (128, "Anti-aircraft sights and carriage", 2000, 1);

    Technology armoured_car_gun = Technology (129, "Armoured car gun", 3000, 1);
    Technology armoured_car_armour = Technology (130, "Armoured car armour", 3000, 1);
    
    Technology light_tank_creation = Technology (131, "Light tank", 4000, 0);
    Technology light_tank_gun = Technology (132, "Light tank gun", 4000, 1);
    Technology light_tank_engine = Technology (133, "Light tank engine", 4000, 1);
    Technology light_tank_armour = Technology (134, "Light tank armour", 4000, 1);
    Technology light_tank_reliability = Technology (135, "Light tank reliability", 4000, 1);
    Technology light_tank_hull = Technology (134, "Light tank hull", 4000, 1);

    Technology medium_tank_creation = Technology (135, "Medium tank", 6000, 0);
    Technology medium_tank_gun = Technology (136, "Medium tank gun", 6000, 1);
    Technology medium_tank_engine = Technology (137, "Medium tank engine", 6000, 1);
    Technology medium_tank_armour = Technology (138, "Medium tank armour", 6000, 1);
    Technology medium_tank_reliability = Technology (139, "Medium tank reliability", 6000, 1);
    Technology medium_tank_hull = Technology (140, "Medium tank hull", 6000, 1);

    Technology heavy_tank_creation = Technology (141, "Heavy tank", 8000, 0);
    Technology heavy_tank_gun = Technology (142, "Heavy tank gun", 8000, 1);
    Technology heavy_tank_engine = Technology (143, "Heavy tank engine", 8000, 1);
    Technology heavy_tank_armour = Technology (144, "Heavy tank armour", 8000, 1);
    Technology heavy_tank_reliability = Technology (145, "Heavy tank reliability", 8000, 1);
    Technology heavy_tank_hull = Technology (146, "Heavy tank hull", 8000, 1);

    Technology super_heavy_tank_creation = Technology (147, "Super heavy tank", 10000, 0);
    Technology super_heavy_tank_gun = Technology (148, "Super heavy tank gun", 10000, 1);
    Technology super_heavy_tank_engine = Technology (149, "Super heavy tank engine", 10000, 1);
    Technology super_heavy_tank_armour = Technology (150, "Super heavy tank armour", 10000, 1);
    Technology super_heavy_tank_reliability = Technology (151, "Super heavy tank reliability", 10000, 1);
    Technology super_heavy_tank_hull = Technology (152, "Super heavy tank hull", 10000, 1);

    Technology modern_tank_creation = Technology (153, "Modern tank", 12000, 0);
    Technology modern_tank_gun = Technology (154, "Modern tank gun", 12000, 1);
    Technology modern_tank_engine = Technology (155, "Modern tank engine", 12000, 1);
    Technology modern_tank_armour = Technology (156, "Modern tank armour", 12000, 1);
    Technology modern_tank_reliability = Technology (157, "Modern tank reliability", 12000, 1);
    Technology modern_tank_hull = Technology (158, "Modern tank hull", 12000, 1);
    
    //Air unit techs
    Technology fighter_creation = Technology (159, "Fighter", 4000, 0);
    Technology fighter_armament = Technology (160, "Fighter armament", 4000, 1);
    Technology fighter_airframe = Technology (161, "Fighter airframe", 4000, 1);
    Technology fighter_fuel_tank = Technology (162, "Fighter fuel tank", 4000, 1);

    Technology aero_engine = Technology (163, "Aero engine", 6000, 1);
    Technology jet_engine = Technology (164, "Jet engine", 8000, 1);

    Technology heavy_fighter_creation = Technology (165, "Heavy fighter", 6000, 0);
    Technology heavy_fighter_armament = Technology (166, "Heavy fighter armament", 6000, 1);
    Technology heavy_fighter_airframe = Technology (167, "Heavy fighter airframe", 6000, 1);
    Technology heavy_fighter_fuel_tank = Technology (168, "Heavy fighter fuel tank", 6000, 1);

    Technology close_air_support_creation = Technology (169, "Close air support", 4000, 0);
    Technology fighter_bomber_creation = Technology (170, "Fighter-bomber", 4000, 0);
    Technology naval_bomber_creation = Technology (171, "Naval bomber", 6000, 0);

    Technology carrier_close_air_support_creation = Technology (172, "Carrier close air support", 4000, 0);
    Technology carrier_fighter_creation = Technology (173, "Carrier fighter", 4000, 0);
    Technology carrier_naval_bomber_creation = Technology (174, "Carrier naval bomber", 4000, 0);

    Technology medium_bomber_creation = Technology (175, "Medium bomber", 6000, 0);
    Technology medium_bomber_guns = Technology (176, "Medium bomber guns", 6000, 1);
    Technology medium_bomber_airframe = Technology (177, "Medium bomber airframe", 6000, 1);
    Technology medium_bomber_fuel_tank = Technology (178, "Medium bomber fuel tank", 6000, 1);

    Technology small_bombs = Technology (179, "Small bombs", 4000, 1);
    Technology medium_bombs = Technology (180, "Medium bombs", 6000, 1);
    Technology large_bombs = Technology (181, "Large bombs", 8000, 1);
    Technology rockets = Technology (182, "Rockets", 4000, 1);
    Technology air_launched_torpedoes = Technology (183, "Air launched torpedoes", 6000, 1);

    Technology heavy_bomber_creation = Technology (184, "Heavy bomber", 8000, 0);
    Technology heavy_bomber_guns = Technology (185, "Heavy bomber guns", 8000, 1);
    Technology heavy_bomber_airframe = Technology (186, "Heavy bomber airframe", 8000, 1);
    Technology heavy_bomber_fuel_tank = Technology (187, "Heavy bomber fuel tank", 8000, 1);

    Technology transport_plane_creation = Technology (188, "Transport plane", 8000, 0);
    Technology transport_plane_capacity = Technology (189, "Transport plane capacity", 8000, 1);

    //Naval unit techs (to be added)

    /*  Creation of default objects for building class. Setter functions are used afterwards.       */

    //Debug building class object creation
    Building empty = Building (0, "Empty", 0, 0, 0, 0, 0, NULL, NULL, NULL, none);

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
