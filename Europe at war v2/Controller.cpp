//
// Created by Teodor on 21/6/2017..
//

#include <iostream>
#include <vector>
#include "sqlite3.h"
#include "Controller.h"

void Controller::create_database()
{
    /**  This function creates a database file with the necessary tables for
      *  the game. Takes no arguments.                                          */

    //Char variables with the SQL commands for the tables
    char command1[357] = "CREATE TABLE Countries ("
                         "ID           INTEGER     PRIMARY KEY,"
                         "Name         TEXT        UNIQUE  NOT NULL,"
                         "Regions      INTEGER     UNIQUE  NOT NULL,"
                         "Techs        INTEGER     NOT NULL,"
                         "Relations    INTEGER     NOT NULL);";

    char command2[1241] = "CREATE TABLE Regions ("
                          "ID                     INTEGER     PRIMARY KEY,"
                          "Name                   TEXT        UNIQUE NOT NULL,"
                          "Owner                  INTEGER     UNIQUE NOT NULL,"
                          "Buildings              INTEGER,"
                          "Current_production     INTEGER,"
                          "Energy_production      INTEGER     NOT NULL,"
                          "Metal_production       INTEGER     NOT NULL,"
                          "Oil_production         INTEGER     NOT NULL,"
                          "Manpower_production    INTEGER     NOT NULL,"
                          "Energy_stored          INTEGER     NOT NULL,"
                          "Metal_stored           INTEGER     NOT NULL,"
                          "Oil_stored             INTEGER     NOT NULL,"
                          "Manpower_stored        INTEGER     NOT NULL,"
                          "Energy_limit           INTEGER     NOT NULL,"
                          "Metal_limit            INTEGER     NOT NULL,"
                          "Oil_limit              INTEGER     NOT NULL,"
                          "Manpower_limit         INTEGER     NOT NULL);";

    char command3[296] = "CREATE TABLE Armies ("
                         "ID            INTEGER     PRIMARY KEY,"
                         "Name          TEXT        UNIQUE  NOT NULL,"
                         "Location      INTEGER     UNIQUE  NOT NULL,"
                         "Strength      INTEGER     NOT NULL);";

    char command4[376] = "CREATE TABLE Units ("
                         "ID        INTEGER     PRIMARY KEY,"
                         "Name      TEXT        UNIQUE  NOT NULL,"
                         "Location  INTEGER     NOT NULL,"
                         "Type      INTEGER     NOT NULL,"
                         "Army      INTEGER,"
                         "Health    INTEGER     NOT NULL);";

    char command5[900] = "CREATE TABLE DiploRelations ("
                         "ID            INTEGER     PRIMARY KEY,"
                         "Sender_ID     INTEGER     NOT NULL,"
                         "Recipient_ID  INTEGER     NOT NULL,"
                         "Type          INTEGER     NOT NULL);";

    //Database objects created
    sqlite3 * db;
    sqlite3_stmt * stmt;

    //All statements are processed one by one
    //Due to data type problems I can't use a for loop
    sqlite3_open("World_at_war.sqlite", &db);

    sqlite3_prepare_v2(db, command1, sizeof(command1), &stmt, NULL);
    sqlite3_step(stmt);

    sqlite3_prepare_v2(db, command2, sizeof(command2), &stmt, NULL);
    sqlite3_step(stmt);

    sqlite3_prepare_v2(db, command3, sizeof(command3), &stmt, NULL);
    sqlite3_step(stmt);

    sqlite3_prepare_v2(db, command4, sizeof(command4), &stmt, NULL);
    sqlite3_step(stmt);

    sqlite3_prepare_v2(db, command5, sizeof(command5), &stmt, NULL);
    sqlite3_step(stmt);

    sqlite3_close(db);
}

