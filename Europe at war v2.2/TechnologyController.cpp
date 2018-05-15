//
// Created by Ted on 6/3/2018
//

#include <iostream>
#include "TechnologyController.h"

void TechnologyController::populateArmourList()
{
    //Object creation
    Technology armoured_car_gun = Technology ("Armoured car gun", 3000, 1, 10);
    Technology armoured_car_armour = Technology ("Armoured car armour", 3000, 1, 10);

    Technology light_tank_creation = Technology ("Light tank", 4000);
    Technology light_tank_gun = Technology ("Light tank gun", 4000, 1, 10);
    Technology light_tank_engine = Technology ("Light tank engine", 4000, 1, 10);
    Technology light_tank_armour = Technology ("Light tank armour", 4000, 1, 10);
    Technology light_tank_reliability = Technology ("Light tank reliability", 4000, 1, 10);
    Technology light_tank_hull_and_turret = Technology ("Light tank hull and turret", 4000, 1, 10);

    Technology medium_tank_creation = Technology ("Medium tank", 6000);
    Technology medium_tank_gun = Technology ("Medium tank gun", 6000, 1, 10);
    Technology medium_tank_engine = Technology ("Medium tank engine", 6000, 1, 10);
    Technology medium_tank_armour = Technology ("Medium tank armour", 6000, 1, 10);
    Technology medium_tank_reliability = Technology ("Medium tank reliability", 6000, 1, 10);
    Technology medium_tank_hull_and_turret = Technology ("Medium tank hull and turret", 6000, 1, 10);

    Technology heavy_tank_creation = Technology ("Heavy tank", 8000);
    Technology heavy_tank_gun = Technology ("Heavy tank gun", 8000, 1, 10);
    Technology heavy_tank_engine = Technology ("Heavy tank engine", 8000, 1, 10);
    Technology heavy_tank_armour = Technology ("Heavy tank armour", 8000, 1, 10);
    Technology heavy_tank_reliability = Technology ("Heavy tank reliability", 8000, 1, 10);
    Technology heavy_tank_hull_and_turret = Technology ("Heavy tank hull and turret", 8000, 1, 10);

    Technology super_heavy_tank_creation = Technology ("Super heavy tank", 10000);
    Technology super_heavy_tank_gun = Technology ("Super heavy tank gun", 10000, 1, 10);
    Technology super_heavy_tank_engine = Technology ("Super heavy tank engine", 10000, 1, 10);
    Technology super_heavy_tank_armour = Technology ("Super heavy tank armour", 10000, 1, 10);
    Technology super_heavy_tank_reliability = Technology ("Super heavy tank reliability", 10000, 1, 10);
    Technology super_heavy_tank_hull_and_turret = Technology ("Super heavy tank hull and turret", 10000, 1, 10);

    Technology modern_tank_creation = Technology ("Modern tank", 12000);
    Technology modern_tank_gun = Technology ("Modern tank gun", 12000, 1, 10);
    Technology modern_tank_engine = Technology ("Modern tank engine", 12000, 1, 10);
    Technology modern_tank_armour = Technology ("Modern tank armour", 12000, 1, 10);
    Technology modern_tank_reliability = Technology ("Modern tank reliability", 12000, 1, 10);
    Technology modern_tank_hull_and_turret = Technology ("Modern tank hull and turret", 12000, 1, 10);

    //Setting of prerequisites
    armoured_car_armour.setPrerequisiteTechs(std::pair<int, int> ( light_tank_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    armoured_car_gun.setPrerequisiteTechs(std::pair<int, int> ( light_tank_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    medium_tank_creation.setPrerequisiteTechs(std::pair<int, int> ( light_tank_gun.getId(), 3 ),
            std::pair<int, int> ( light_tank_engine.getId(), 3 ),
            std::pair<int, int> ( light_tank_armour.getId(), 3 ),
            std::pair<int, int> ( light_tank_reliability.getId(), 3 ),
            std::pair<int, int> ( light_tank_hull_and_turret.getId(), 3));

    heavy_tank_creation.setPrerequisiteTechs(std::pair<int, int> ( medium_tank_gun.getId(), 3 ),
            std::pair<int, int> ( medium_tank_engine.getId(), 3 ),
            std::pair<int, int> ( medium_tank_armour.getId(), 3 ),
            std::pair<int, int> ( medium_tank_reliability.getId(), 3 ),
            std::pair<int, int> ( medium_tank_hull_and_turret.getId(), 3));

    super_heavy_tank_creation.setPrerequisiteTechs(std::pair<int, int> ( heavy_tank_gun.getId(), 3 ),
            std::pair<int, int> ( heavy_tank_engine.getId(), 3 ),
            std::pair<int, int> ( heavy_tank_armour.getId(), 3 ),
            std::pair<int, int> ( heavy_tank_reliability.getId(), 3 ),
            std::pair<int, int> ( heavy_tank_hull_and_turret.getId(), 3));

    modern_tank_creation.setPrerequisiteTechs(std::pair<int, int> ( heavy_tank_gun.getId(), 4 ),
            std::pair<int, int> ( heavy_tank_engine.getId(), 4 ),
            std::pair<int, int> ( heavy_tank_armour.getId(), 4 ),
            std::pair<int, int> ( heavy_tank_reliability.getId(), 4 ),
            std::pair<int, int> ( heavy_tank_hull_and_turret.getId(), 4));

    //Addition of objects to vector
    armourTechs.push_back(armoured_car_gun);
    armourTechs.push_back(armoured_car_armour);

    armourTechs.push_back(light_tank_creation);
    armourTechs.push_back(light_tank_gun);
    armourTechs.push_back(light_tank_engine);
    armourTechs.push_back(light_tank_armour);
    armourTechs.push_back(light_tank_reliability);
    armourTechs.push_back(light_tank_hull_and_turret);

    armourTechs.push_back(medium_tank_creation);
    armourTechs.push_back(medium_tank_gun);
    armourTechs.push_back(medium_tank_engine);
    armourTechs.push_back(medium_tank_armour);
    armourTechs.push_back(medium_tank_reliability);
    armourTechs.push_back(medium_tank_hull_and_turret);

    armourTechs.push_back(heavy_tank_creation);
    armourTechs.push_back(heavy_tank_gun);
    armourTechs.push_back(heavy_tank_engine);
    armourTechs.push_back(heavy_tank_armour);
    armourTechs.push_back(heavy_tank_reliability);
    armourTechs.push_back(heavy_tank_hull_and_turret);

    armourTechs.push_back(super_heavy_tank_creation);
    armourTechs.push_back(super_heavy_tank_gun);
    armourTechs.push_back(super_heavy_tank_engine);
    armourTechs.push_back(super_heavy_tank_armour);
    armourTechs.push_back(super_heavy_tank_reliability);
    armourTechs.push_back(super_heavy_tank_hull_and_turret);

    armourTechs.push_back(modern_tank_creation);
    armourTechs.push_back(modern_tank_gun);
    armourTechs.push_back(modern_tank_engine);
    armourTechs.push_back(modern_tank_armour);
    armourTechs.push_back(modern_tank_reliability);
    armourTechs.push_back(modern_tank_hull_and_turret);
}

void TechnologyController::populateInfantryAndSupportList()
{
    //Object creation
    Technology militia_primary_weapons = Technology ("Militia primary weapons", 1200, 1, 10);
    Technology militia_support_weapons = Technology ("Militia support weapons", 1200, 1, 10);
    Technology militia_anti_tank_weapons = Technology ("Militia anti-tank weapons", 1200, 1, 10);
    Technology militia_light_artillery = Technology ("Militia light artillery", 1200, 1, 10);

    Technology cavalry_primary_weapons = Technology ("Cavalry primary weapons", 1600, 1, 10);
    Technology cavalry_support_weapons = Technology ("Cavalry support weapons", 1600, 1, 10);
    Technology cavalry_anti_tank_weapons = Technology ("Cavalry anti-tank weapons", 1600, 1, 10);
    Technology cavalry_light_artillery = Technology ("Cavalry light artillery", 1600, 1, 10);

    Technology infantry_creation = Technology ("Infantry", 2000);
    Technology infantry_primary_weapons = Technology ("Infantry primary weapons", 2000, 1, 10);
    Technology infantry_support_weapons = Technology ("Infantry support weapons", 2000, 1, 10);
    Technology infantry_anti_tank_weapons = Technology ("Infantry anti-tank weapons", 2000, 1, 10);
    Technology infantry_light_artillery = Technology ("Infantry light artillery", 2000, 1, 10);

    Technology mountain_infantry_creation = Technology ("Mountain infantry", 2000);
    Technology marine_infantry_creation = Technology ("Marine infantry", 2000);
    Technology elite_infantry_creation = Technology ("Elite infantry", 2000);
    Technology motorized_infantry_creation = Technology ("Motorized infantry", 2000);
    Technology airborne_infantry_creation = Technology ("Paratroopers", 2000);
    Technology mechanized_infantry_creation = Technology ("Mechanized infantry", 2000);

    Technology artillery_creation = Technology ("Artillery", 2000);
    Technology artillery_gun = Technology ("Artillery barrel and ammunition", 2000, 1, 10);
    Technology artillery_sights = Technology ("Artillery sights and carriage", 2000, 1, 10);

    Technology anti_tank_creation = Technology ("Anti-tank gun", 2000);
    Technology anti_tank_gun = Technology ("Anti-tank barrel and ammunition", 2000, 1, 10);
    Technology anti_tank_sights = Technology ("Anti-tank sights and carriage", 2000, 1, 10);

    Technology anti_aircraft_creation = Technology ("Anti-aircraft gun", 2000);
    Technology anti_aircraft_gun = Technology ("Anti-aircraft barrel and ammunition", 2000, 1, 10);
    Technology anti_aircraft_sights = Technology ("Anti-aircraft sights and carriage", 2000, 1, 10);


    //Setting of prerequisites
    //infantry_creation.setPrerequisiteTechs("Militia primary weapons", 2, "Militia support weapons", 2,
    //                                       "Militia anti-tank weapons", 2, "Militia light artillery", 2, emptyTechnology.getId(), -1);

    infantry_primary_weapons.setPrerequisiteTechs(std::pair<int, int> ( infantry_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    infantry_anti_tank_weapons.setPrerequisiteTechs(std::pair<int, int> ( infantry_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    infantry_support_weapons.setPrerequisiteTechs(std::pair<int, int> ( infantry_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    infantry_light_artillery.setPrerequisiteTechs(std::pair<int, int> ( infantry_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    elite_infantry_creation.setPrerequisiteTechs(std::pair<int, int> ( infantry_primary_weapons.getId(), 3) ,
            std::pair<int, int> ( infantry_support_weapons.getId(), 3 ),
            std::pair<int, int> ( infantry_anti_tank_weapons.getId(), 3 ),
            std::pair<int, int> ( infantry_light_artillery.getId(), 3 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    marine_infantry_creation.setPrerequisiteTechs(std::pair<int, int> ( infantry_primary_weapons.getId(), 3 ),
            std::pair<int, int> ( infantry_support_weapons.getId(), 3 ),
            std::pair<int, int> ( infantry_anti_tank_weapons.getId(), 3),
            std::pair<int, int> ( infantry_light_artillery.getId(), 3),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    airborne_infantry_creation.setPrerequisiteTechs(std::pair<int, int> ( infantry_primary_weapons.getId(), 4),
            std::pair<int, int> ( infantry_support_weapons.getId(), 4),
            std::pair<int, int> ( infantry_anti_tank_weapons.getId(), 4),
            std::pair<int, int> ( infantry_light_artillery.getId(), 4 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //motorized_infantry_creation.setPrerequisiteTechs(lig, 1, infantry_primary_weapons.getId(), 2, infantry_support_weapons.getId(), 2,
    //                                                 infantry_anti_tank_weapons.getId(), 2, infantry_light_artillery.getId(), 2);
    //mechanized_infantry_creation.setPrerequisiteTechs("Motorized infantry", 1, "Medium tank", 1, emptyTechnology.getId(), -1, emptyTechnology.getId(), -1, emptyTechnology.getId(), -1);

    artillery_gun.setPrerequisiteTechs(std::pair<int, int> ( artillery_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    artillery_sights.setPrerequisiteTechs(std::pair<int, int> ( artillery_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    anti_tank_gun.setPrerequisiteTechs(std::pair<int, int> ( anti_tank_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    anti_tank_sights.setPrerequisiteTechs(std::pair<int, int> ( anti_tank_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    anti_aircraft_gun.setPrerequisiteTechs(std::pair<int, int> ( anti_aircraft_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    anti_aircraft_sights.setPrerequisiteTechs(std::pair<int, int> ( anti_aircraft_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vector
    TechnologyController::infantryAndSupportTechs.push_back(militia_primary_weapons);
    TechnologyController::infantryAndSupportTechs.push_back(militia_support_weapons);
    TechnologyController::infantryAndSupportTechs.push_back(militia_anti_tank_weapons);
    TechnologyController::infantryAndSupportTechs.push_back(militia_light_artillery);

    TechnologyController::infantryAndSupportTechs.push_back(cavalry_primary_weapons);
    TechnologyController::infantryAndSupportTechs.push_back(cavalry_support_weapons);
    TechnologyController::infantryAndSupportTechs.push_back(cavalry_anti_tank_weapons);
    TechnologyController::infantryAndSupportTechs.push_back(cavalry_light_artillery);

    TechnologyController::infantryAndSupportTechs.push_back(infantry_creation);
    TechnologyController::infantryAndSupportTechs.push_back(infantry_primary_weapons);
    TechnologyController::infantryAndSupportTechs.push_back(infantry_support_weapons);
    TechnologyController::infantryAndSupportTechs.push_back(infantry_anti_tank_weapons);
    TechnologyController::infantryAndSupportTechs.push_back(infantry_light_artillery);

    TechnologyController::infantryAndSupportTechs.push_back(mountain_infantry_creation);
    TechnologyController::infantryAndSupportTechs.push_back(marine_infantry_creation);
    TechnologyController::infantryAndSupportTechs.push_back(elite_infantry_creation);
    TechnologyController::infantryAndSupportTechs.push_back(motorized_infantry_creation);
    TechnologyController::infantryAndSupportTechs.push_back(airborne_infantry_creation);
    TechnologyController::infantryAndSupportTechs.push_back(mechanized_infantry_creation);

    TechnologyController::infantryAndSupportTechs.push_back(artillery_creation);
    TechnologyController::infantryAndSupportTechs.push_back(artillery_gun);
    TechnologyController::infantryAndSupportTechs.push_back(artillery_sights);

    TechnologyController::infantryAndSupportTechs.push_back(anti_tank_creation);
    TechnologyController::infantryAndSupportTechs.push_back(anti_tank_gun);
    TechnologyController::infantryAndSupportTechs.push_back(anti_tank_sights);

    TechnologyController::infantryAndSupportTechs.push_back(anti_aircraft_creation);
    TechnologyController::infantryAndSupportTechs.push_back(anti_aircraft_gun);
    TechnologyController::infantryAndSupportTechs.push_back(anti_aircraft_sights);
}