void Controller::create_technologies()
{
    /**  Creates, sets prerequisites and adds to static vectors technology objects for the game.      */

                                /*  Creation of class objects   */

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
    Technology elite_infantry_creation = Technology (116, "Elite infantry", 2000, 0);
    Technology motorized_infantry_creation = Technology (117, "Motorized infantry", 2000, 0);
    Technology airborne_infantry_creation = Technology (118, "Paratroopers", 2000, 0);
    Technology mechanized_infantry_creation = Technology (119, "Mechanized infantry", 2000, 0);

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
    Technology light_tank_hull_and_turret = Technology (136, "Light tank hull and turret", 4000, 1);

    Technology medium_tank_creation = Technology (137, "Medium tank", 6000, 0);
    Technology medium_tank_gun = Technology (138, "Medium tank gun", 6000, 1);
    Technology medium_tank_engine = Technology (139, "Medium tank engine", 6000, 1);
    Technology medium_tank_armour = Technology (140, "Medium tank armour", 6000, 1);
    Technology medium_tank_reliability = Technology (141, "Medium tank reliability", 6000, 1);
    Technology medium_tank_hull_and_turret = Technology (142, "Medium tank hull and turret", 6000, 1);

    Technology heavy_tank_creation = Technology (143, "Heavy tank", 8000, 0);
    Technology heavy_tank_gun = Technology (144, "Heavy tank gun", 8000, 1);
    Technology heavy_tank_engine = Technology (145, "Heavy tank engine", 8000, 1);
    Technology heavy_tank_armour = Technology (146, "Heavy tank armour", 8000, 1);
    Technology heavy_tank_reliability = Technology (147, "Heavy tank reliability", 8000, 1);
    Technology heavy_tank_hull_and_turret = Technology (148, "Heavy tank hull and turret", 8000, 1);

    Technology super_heavy_tank_creation = Technology (149, "Super heavy tank", 10000, 0);
    Technology super_heavy_tank_gun = Technology (150, "Super heavy tank gun", 10000, 1);
    Technology super_heavy_tank_engine = Technology (151, "Super heavy tank engine", 10000, 1);
    Technology super_heavy_tank_armour = Technology (152, "Super heavy tank armour", 10000, 1);
    Technology super_heavy_tank_reliability = Technology (153, "Super heavy tank reliability", 10000, 1);
    Technology super_heavy_tank_hull_and_turret = Technology (154, "Super heavy tank hull and turret", 10000, 1);

    Technology modern_tank_creation = Technology (155, "Modern tank", 12000, 0);
    Technology modern_tank_gun = Technology (156, "Modern tank gun", 12000, 1);
    Technology modern_tank_engine = Technology (157, "Modern tank engine", 12000, 1);
    Technology modern_tank_armour = Technology (158, "Modern tank armour", 12000, 1);
    Technology modern_tank_reliability = Technology (159, "Modern tank reliability", 12000, 1);
    Technology modern_tank_hull_and_turret = Technology (160, "Modern tank hull and turret", 12000, 1);


    //Air unit techs
    Technology fighter_creation = Technology (161, "Fighter", 4000, 0);
    Technology fighter_armament = Technology (162, "Fighter armament", 4000, 1);
    Technology fighter_airframe = Technology (163, "Fighter airframe", 4000, 1);
    Technology fighter_fuel_tank = Technology (164, "Fighter fuel tank", 4000, 1);

    Technology aero_engine = Technology (165, "Aero engine", 6000, 1);
    Technology jet_engine = Technology (166, "Jet engine", 8000, 1);

    Technology close_air_support_creation = Technology (171, "Close air support", 4000, 0);
    Technology fighter_bomber_creation = Technology (172, "Fighter-bomber", 4000, 0);
    Technology naval_bomber_creation = Technology (173, "Naval bomber", 6000, 0);
    Technology rocket_interceptor_creation = Technology (174, "Rocket interceptor", 10000, 0);

    Technology carrier_close_air_support_creation = Technology (175, "Carrier close air support", 3000, 0);
    Technology carrier_fighter_creation = Technology (176, "Carrier fighter", 3000, 0);
    Technology carrier_naval_bomber_creation = Technology (177, "Carrier naval bomber", 3000, 0);

    Technology medium_bomber_creation = Technology (178, "Medium bomber", 6000, 0);
    Technology medium_bomber_guns = Technology (179, "Medium bomber guns", 6000, 1);
    Technology medium_bomber_airframe = Technology (180, "Medium bomber airframe", 6000, 1);
    Technology medium_bomber_fuel_tank = Technology (181, "Medium bomber fuel tank", 6000, 1);

    Technology heavy_fighter_creation = Technology (167, "Heavy fighter", 6000, 0);

    Technology small_bombs = Technology (182, "Small bombs", 4000, 1);
    Technology medium_bombs = Technology (183, "Medium bombs", 6000, 1);
    Technology large_bombs = Technology (184, "Large bombs", 8000, 1);
    Technology rockets = Technology (185, "Rockets", 4000, 1);
    Technology air_launched_torpedoes = Technology (186, "Air launched torpedoes", 6000, 1);

    Technology heavy_bomber_creation = Technology (187, "Heavy bomber", 8000, 0);
    Technology heavy_bomber_guns = Technology (188, "Heavy bomber guns", 8000, 1);
    Technology heavy_bomber_airframe = Technology (189, "Heavy bomber airframe", 8000, 1);
    Technology heavy_bomber_fuel_tank = Technology (190, "Heavy bomber fuel tank", 8000, 1);

    Technology transport_plane_creation = Technology (191, "Transport plane", 8000, 0);
    Technology transport_plane_capacity = Technology (192, "Transport plane capacity", 8000, 1);

    Technology small_airframe_radar = Technology (193, "Small airframe radar", 10000, 1);
    Technology medium_airframe_radar = Technology (194, "Medium airframe radar", 10000, 1);
    Technology large_airframe_radar = Technology (195, "Large airframe radar", 10000, 1);


    //Naval unit techs
    Technology torpedo_boat_creation = Technology (196, "Torpedo boat", 3000, 0);
    Technology torpedo_boat_armament = Technology (197, "Torpedo boat armament", 3000, 1);
    Technology torpedo_boat_armour = Technology (198, "Torpedo boat armour", 3000, 1);
    Technology torpedo_boat_engine = Technology (199, "Torpedo boat engine", 3000, 1);

    Technology torpedoes = Technology (200, "Torpedoes", 4000, 0);

    Technology destroyer_creation = Technology (201, "Destroyer", 4000, 0);
    Technology destroyer_armament = Technology (202, "Destroyer armament", 4000, 1);
    Technology destroyer_armour = Technology (203, "Destroyer armour", 4000, 1);
    Technology destroyer_engine = Technology (204, "Destroyer engine", 4000, 1);
    Technology destroyer_anti_air = Technology (205, "Destroyer anti-air", 4000, 1);

    Technology light_cruiser_creation = Technology (206, "Light cruiser", 6000, 0);
    Technology light_cruiser_armament = Technology (207, "Light cruiser armament", 6000, 1);
    Technology light_cruiser_armour = Technology (208, "Light cruiser armour", 6000, 1);
    Technology light_cruiser_engine = Technology (209, "Light cruiser engine", 6000, 1);
    Technology light_cruiser_anti_air = Technology (210, "Light cruiser anti-air", 6000, 1);

    Technology heavy_cruiser_creation = Technology (211, "Heavy cruiser", 6000, 0);
    Technology heavy_cruiser_armament = Technology (212, "Heavy cruiser armament", 6000, 1);
    Technology heavy_cruiser_armour = Technology (213, "Heavy cruiser armour", 6000, 1);
    Technology heavy_cruiser_engine = Technology (214, "Heavy cruiser engine", 6000, 1);
    Technology heavy_cruiser_anti_air = Technology (215, "Heavy cruiser anti-air", 6000, 1);

    Technology battleship_creation = Technology (216, "Battleship", 8000, 0);
    Technology battleship_armour = Technology (217, "Battleship armour", 8000, 1);
    Technology battleship_engine = Technology (218, "Battleship engine", 8000, 1);
    Technology battleship_anti_air = Technology (219, "Battleship anti-air", 8000, 1);

    Technology capital_ship_armament = Technology (220, "Capital ship armament", 8000, 1);

    Technology battlecruiser_creation = Technology (221, "Battleship", 8000, 0);
    Technology battlecruiser_armour = Technology (222, "Battleship armour", 8000, 1);
    Technology battlecruiser_engine = Technology (223, "Battleship engine", 8000, 1);
    Technology battlecruiser_anti_air = Technology (224, "Battleship anti-air", 8000, 1);

    Technology super_heavy_battleship_creation = Technology (225, "Super heavy battleship", 10000, 0);

    Technology escort_carrier_creation = Technology (226, "Escort carrier", 8000, 0);

    Technology aircraft_carrier_creation = Technology (227, "Aircraft carrier", 8000, 0);
    Technology aircraft_carrier_armour = Technology (228, "Aircraft carrier armour", 8000, 1);
    Technology aircraft_carrier_engine = Technology (229, "Aircraft carrier engine", 8000, 1);
    Technology aircraft_carrier_anti_air = Technology (230, "Aircraft carrier anti-air", 8000, 1);
    Technology aircraft_carrier_capacity = Technology (231, "Aircraft carrier capacity", 8000, 1);

    Technology submarine_creation = Technology (232, "Submarine", 6000, 0);
    Technology submarine_hull = Technology (233, "Submarine hull", 6000, 1);
    Technology submarine_engine = Technology (224, "Submarine engine", 6000, 1);
    Technology submarine_anti_air = Technology (225, "Submarine anti-air", 6000, 1);

    Technology landing_craft_creation = Technology (226, "Landing craft", 6000, 0);
    Technology assault_ship_creation = Technology (227, "Assault ship", 8000, 0);

    Technology small_warship_radar = Technology (228, "Small warship radar", 10000, 1);
    Technology small_warship_asw = Technology (229, "Small warship ASW", 10000, 1);
    Technology large_warship_radar = Technology (230, "Small warship radar", 10000, 1);
    Technology submarine_sonar_and_detection_equipment = Technology (231, "Small warship ASW", 10000, 1);
    Technology submarine_air_warning_equipment = Technology (232, "Small warship ASW", 10000, 1);


    //Economic techs
    Technology education = Technology (233, "Education", 7000, 1);
    Technology agriculture = Technology (234, "Agriculture", 6000, 1);
    Technology combat_medicine = Technology (235, "Combat medicine", 7000, 1);
    Technology first_aid = Technology (236, "First aid", 7000, 1);

    Technology coal_processing = Technology (237, "Coal processing techniques", 4000, 1);
    Technology steel_production = Technology (238, "Steel production", 4000, 1);
    Technology rare_material_refining = Technology (239, "Rare material refining techniques", 4000, 1);

    Technology synthetic_oil_creation = Technology (240, "Synthetic oil", 10000, 0);
    Technology synthetic_oil_production = Technology (241, "Synthetic oil production", 6000, 1);

    Technology supply_production = Technology (242, "Supply production", 4000, 1);
    Technology fuel_production = Technology (243, "Oil to fuel conversion", 5000, 1);
    Technology resource_transportation = Technology (244, "Resource transportation", 7000, 1);
    Technology resource_organisation = Technology (245, "Resource organisation", 7000, 1);

    Technology production_boost = Technology (246, "Production boost", 6000, 1);
    Technology production_efficiency = Technology (247, "Production efficiency", 6000, 1);

    Technology rocket_tests = Technology (248, "Rocket tests", 6000, 0);
    Technology rocket_engine = Technology (249, "Rocket engine", 8000, 0);
    Technology theoretical_jet_engine = Technology (250, "Theoretical jet engine", 10000, 0);

    Technology radio = Technology (251, "Radio", 4000, 0);
    Technology radio_detection = Technology (252, "Radio detection", 6000, 0);
    Technology radar = Technology (253, "Radar", 6000, 1);
    Technology computing_machine = Technology (254, "Computing machine", 8000, 1);
    Technology encryption = Technology (255, "Encryption", 6000, 1);
    Technology decryption = Technology (256, "Decryption", 6000, 1);

    Technology atomic_research = Technology (257, "Atomic research", 18000, 0);
    Technology nuclear_research = Technology (258, "Nuclear research", 18000, 0);
    Technology atomic_bomb = Technology (259, "Atomic bomb", 18000, 0);


                                /*  Tech prerequisites are set via function  */


    //Land units
    infantry_creation.set_prerequisite_techs(101, 2, 102, 2, 103, 2, 104, 2, -1, -1);
    infantry_primary_weapons.set_prerequisite_techs(109, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    infantry_anti_tank_weapons.set_prerequisite_techs(109, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    infantry_support_weapons.set_prerequisite_techs(109, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    infantry_light_artillery.set_prerequisite_techs(109, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    mountain_infantry_creation.set_prerequisite_techs(110, 2, 111, 2, 112, 2, 113, 2, -1, -1);
    elite_infantry_creation.set_prerequisite_techs(110, 3, 111, 3, 112, 3, 113, 3, -1, -1);
    marine_infantry_creation.set_prerequisite_techs(110, 3, 111, 3, 112, 3, 113, 3, -1, -1);
    airborne_infantry_creation.set_prerequisite_techs(110, 4, 111, 4, 112, 4, 113, 4, -1, -1);

    motorized_infantry_creation.set_prerequisite_techs(131, 1, 110, 2, 111, 2, 112, 2, 113, 2);
    mechanized_infantry_creation.set_prerequisite_techs(117, 1, 137, 1, -1, -1, -1, -1, -1, -1);

    artillery_gun.set_prerequisite_techs(120, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    artillery_sights.set_prerequisite_techs(120, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    anti_tank_gun.set_prerequisite_techs(123, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    anti_tank_sights.set_prerequisite_techs(123, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    anti_aircraft_gun.set_prerequisite_techs(126, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    anti_aircraft_sights.set_prerequisite_techs(126, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    armoured_car_armour.set_prerequisite_techs(131, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    armoured_car_gun.set_prerequisite_techs(131, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    medium_tank_creation.set_prerequisite_techs(132, 3, 133, 3, 134, 3, 135, 3, 136, 3);
    heavy_tank_creation.set_prerequisite_techs(138, 3, 139, 3, 140, 3, 141, 3, 142, 3);
    super_heavy_tank_creation.set_prerequisite_techs(144, 3, 145, 3, 146, 3, 147, 3, 148, 3);
    modern_tank_creation.set_prerequisite_techs(144, 4, 145, 4, 146, 4, 147, 4, 148, 4);


    //Air units
    fighter_airframe.set_prerequisite_techs(161, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    fighter_armament.set_prerequisite_techs(161, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    fighter_fuel_tank.set_prerequisite_techs(161, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    aero_engine.set_prerequisite_techs(161, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    jet_engine.set_prerequisite_techs(250, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    medium_bomber_airframe.set_prerequisite_techs(178, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    medium_bomber_guns.set_prerequisite_techs(178, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    medium_bomber_fuel_tank.set_prerequisite_techs(178, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    heavy_fighter_creation.set_prerequisite_techs(178, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    heavy_bomber_airframe.set_prerequisite_techs(187, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    heavy_bomber_fuel_tank.set_prerequisite_techs(187, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    heavy_bomber_guns.set_prerequisite_techs(187, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    transport_plane_creation.set_prerequisite_techs(187, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    small_airframe_radar.set_prerequisite_techs(252, 2, -1, -1, -1, -1, -1, -1, -1, -1);
    medium_airframe_radar.set_prerequisite_techs(252, 2, -1, -1, -1, -1, -1, -1, -1, -1);
    large_airframe_radar.set_prerequisite_techs(252, 2, -1, -1, -1, -1, -1, -1, -1, -1);


    //Naval units
    torpedo_boat_armament.set_prerequisite_techs(196, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    torpedo_boat_armour.set_prerequisite_techs(196, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    torpedo_boat_engine.set_prerequisite_techs(196, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    torpedoes.set_prerequisite_techs(196, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    destroyer_creation.set_prerequisite_techs(196, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    destroyer_armament.set_prerequisite_techs(201, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    destroyer_armour.set_prerequisite_techs(201, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    destroyer_engine.set_prerequisite_techs(201, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    destroyer_anti_air.set_prerequisite_techs(201, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    light_cruiser_creation.set_prerequisite_techs(201, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    light_cruiser_armament.set_prerequisite_techs(206, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    light_cruiser_armour.set_prerequisite_techs(206, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    light_cruiser_engine.set_prerequisite_techs(206, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    light_cruiser_anti_air.set_prerequisite_techs(206, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    heavy_cruiser_creation.set_prerequisite_techs(206, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    heavy_cruiser_armament.set_prerequisite_techs(211, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    heavy_cruiser_armour.set_prerequisite_techs(211, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    heavy_cruiser_engine.set_prerequisite_techs(211, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    heavy_cruiser_anti_air.set_prerequisite_techs(211, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    battleship_creation.set_prerequisite_techs(211, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    capital_ship_armament.set_prerequisite_techs(216, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    battleship_armour.set_prerequisite_techs(216, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    battleship_engine.set_prerequisite_techs(216, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    battleship_anti_air.set_prerequisite_techs(216, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    super_heavy_battleship_creation.set_prerequisite_techs(216, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    battlecruiser_creation.set_prerequisite_techs(216, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    battlecruiser_armour.set_prerequisite_techs(221, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    battlecruiser_engine.set_prerequisite_techs(221, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    battlecruiser_anti_air.set_prerequisite_techs(221, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    aircraft_carrier_creation.set_prerequisite_techs(226, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    aircraft_carrier_armour.set_prerequisite_techs(227, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    aircraft_carrier_engine.set_prerequisite_techs(227, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    aircraft_carrier_anti_air.set_prerequisite_techs(227, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    aircraft_carrier_capacity.set_prerequisite_techs(227, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    submarine_creation.set_prerequisite_techs(196, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    submarine_hull.set_prerequisite_techs(232, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    submarine_engine.set_prerequisite_techs(232, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    submarine_anti_air.set_prerequisite_techs(232, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    assault_ship_creation.set_prerequisite_techs(226, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    small_warship_radar.set_prerequisite_techs(253, 3, -1, -1, -1, -1, -1, -1, -1, -1);
    small_warship_asw.set_prerequisite_techs(253, 3, -1, -1, -1, -1, -1, -1, -1, -1);
    large_warship_radar.set_prerequisite_techs(253, 3, -1, -1, -1, -1, -1, -1, -1, -1);
    submarine_sonar_and_detection_equipment.set_prerequisite_techs(253, 3, -1, -1, -1, -1, -1, -1, -1, -1);
    submarine_air_warning_equipment.set_prerequisite_techs(253, 3, -1, -1, -1, -1, -1, -1, -1, -1);


    //Economy techs
    synthetic_oil_production.set_prerequisite_techs(240, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    rocket_engine.set_prerequisite_techs(248, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    theoretical_jet_engine.set_prerequisite_techs(249, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    radio_detection.set_prerequisite_techs(251, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    radar.set_prerequisite_techs(252, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    encryption.set_prerequisite_techs(254, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    decryption.set_prerequisite_techs(254, 1, -1, -1, -1, -1, -1, -1, -1, -1);

    nuclear_research.set_prerequisite_techs(257, 1, -1, -1, -1, -1, -1, -1, -1, -1);
    atomic_bomb.set_prerequisite_techs(258, 1, -1, -1, -1, -1, -1, -1, -1, -1);


                            /*  All objects are added to appropriate vectors  */


    //Lands units
    Technology::infantry_and_support_techs.push_back(militia_primary_weapons);
    Technology::infantry_and_support_techs.push_back(militia_support_weapons);
    Technology::infantry_and_support_techs.push_back(militia_anti_tank_weapons);
    Technology::infantry_and_support_techs.push_back(militia_light_artillery);

    Technology::infantry_and_support_techs.push_back(cavalry_primary_weapons);
    Technology::infantry_and_support_techs.push_back(cavalry_support_weapons);
    Technology::infantry_and_support_techs.push_back(cavalry_anti_tank_weapons);
    Technology::infantry_and_support_techs.push_back(cavalry_light_artillery);

    Technology::infantry_and_support_techs.push_back(infantry_creation);
    Technology::infantry_and_support_techs.push_back(infantry_primary_weapons);
    Technology::infantry_and_support_techs.push_back(infantry_support_weapons);
    Technology::infantry_and_support_techs.push_back(infantry_anti_tank_weapons);
    Technology::infantry_and_support_techs.push_back(infantry_light_artillery);

    Technology::infantry_and_support_techs.push_back(mountain_infantry_creation);
    Technology::infantry_and_support_techs.push_back(marine_infantry_creation);
    Technology::infantry_and_support_techs.push_back(elite_infantry_creation);
    Technology::infantry_and_support_techs.push_back(motorized_infantry_creation);
    Technology::infantry_and_support_techs.push_back(airborne_infantry_creation);
    Technology::infantry_and_support_techs.push_back(mechanized_infantry_creation);

    Technology::infantry_and_support_techs.push_back(artillery_creation);
    Technology::infantry_and_support_techs.push_back(artillery_gun);
    Technology::infantry_and_support_techs.push_back(artillery_sights);

    Technology::infantry_and_support_techs.push_back(anti_tank_creation);
    Technology::infantry_and_support_techs.push_back(anti_tank_gun);
    Technology::infantry_and_support_techs.push_back(anti_tank_sights);

    Technology::infantry_and_support_techs.push_back(anti_aircraft_creation);
    Technology::infantry_and_support_techs.push_back(anti_aircraft_gun);
    Technology::infantry_and_support_techs.push_back(anti_aircraft_sights);

    Technology::armour_techs.push_back(armoured_car_gun);
    Technology::armour_techs.push_back(armoured_car_armour);

    Technology::armour_techs.push_back(light_tank_creation);
    Technology::armour_techs.push_back(light_tank_gun);
    Technology::armour_techs.push_back(light_tank_engine);
    Technology::armour_techs.push_back(light_tank_armour);
    Technology::armour_techs.push_back(light_tank_reliability);
    Technology::armour_techs.push_back(light_tank_hull_and_turret);

    Technology::armour_techs.push_back(medium_tank_creation);
    Technology::armour_techs.push_back(medium_tank_gun);
    Technology::armour_techs.push_back(medium_tank_engine);
    Technology::armour_techs.push_back(medium_tank_armour);
    Technology::armour_techs.push_back(medium_tank_reliability);
    Technology::armour_techs.push_back(medium_tank_hull_and_turret);

    Technology::armour_techs.push_back(heavy_tank_creation);
    Technology::armour_techs.push_back(heavy_tank_gun);
    Technology::armour_techs.push_back(heavy_tank_engine);
    Technology::armour_techs.push_back(heavy_tank_armour);
    Technology::armour_techs.push_back(heavy_tank_reliability);
    Technology::armour_techs.push_back(heavy_tank_hull_and_turret);

    Technology::armour_techs.push_back(super_heavy_tank_creation);
    Technology::armour_techs.push_back(super_heavy_tank_gun);
    Technology::armour_techs.push_back(super_heavy_tank_engine);
    Technology::armour_techs.push_back(super_heavy_tank_armour);
    Technology::armour_techs.push_back(super_heavy_tank_reliability);
    Technology::armour_techs.push_back(super_heavy_tank_hull_and_turret);

    Technology::armour_techs.push_back(modern_tank_creation);
    Technology::armour_techs.push_back(modern_tank_gun);
    Technology::armour_techs.push_back(modern_tank_engine);
    Technology::armour_techs.push_back(modern_tank_armour);
    Technology::armour_techs.push_back(modern_tank_reliability);
    Technology::armour_techs.push_back(modern_tank_hull_and_turret);


    //Air units
    Technology::single_engine_aircraft_techs.push_back(fighter_creation);
    Technology::single_engine_aircraft_techs.push_back(fighter_armament);
    Technology::single_engine_aircraft_techs.push_back(fighter_airframe);
    Technology::single_engine_aircraft_techs.push_back(fighter_fuel_tank);

    Technology::single_engine_aircraft_techs.push_back(close_air_support_creation);
    Technology::single_engine_aircraft_techs.push_back(fighter_bomber_creation);
    Technology::single_engine_aircraft_techs.push_back(naval_bomber_creation);
    Technology::single_engine_aircraft_techs.push_back(rocket_interceptor_creation);

    Technology::carrier_aircraft_techs.push_back(carrier_close_air_support_creation);
    Technology::carrier_aircraft_techs.push_back(carrier_fighter_creation);
    Technology::carrier_aircraft_techs.push_back(carrier_naval_bomber_creation);

    Technology::twin_engine_aircraft_techs.push_back(medium_bomber_creation);
    Technology::twin_engine_aircraft_techs.push_back(medium_bomber_guns);
    Technology::twin_engine_aircraft_techs.push_back(medium_bomber_airframe);
    Technology::twin_engine_aircraft_techs.push_back(medium_bomber_fuel_tank);

    Technology::twin_engine_aircraft_techs.push_back(heavy_fighter_creation);

    Technology::aircraft_armament_and_engine_techs.push_back(small_bombs);
    Technology::aircraft_armament_and_engine_techs.push_back(medium_bombs);
    Technology::aircraft_armament_and_engine_techs.push_back(large_bombs);
    Technology::aircraft_armament_and_engine_techs.push_back(rockets);
    Technology::aircraft_armament_and_engine_techs.push_back(air_launched_torpedoes);

    Technology::aircraft_armament_and_engine_techs.push_back(aero_engine);
    Technology::aircraft_armament_and_engine_techs.push_back(jet_engine);

    Technology::four_engine_aircraft_techs.push_back(heavy_bomber_creation);
    Technology::four_engine_aircraft_techs.push_back(heavy_bomber_guns);
    Technology::four_engine_aircraft_techs.push_back(heavy_bomber_airframe);
    Technology::four_engine_aircraft_techs.push_back(heavy_bomber_fuel_tank);

    Technology::four_engine_aircraft_techs.push_back(transport_plane_creation);
    Technology::four_engine_aircraft_techs.push_back(transport_plane_capacity);

    Technology::aircraft_radar_techs.push_back(small_airframe_radar);
    Technology::aircraft_radar_techs.push_back(medium_airframe_radar);
    Technology::aircraft_radar_techs.push_back(large_airframe_radar);


    //Naval units
    Technology::destroyer_and_pt_boat_techs.push_back(torpedo_boat_creation);
    Technology::destroyer_and_pt_boat_techs.push_back(torpedo_boat_armament);
    Technology::destroyer_and_pt_boat_techs.push_back(torpedo_boat_armour);
    Technology::destroyer_and_pt_boat_techs.push_back(torpedo_boat_engine);

    Technology::destroyer_and_pt_boat_techs.push_back(destroyer_creation);
    Technology::destroyer_and_pt_boat_techs.push_back(destroyer_armament);
    Technology::destroyer_and_pt_boat_techs.push_back(destroyer_armour);
    Technology::destroyer_and_pt_boat_techs.push_back(destroyer_engine);
    Technology::destroyer_and_pt_boat_techs.push_back(destroyer_anti_air);

    Technology::cruiser_techs.push_back(light_cruiser_creation);
    Technology::cruiser_techs.push_back(light_cruiser_armament);
    Technology::cruiser_techs.push_back(light_cruiser_armour);
    Technology::cruiser_techs.push_back(light_cruiser_engine);
    Technology::cruiser_techs.push_back(light_cruiser_anti_air);

    Technology::cruiser_techs.push_back(heavy_cruiser_creation);
    Technology::cruiser_techs.push_back(heavy_cruiser_armament);
    Technology::cruiser_techs.push_back(heavy_cruiser_armour);
    Technology::cruiser_techs.push_back(heavy_cruiser_engine);
    Technology::cruiser_techs.push_back(heavy_cruiser_anti_air);

    Technology::battleship_and_cruiser_techs.push_back(battleship_creation);
    Technology::battleship_and_cruiser_techs.push_back(battleship_armour);
    Technology::battleship_and_cruiser_techs.push_back(battleship_engine);
    Technology::battleship_and_cruiser_techs.push_back(battleship_anti_air);
    Technology::battleship_and_cruiser_techs.push_back(capital_ship_armament);
    Technology::battleship_and_cruiser_techs.push_back(super_heavy_battleship_creation);

    Technology::battleship_and_cruiser_techs.push_back(battlecruiser_creation);
    Technology::battleship_and_cruiser_techs.push_back(battlecruiser_armour);
    Technology::battleship_and_cruiser_techs.push_back(battlecruiser_engine);
    Technology::battleship_and_cruiser_techs.push_back(battlecruiser_anti_air);

    Technology::aircraft_carrier_techs.push_back(escort_carrier_creation);
    Technology::aircraft_carrier_techs.push_back(aircraft_carrier_creation);
    Technology::aircraft_carrier_techs.push_back(aircraft_carrier_armour);
    Technology::aircraft_carrier_techs.push_back(aircraft_carrier_engine);
    Technology::aircraft_carrier_techs.push_back(aircraft_carrier_anti_air);
    Technology::aircraft_carrier_techs.push_back(aircraft_carrier_capacity);

    Technology::submarine_and_torpedo_techs.push_back(submarine_creation);
    Technology::submarine_and_torpedo_techs.push_back(submarine_hull);
    Technology::submarine_and_torpedo_techs.push_back(submarine_engine);
    Technology::submarine_and_torpedo_techs.push_back(submarine_anti_air);
    Technology::submarine_and_torpedo_techs.push_back(torpedoes);

    Technology::radar_sonar_and_transport_techs.push_back(landing_craft_creation);
    Technology::radar_sonar_and_transport_techs.push_back(assault_ship_creation);

    Technology::radar_sonar_and_transport_techs.push_back(small_warship_radar);
    Technology::radar_sonar_and_transport_techs.push_back(small_warship_asw);
    Technology::radar_sonar_and_transport_techs.push_back(large_warship_radar);
    Technology::radar_sonar_and_transport_techs.push_back(submarine_sonar_and_detection_equipment);
    Technology::radar_sonar_and_transport_techs.push_back(submarine_air_warning_equipment);


    //Economic techs
    Technology::science_and_manpower_techs.push_back(education);
    Technology::science_and_manpower_techs.push_back(agriculture);
    Technology::science_and_manpower_techs.push_back(combat_medicine);
    Technology::science_and_manpower_techs.push_back(first_aid);

    Technology::resource_and_production_techs.push_back(coal_processing);
    Technology::resource_and_production_techs.push_back(steel_production);
    Technology::resource_and_production_techs.push_back(rare_material_refining);

    Technology::resource_and_production_techs.push_back(synthetic_oil_creation);
    Technology::resource_and_production_techs.push_back(synthetic_oil_production);

    Technology::resource_and_production_techs.push_back(supply_production);
    Technology::resource_and_production_techs.push_back(fuel_production);
    Technology::resource_and_production_techs.push_back(resource_transportation);
    Technology::resource_and_production_techs.push_back(resource_organisation);

    Technology::resource_and_production_techs.push_back(production_boost);
    Technology::resource_and_production_techs.push_back(production_efficiency);

    Technology::jet_engine_and_rocket_techs.push_back(rocket_tests);
    Technology::jet_engine_and_rocket_techs.push_back(rocket_engine);
    Technology::jet_engine_and_rocket_techs.push_back(theoretical_jet_engine);

    Technology::electronic_and_cryptographic_techs.push_back(radio);
    Technology::electronic_and_cryptographic_techs.push_back(radio_detection);
    Technology::electronic_and_cryptographic_techs.push_back(radar);
    Technology::electronic_and_cryptographic_techs.push_back(computing_machine);
    Technology::electronic_and_cryptographic_techs.push_back(encryption);
    Technology::electronic_and_cryptographic_techs.push_back(decryption);

    Technology::nuclear_techs.push_back(atomic_research);
    Technology::nuclear_techs.push_back(nuclear_research);
    Technology::nuclear_techs.push_back(atomic_bomb);
}

void Controller::create_buildings()
{
    /**  Creates building objects, sets their prerequisites and incompatibilities, adds them to static vectors.     */

                                /*  Creation of default objects for building class   */

    //Debug building class object creation
    Building empty = Building (0, "Empty", 0, 0, 0, 0, 0, -1, -1, -1);

    //Building class object creation
    Building university = Building (1, "University", 150, 50, 100, 50, 2, 1, -1, -1);

    Building public_school = Building (2, "Public School", 300, 200, 200, 100, 3, 1, -1, -1,
                                       Technology::science_and_manpower_techs[0], 1);

    Building research_center = Building (3, "Research center", 400, 300, 200, 150, 5, 1, -1, -1,
                                         Technology::science_and_manpower_techs[0], 3);

    Building barracks = Building (4, "Barracks", 150, 50, 100, 50, 2, 3, 12, -1,
                                  Technology::infantry_and_support_techs[8], 0);

    Building military_academy = Building (5, "Military academy", 200, 100, 200, 100, 4, 3, 11, 12);
    Building military_base = Building (6, "Military base", 450, 200, 400, 150, 8, 3, 11, -1);

    Building factory = Building (7, "Factory", 275, 100, 75, 25, 2, 2, 7, -1);

    Building armour_factory = Building (8, "Armour factory", 320, 125, 100, 50, 2, 3, 7, -1,
                                        Technology::armour_techs[2], 0);

    Building small_air_factory = Building (9, "Small air factory", 320, 125, 100, 50, 2, 2, 3, 7,
                                           Technology::single_engine_aircraft_techs[0], 0);

    Building medium_air_factory = Building (10, "Medium air factory", 320, 125, 100, 50, 2, 2, 3, 7,
                                            Technology::twin_engine_aircraft_techs[0], 0);

    Building large_air_factory = Building (11, "Large air factory", 320, 125, 100, 50, 2, 2, 3, 7,
                                           Technology::four_engine_aircraft_techs[0], 0);

    Building harbor = Building (12, "Harbor", 150, 50, 100, 25, 2, 3, 7, 9);

    Building shipyard = Building (13, "Shipyard", 320, 125, 100, 50, 3, 2, 3, -1,
                                  Technology::destroyer_and_pt_boat_techs[4], 0);

    Building naval_base = Building (14, "Naval base", 250, 100, 75, 50, 2, 9, -1, -1,
                                    Technology::destroyer_and_pt_boat_techs[4], 0);

    Building airfield = Building (15, "Airfield", 250, 100, 75, 50, 2, 9, -1, -1,
                                  Technology::single_engine_aircraft_techs[0], 0);

    Building synthetic_oil_refinery = Building (16, "Synthetic oil refinery", 400, 250, 300, 150, 2, 3, -1, -1,
                                                Technology::resource_and_production_techs[3], 0);

    Building oil_well = Building (17, "Oil well", 200, 150, 100, 25, 3, 6, -1, -1);
    Building coal_mine = Building (18, "Coal mine", 200, 50, 100, 25, 2, 4, -1, -1);
    Building quarry = Building (19, "Quarry", 200, 150, 50, 25, 2, 5, -1, -1);
    Building mine_shaft = Building (20, "Mine shaft", 200, 150, 100, 10, 2, 13, -1, -1);

    Building bank = Building (21, "Bank", 250, 100, 50, 125, 0, 10, 0, 0);
    Building stock_exchange = Building (22, "Stock exchange", 450, 200, 100, 250, 0, 10, -1, -1);


                                /*  Addition of objects to appropriate vectors  */

    Building::education_buildings.push_back(university);
    Building::education_buildings.push_back(public_school);
    Building::education_buildings.push_back(research_center);

    Building::military_buildings.push_back(barracks);
    Building::military_buildings.push_back(military_academy);
    Building::military_buildings.push_back(military_base);
    Building::military_buildings.push_back(naval_base);
    Building::military_buildings.push_back(airfield);

    Building::factories.push_back(factory);
    Building::factories.push_back(armour_factory);
    Building::factories.push_back(small_air_factory);
    Building::factories.push_back(medium_air_factory);
    Building::factories.push_back(large_air_factory);
    Building::factories.push_back(shipyard);

    Building::resource_buildings.push_back(synthetic_oil_refinery);
    Building::resource_buildings.push_back(oil_well);
    Building::resource_buildings.push_back(coal_mine);
    Building::resource_buildings.push_back(quarry);
    Building::resource_buildings.push_back(mine_shaft);

    Building::economic_buildings.push_back(harbor);
    Building::economic_buildings.push_back(bank);
    Building::economic_buildings.push_back(stock_exchange);


                                    /*  Prerequisite settings for buildings  */

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


                                    /*  Incompatibility settings for buildings  */

    armour_factory.set_incompatible_buildings(small_air_factory, medium_air_factory,  large_air_factory);
    small_air_factory.set_incompatible_buildings(armour_factory, large_air_factory, empty);
    medium_air_factory.set_incompatible_buildings(armour_factory, empty, empty);
    large_air_factory.set_incompatible_buildings(armour_factory, small_air_factory, empty);
}
