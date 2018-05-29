//
// Created by Ted on 6/3/2018
//

#include "TechnologyController.h"


                                                /*  Constructor  */

TechnologyController::TechnologyController()
{
    /**  Default constructor. Creates the object and populates it's lists with hardcoded technologies.     */

    //Land lists
    populateArmourList();
    populateInfantryAndSupportList();

    //Air lists
    populateSingleEngineAircraftList();
    populateTwinEngineAircraftList();
    populateFourEngineAircraftList();
    populateAircraftArmamentAndEngineList();
    populateCarrierAircraftList();
    populateAircraftRadarList();

    //Naval lists
    populateDestroyerAndPtBoatList();
    populateCruiserList();
    populateBattleshipAndCruiserList();
    populateAircraftCarrierList();
    populateSubmarineAndTorpedoList();
    populateRadarSonarAndTransportList();

    //Economic lists
    populateScienceAndManpowerList();
    populateResourceAndProductionList();
    populateJetEngineAndRocketList();
    populateElectronicAndCryptographicList();
    populateNuclearList();
}


                                         /*  Single technology search methods  */

int TechnologyController::findArmourTechnologyIdByName(const std::string targetName)
{
    /** Searches for an armour technology in the respective list via a string that contains the target
      * objects's name. Returns the matching building object's id if found, -1 if nothing is found.         */

    for ( Technology technology : armourTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findInfantryAndSupportTechnologyIdByName(const std::string targetName)
{

    /** Searches for an infantry and support technology in the respective list via a string that contains
      * the target objects's name. Returns the matching building object's id if found, -1 if nothing is found.   */

    for ( Technology technology : infantryAndSupportTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findSingleEngineAircraftTechnologyIdByName(const std::string targetName)
{
    /** Searches for a single engine aircraft technology in the respective list via a string that contains
      * the target objects's name. Returns the matching building object's id if found, -1 if nothing is found.   */

    for ( Technology technology : singleEngineAircraftTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findTwinEngineAircraftTechnologyIdByName(const std::string targetName)
{
    /** Searches for a twin engine aircraft technology in the respective list via a string that contains
      * the target objects's name. Returns the matching building object's id if found, -1 if nothing is found.    */

    for ( Technology technology : twinEngineAircraftTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findFourEngineAircraftTechnologyIdByName(const std::string targetName)
{
    /** Searches for a four engine aircraft technology in the respective list via a string that contains
      * the target objects's name. Returns the matching building object's id if found, -1 if nothing is found.   */

    for ( Technology technology : fourEngineAircraftTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findAircraftArnamentAndEngineTechnologyIdByName(const std::string targetName)
{
    /** Searches for an aircraft armament and engine technology in the respective list via a string that
      * contains the target objects's name. Returns the matching building object's id if found, -1 if
      * nothing is found.                                                                                   */

    for ( Technology technology : aircraftArmamentAndEngineTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findCarrerAircraftTechnologyIdByName(const std::string targetName)
{
    /** Searches for a carrier aircraft technology in the respective list via a string that contains the target
      * objects's name. Returns the matching building object's id if found, -1 if nothing is found.             */

    for ( Technology technology : carrierAircraftTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findAircraftRadarTechnologyIdByName(const std::string targetName)
{
    /** Searches for an aircraft radar technology in the respective list via a string that contains the target
      * objects's name. Returns the matching building object's id if found, -1 if nothing is found.             */

    for ( Technology technology : aircraftRadarTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findDestroyerAndPtBoatTechnologyIdByName(const std::string targetName)
{
    /** Searches for a destroyer and PT boat technology in the respective list via a string that contains
      * the target objects's name. Returns the matching building object's id if found, -1 if nothing is found.    */

    for ( Technology technology : destroyerAndPtBoatTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findCruiserTechnologyIdByName(const std::string targetName)
{
    /** Searches for a cruiser technology in the respective list via a string that contains the target
      * objects's name. Returns the matching building object's id if found, -1 if nothing is found.         */

    for ( Technology technology : cruiserTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findBattleshipAndCruiserTechnologyIdByName(const std::string targetName)
{
    /** Searches for a battleship and battlecruiser technology in the respective list via a string that contains
      * the target objects's name. Returns the matching building object's id if found, -1 if nothing is found.      */

    for ( Technology technology : battleshipAndCruiserTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findAircraftCarrierTechnologyIdByName(const std::string targetName)
{
    /** Searches for an aircraft carrier technology technology in the respective list via a string that contains
      * the target objects's name. Returns the matching building object's id if found, -1 if nothing is found.    */

    for ( Technology technology : aircraftCarrierTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findSubmarineAndTorpedoTechnologyIdByName(const std::string targetName)
{
    /** Searches for a submarine and torpedo technology in the respective list via a string that contains
      * the target objects's name. Returns the matching building object's id if found, -1 if nothing is found.    */

    for ( Technology technology : submarineAndTorpedoTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findRadarSonarAndTransportTechnologyIdByName(const std::string targetName)
{
    /** Searches for an radar, sonar and tranpsort technology in the respective list via a string that contains
      * the target objects's name. Returns the matching building object's id if found, -1 if nothing is found.     */

    for ( Technology technology : radarSonarAndTransportTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findScienceAndManpowerTechnologyIdByName(const std::string targetName)
{
    /** Searches for a science and manpower technology in the respective list via a string that contains
      * the target objects's name. Returns the matching building object's id if found, -1 if nothing is found.    */

    for ( Technology technology : scienceAndManpowerTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findResourceAndProductionTechnologyIdByName(const std::string targetName)
{
    /** Searches for a resource and production technology in the respective list via a string that contains
      * the target objects's name. Returns the matching building object's id if found, -1 if nothing is found.   */

    for ( Technology technology : resourceAndProductionTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findJetEngineAndRocketTechnologyIdByName(const std::string targetName)
{
    /** Searches for a jet engine and rocket technology in the respective list via a string that contains
      * the target objects's name. Returns the matching building object's id if found, -1 if nothing is found.    */

    for ( Technology technology : jetEngineAndRocketTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findElectronicAndCryptographicTechnologyIdByName(const std::string targetName)
{
    /** Searches for an electronic and cryptographic technology in the respective list via a string that
      * contains the target objects's name. Returns the matching building object's id if found, -1 if
      * nothing is found.                                                                                   */

    for ( Technology technology : electronicAndCryptographicTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}

int TechnologyController::findNuclearTechnologyIdByName(const std::string targetName)
{
    /** Searches for a nuclear technology in the respective list via a string that contains the target
      * objects's name. Returns the matching building object's id if found, -1 if nothing is found.         */

    for ( Technology technology : nuclearTechs )
    { if ( technology.getName() == targetName ) { return technology.getId(); }}

    return -1;
}


                                         /*  Population methods    */

void TechnologyController::populateArmourList()
{
    /** Fills up the object's armour vector with the technologies below and calls setter methods as necessary.  */

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
    /** Fills up the object's infantry and support vector with the technologies below and calls setter
      * methods as necessary.                                                                               */

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
    infantry_creation.setPrerequisiteTechs(std::pair<int, int> ( militia_primary_weapons.getId(), 2 ),
            std::pair<int, int> ( militia_support_weapons.getId(), 2 ),
            std::pair<int, int> ( militia_anti_tank_weapons.getId(), 2 ),
            std::pair<int, int> ( militia_light_artillery.getId(), 2 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

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

    motorized_infantry_creation.setPrerequisiteTechs(std::pair<int, int> ( findArmourTechnologyIdByName("Light tank"), 1 ),
            std::pair<int, int> ( infantry_primary_weapons.getId(), 2 ),
            std::pair<int, int> ( infantry_support_weapons.getId(), 2 ),
            std::pair<int, int> ( infantry_anti_tank_weapons.getId(), 2 ),
            std::pair<int, int> ( infantry_light_artillery.getId(), 2));

    mechanized_infantry_creation.setPrerequisiteTechs(std::pair<int, int> ( motorized_infantry_creation.getId(), 1 ),
            std::pair<int, int> ( findArmourTechnologyIdByName("Medium tank"), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

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
    infantryAndSupportTechs.push_back(militia_primary_weapons);
    infantryAndSupportTechs.push_back(militia_support_weapons);
    infantryAndSupportTechs.push_back(militia_anti_tank_weapons);
    infantryAndSupportTechs.push_back(militia_light_artillery);

    infantryAndSupportTechs.push_back(cavalry_primary_weapons);
    infantryAndSupportTechs.push_back(cavalry_support_weapons);
    infantryAndSupportTechs.push_back(cavalry_anti_tank_weapons);
    infantryAndSupportTechs.push_back(cavalry_light_artillery);

    infantryAndSupportTechs.push_back(infantry_creation);
    infantryAndSupportTechs.push_back(infantry_primary_weapons);
    infantryAndSupportTechs.push_back(infantry_support_weapons);
    infantryAndSupportTechs.push_back(infantry_anti_tank_weapons);
    infantryAndSupportTechs.push_back(infantry_light_artillery);

    infantryAndSupportTechs.push_back(mountain_infantry_creation);
    infantryAndSupportTechs.push_back(marine_infantry_creation);
    infantryAndSupportTechs.push_back(elite_infantry_creation);
    infantryAndSupportTechs.push_back(motorized_infantry_creation);
    infantryAndSupportTechs.push_back(airborne_infantry_creation);
    infantryAndSupportTechs.push_back(mechanized_infantry_creation);

    infantryAndSupportTechs.push_back(artillery_creation);
    infantryAndSupportTechs.push_back(artillery_gun);
    infantryAndSupportTechs.push_back(artillery_sights);

    infantryAndSupportTechs.push_back(anti_tank_creation);
    infantryAndSupportTechs.push_back(anti_tank_gun);
    infantryAndSupportTechs.push_back(anti_tank_sights);

    infantryAndSupportTechs.push_back(anti_aircraft_creation);
    infantryAndSupportTechs.push_back(anti_aircraft_gun);
    infantryAndSupportTechs.push_back(anti_aircraft_sights);
}

void TechnologyController::populateSingleEngineAircraftList()
{
    /** Fills up the object's single engine aircraft vector with the technologies below and calls setter
      * methods as necessary.                                                                               */

    //Object creation
    Technology fighter_creation = Technology ("Fighter", 4000);
    Technology fighter_armament = Technology ("Fighter armament", 4000, 1, 10);
    Technology fighter_airframe = Technology ("Fighter airframe", 4000, 1, 10);
    Technology fighter_fuel_tank = Technology ("Fighter fuel tank", 4000, 1, 10);

    Technology close_air_support_creation = Technology ("Close air support", 4000);
    Technology fighter_bomber_creation = Technology ("Fighter-bomber", 4000);
    Technology naval_bomber_creation = Technology ("Naval bomber", 6000);
    Technology rocket_interceptor_creation = Technology ("Rocket interceptor", 10000);

    //Prerequisite settings
    fighter_airframe.setPrerequisiteTechs(std::pair<int, int> ( fighter_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    fighter_armament.setPrerequisiteTechs(std::pair<int, int> ( fighter_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    fighter_fuel_tank.setPrerequisiteTechs(std::pair<int, int> ( fighter_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vector
    singleEngineAircraftTechs.push_back(fighter_creation);
    singleEngineAircraftTechs.push_back(fighter_armament);
    singleEngineAircraftTechs.push_back(fighter_airframe);
    singleEngineAircraftTechs.push_back(fighter_fuel_tank);

    singleEngineAircraftTechs.push_back(close_air_support_creation);
    singleEngineAircraftTechs.push_back(fighter_bomber_creation);
    singleEngineAircraftTechs.push_back(naval_bomber_creation);
    singleEngineAircraftTechs.push_back(rocket_interceptor_creation);
}

void TechnologyController::populateTwinEngineAircraftList()
{
    /** Fills up the object's twin engine aircraft vector with the technologies below and calls setter
      * methods as necessary.                                                                               */

    //Object creation
    Technology medium_bomber_creation = Technology ("Medium bomber", 6000);
    Technology medium_bomber_guns = Technology ("Medium bomber guns", 6000, 1, 10);
    Technology medium_bomber_airframe = Technology ("Medium bomber airframe", 6000, 1, 10);
    Technology medium_bomber_fuel_tank = Technology ("Medium bomber fuel tank", 6000, 1, 10);

    Technology heavy_fighter_creation = Technology ("Heavy fighter", 6000);

    //Prerequisite settings
    medium_bomber_airframe.setPrerequisiteTechs(std::pair<int, int> ( medium_bomber_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    medium_bomber_guns.setPrerequisiteTechs(std::pair<int, int> ( medium_bomber_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    medium_bomber_fuel_tank.setPrerequisiteTechs(std::pair<int, int> ( medium_bomber_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    heavy_fighter_creation.setPrerequisiteTechs(std::pair<int, int> ( medium_bomber_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vector
    twinEngineAircraftTechs.push_back(medium_bomber_creation);
    twinEngineAircraftTechs.push_back(medium_bomber_guns);
    twinEngineAircraftTechs.push_back(medium_bomber_airframe);
    twinEngineAircraftTechs.push_back(medium_bomber_fuel_tank);

    twinEngineAircraftTechs.push_back(heavy_fighter_creation);
}

void TechnologyController::populateFourEngineAircraftList()
{
    /** Fills up the object's four engine aircraft vector with the technologies below and calls setter
      * methods as necessary.                                                                               */

    //Object creation
    Technology heavy_bomber_creation = Technology ("Heavy bomber", 8000);
    Technology heavy_bomber_guns = Technology ("Heavy bomber guns", 8000, 1, 10);
    Technology heavy_bomber_airframe = Technology ("Heavy bomber airframe", 8000, 1, 10);
    Technology heavy_bomber_fuel_tank = Technology ("Heavy bomber fuel tank", 8000, 1, 10);

    Technology transport_plane_creation = Technology ("Transport plane", 8000);
    Technology transport_plane_capacity = Technology ("Transport plane capacity", 8000, 1, 10);

    //Prerequisite settings
    heavy_bomber_airframe.setPrerequisiteTechs(std::pair<int, int> ( heavy_bomber_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    heavy_bomber_fuel_tank.setPrerequisiteTechs(std::pair<int, int> ( heavy_bomber_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    heavy_bomber_guns.setPrerequisiteTechs(std::pair<int, int> ( heavy_bomber_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vector
    fourEngineAircraftTechs.push_back(heavy_bomber_creation);
    fourEngineAircraftTechs.push_back(heavy_bomber_guns);
    fourEngineAircraftTechs.push_back(heavy_bomber_airframe);
    fourEngineAircraftTechs.push_back(heavy_bomber_fuel_tank);

    fourEngineAircraftTechs.push_back(transport_plane_creation);
    fourEngineAircraftTechs.push_back(transport_plane_capacity);
}

void TechnologyController::populateAircraftArmamentAndEngineList()
{
    /** Fills up the object's aircraft armament vector with the technologies below and calls setter
      * methods as necessary.                                                                               */

    //Object creation
    Technology small_bombs = Technology ("Small bombs", 4000, 1, 10);
    Technology medium_bombs = Technology ("Medium bombs", 6000, 1, 10);
    Technology large_bombs = Technology ("Large bombs", 8000, 1, 10);
    Technology rockets = Technology ("Rockets", 4000, 1, 10);
    Technology air_launched_torpedoes = Technology ("Air launched torpedoes", 6000, 1, 10);

    Technology aero_engine = Technology ("Aero engine", 6000, 1, 10);
    Technology jet_engine = Technology ("Jet engine", 8000, 1, 10);

    //Prerequisite settings
    aero_engine.setPrerequisiteTechs(std::pair<int, int> ( findSingleEngineAircraftTechnologyIdByName("Fighter"), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    jet_engine.setPrerequisiteTechs (
            std::pair<int, int> ( findJetEngineAndRocketTechnologyIdByName("Theoretical jet engine"), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vectors
    aircraftArmamentAndEngineTechs.push_back(small_bombs);
    aircraftArmamentAndEngineTechs.push_back(medium_bombs);
    aircraftArmamentAndEngineTechs.push_back(large_bombs);
    aircraftArmamentAndEngineTechs.push_back(rockets);
    aircraftArmamentAndEngineTechs.push_back(air_launched_torpedoes);

    aircraftArmamentAndEngineTechs.push_back(aero_engine);
    aircraftArmamentAndEngineTechs.push_back(jet_engine);
}

void TechnologyController::populateCarrierAircraftList()
{
    /** Fills up the object's carrier aircraft vector with the technologies below and calls setter
      * methods as necessary.                                                                               */

    //Object creation
    Technology carrier_close_air_support_creation = Technology ("Carrier close air support", 3000);
    Technology carrier_fighter_creation = Technology ("Carrier fighter", 3000);
    Technology carrier_naval_bomber_creation = Technology ("Carrier naval bomber", 3000);

    //Prerequisite settings

    //Addition of objects to vectors
    carrierAircraftTechs.push_back(carrier_close_air_support_creation);
    carrierAircraftTechs.push_back(carrier_fighter_creation);
    carrierAircraftTechs.push_back(carrier_naval_bomber_creation);
}

void TechnologyController::populateAircraftRadarList()
{
    /** Fills up the object's aircraft radar vector with the technologies below and calls setter
      * methods as necessary.                                                                               */

    //Object creation
    Technology small_airframe_radar = Technology ("Small airframe radar", 10000, 1, 10);
    Technology medium_airframe_radar = Technology ("Medium airframe radar", 10000, 1, 10);
    Technology large_airframe_radar = Technology ("Large airframe radar", 10000, 1, 10);

    //Prerequisite settings
    small_airframe_radar.setPrerequisiteTechs(std::pair<int, int> (
            findElectronicAndCryptographicTechnologyIdByName("Radar"), 2 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    medium_airframe_radar.setPrerequisiteTechs(std::pair<int, int> (
            findElectronicAndCryptographicTechnologyIdByName("Radar"), 2 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    large_airframe_radar.setPrerequisiteTechs(std::pair<int, int> (
            findElectronicAndCryptographicTechnologyIdByName("Radar"), 2 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vectors
    aircraftRadarTechs.push_back(small_airframe_radar);
    aircraftRadarTechs.push_back(medium_airframe_radar);
    aircraftRadarTechs.push_back(large_airframe_radar);
}

void TechnologyController::populateDestroyerAndPtBoatList()
{
    /** Fills up the object's destroyer and PT boat vector with the technologies below and calls setter
      * methods as necessary.                                                                               */

    //Object creation
    Technology torpedo_boat_creation = Technology ("Torpedo boat", 3000);
    Technology torpedo_boat_armament = Technology ("Torpedo boat armament", 3000, 1, 10);
    Technology torpedo_boat_armour = Technology ("Torpedo boat armour", 3000, 1, 10);
    Technology torpedo_boat_engine = Technology ("Torpedo boat engine", 3000, 1, 10);

    Technology torpedoes = Technology ("Torpedoes", 4000);

    Technology destroyer_creation = Technology ("Destroyer", 4000);
    Technology destroyer_armament = Technology ("Destroyer armament", 4000, 1, 10);
    Technology destroyer_armour = Technology ("Destroyer armour", 4000, 1, 10);
    Technology destroyer_engine = Technology ("Destroyer engine", 4000, 1, 10);
    Technology destroyer_anti_air = Technology ("Destroyer anti-air", 4000, 1, 10);

    //Prerequisite settings
    torpedo_boat_armament.setPrerequisiteTechs(std::pair<int, int> ( torpedo_boat_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    torpedo_boat_armour.setPrerequisiteTechs(std::pair<int, int> ( torpedo_boat_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    torpedo_boat_engine.setPrerequisiteTechs(std::pair<int, int> ( torpedo_boat_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    destroyer_creation.setPrerequisiteTechs(std::pair<int, int> ( torpedo_boat_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    destroyer_armament.setPrerequisiteTechs(std::pair<int, int> ( destroyer_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    destroyer_armour.setPrerequisiteTechs(std::pair<int, int> ( destroyer_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    destroyer_engine.setPrerequisiteTechs(std::pair<int, int> ( destroyer_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    destroyer_anti_air.setPrerequisiteTechs(std::pair<int, int> ( destroyer_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vectors
    destroyerAndPtBoatTechs.push_back(torpedo_boat_creation);
    destroyerAndPtBoatTechs.push_back(torpedo_boat_armament);
    destroyerAndPtBoatTechs.push_back(torpedo_boat_armour);
    destroyerAndPtBoatTechs.push_back(torpedo_boat_engine);

    destroyerAndPtBoatTechs.push_back(destroyer_creation);
    destroyerAndPtBoatTechs.push_back(destroyer_armament);
    destroyerAndPtBoatTechs.push_back(destroyer_armour);
    destroyerAndPtBoatTechs.push_back(destroyer_engine);
    destroyerAndPtBoatTechs.push_back(destroyer_anti_air);
}

void TechnologyController::populateCruiserList()
{
    /** Fills up the object's cruiser vector with the technologies below and calls setter
      * methods as necessary.                                                                   */

    //Object creation
    Technology light_cruiser_creation = Technology ("Light cruiser", 6000);
    Technology light_cruiser_armament = Technology ("Light cruiser armament", 6000, 1, 10);
    Technology light_cruiser_armour = Technology ("Light cruiser armour", 6000, 1, 10);
    Technology light_cruiser_engine = Technology ("Light cruiser engine", 6000, 1, 10);
    Technology light_cruiser_anti_air = Technology ("Light cruiser anti-air", 6000, 1, 10);

    Technology heavy_cruiser_creation = Technology ("Heavy cruiser", 6000);
    Technology heavy_cruiser_armament = Technology ("Heavy cruiser armament", 6000, 1, 10);
    Technology heavy_cruiser_armour = Technology ("Heavy cruiser armour", 6000, 1, 10);
    Technology heavy_cruiser_engine = Technology ("Heavy cruiser engine", 6000, 1, 10);
    Technology heavy_cruiser_anti_air = Technology ("Heavy cruiser anti-air", 6000, 1, 10);

    //Prerequisite settings
    light_cruiser_creation.setPrerequisiteTechs(
            std::pair<int, int> ( findDestroyerAndPtBoatTechnologyIdByName("Destroyer"), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    light_cruiser_armament.setPrerequisiteTechs(std::pair<int, int> ( light_cruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    light_cruiser_armour.setPrerequisiteTechs(std::pair<int, int> ( light_cruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    light_cruiser_engine.setPrerequisiteTechs(std::pair<int, int> ( light_cruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    light_cruiser_anti_air.setPrerequisiteTechs(std::pair<int, int> ( light_cruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    heavy_cruiser_creation.setPrerequisiteTechs(std::pair<int, int> ( light_cruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    heavy_cruiser_armament.setPrerequisiteTechs(std::pair<int, int> ( heavy_cruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    heavy_cruiser_armour.setPrerequisiteTechs(std::pair<int, int> ( heavy_cruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    heavy_cruiser_engine.setPrerequisiteTechs(std::pair<int, int> ( heavy_cruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    heavy_cruiser_anti_air.setPrerequisiteTechs(std::pair<int, int> ( heavy_cruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vectors
    cruiserTechs.push_back(light_cruiser_creation);
    cruiserTechs.push_back(light_cruiser_armament);
    cruiserTechs.push_back(light_cruiser_armour);
    cruiserTechs.push_back(light_cruiser_engine);
    cruiserTechs.push_back(light_cruiser_anti_air);

    cruiserTechs.push_back(heavy_cruiser_creation);
    cruiserTechs.push_back(heavy_cruiser_armament);
    cruiserTechs.push_back(heavy_cruiser_armour);
    cruiserTechs.push_back(heavy_cruiser_engine);
    cruiserTechs.push_back(heavy_cruiser_anti_air);
}

void TechnologyController::populateBattleshipAndCruiserList()
{
    /** Fills up the object's battleship and cruiser vector with the technologies below and calls setter
      * methods as necessary.                                                                               */

    //Object creation
    Technology battleship_creation = Technology ("Battleship", 8000);
    Technology battleship_armour = Technology ("Battleship armour", 8000, 1, 10);
    Technology battleship_engine = Technology ("Battleship engine", 8000, 1, 10);
    Technology battleship_anti_air = Technology ("Battleship anti-air", 8000, 1, 10);

    Technology capital_ship_armament = Technology ("Capital ship armament", 8000, 1, 10);

    Technology battlecruiser_creation = Technology ("Battlecruiser", 8000);
    Technology battlecruiser_armour = Technology ("Battlecruiser armour", 8000, 1, 10);
    Technology battlecruiser_engine = Technology ("Battlecruiser engine", 8000, 1, 10);
    Technology battlecruiser_anti_air = Technology ("Battlecruiser anti-air", 8000, 1, 10);

    Technology super_heavy_battleship_creation = Technology ("Super heavy battleship", 10000);

    //Prerequisite settings
    battleship_creation.setPrerequisiteTechs(std::pair<int, int> ( findCruiserTechnologyIdByName("Heavy cruiser"), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    capital_ship_armament.setPrerequisiteTechs(std::pair<int, int> ( battlecruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    battleship_armour.setPrerequisiteTechs(std::pair<int, int> ( battlecruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    battleship_engine.setPrerequisiteTechs(std::pair<int, int> ( battlecruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    battleship_anti_air.setPrerequisiteTechs(std::pair<int, int> ( battlecruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    super_heavy_battleship_creation.setPrerequisiteTechs(std::pair<int, int> ( battlecruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    battlecruiser_creation.setPrerequisiteTechs(std::pair<int, int> ( battlecruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    battlecruiser_armour.setPrerequisiteTechs(std::pair<int, int> ( battlecruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    battlecruiser_engine.setPrerequisiteTechs(std::pair<int, int> ( battlecruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    battlecruiser_anti_air.setPrerequisiteTechs(std::pair<int, int> ( battlecruiser_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vectors
    battleshipAndCruiserTechs.push_back(battleship_creation);
    battleshipAndCruiserTechs.push_back(battleship_armour);
    battleshipAndCruiserTechs.push_back(battleship_engine);
    battleshipAndCruiserTechs.push_back(battleship_anti_air);
    battleshipAndCruiserTechs.push_back(capital_ship_armament);
    battleshipAndCruiserTechs.push_back(super_heavy_battleship_creation);

    battleshipAndCruiserTechs.push_back(battlecruiser_creation);
    battleshipAndCruiserTechs.push_back(battlecruiser_armour);
    battleshipAndCruiserTechs.push_back(battlecruiser_engine);
    battleshipAndCruiserTechs.push_back(battlecruiser_anti_air);
}

void TechnologyController::populateAircraftCarrierList()
{
    /** Fills up the object's aircraft carrier vector with the technologies below and calls setter
      * methods as necessary.                                                                           */

    //Object creation
    Technology escort_carrier_creation = Technology ("Escort carrier", 8000);

    Technology aircraft_carrier_creation = Technology ("Aircraft carrier", 8000);
    Technology aircraft_carrier_armour = Technology ("Aircraft carrier armour", 8000, 1, 10);
    Technology aircraft_carrier_engine = Technology ("Aircraft carrier engine", 8000, 1, 10);
    Technology aircraft_carrier_anti_air = Technology ("Aircraft carrier anti-air", 8000, 1, 10);
    Technology aircraft_carrier_capacity = Technology ("Aircraft carrier capacity", 8000, 1, 10);

    //Prerequisite settings
    aircraft_carrier_creation.setPrerequisiteTechs(std::pair<int, int> ( escort_carrier_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    aircraft_carrier_armour.setPrerequisiteTechs(std::pair<int, int> ( aircraft_carrier_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    aircraft_carrier_engine.setPrerequisiteTechs(std::pair<int, int> ( aircraft_carrier_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    aircraft_carrier_anti_air.setPrerequisiteTechs(std::pair<int, int> ( aircraft_carrier_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    aircraft_carrier_capacity.setPrerequisiteTechs(std::pair<int, int> ( aircraft_carrier_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vectors
    aircraftCarrierTechs.push_back(escort_carrier_creation);
    aircraftCarrierTechs.push_back(aircraft_carrier_creation);
    aircraftCarrierTechs.push_back(aircraft_carrier_armour);
    aircraftCarrierTechs.push_back(aircraft_carrier_engine);
    aircraftCarrierTechs.push_back(aircraft_carrier_anti_air);
    aircraftCarrierTechs.push_back(aircraft_carrier_capacity);
}

void TechnologyController::populateSubmarineAndTorpedoList()
{
    /** Fills up the object's submarine and torpedo vector with the technologies below and calls setter
      * methods as necessary.                                                                               */

    //Object creation
    Technology torpedoes = Technology ("Torpedoes", 4000);

    Technology submarine_creation = Technology ("Submarine", 6000);
    Technology submarine_hull = Technology ("Submarine hull", 6000, 1, 10);
    Technology submarine_engine = Technology ("Submarine engine", 6000, 1, 10);
    Technology submarine_anti_air = Technology ("Submarine anti-air", 6000, 1, 10);

    //Prerequisite settings
    torpedoes.setPrerequisiteTechs(std::pair<int, int> ( findDestroyerAndPtBoatTechnologyIdByName("Torpedo boat"), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    submarine_creation.setPrerequisiteTechs(std::pair<int, int> ( torpedoes.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    submarine_hull.setPrerequisiteTechs(std::pair<int, int> ( submarine_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    submarine_engine.setPrerequisiteTechs(std::pair<int, int> ( submarine_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    submarine_anti_air.setPrerequisiteTechs(std::pair<int, int> ( submarine_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vectors
    submarineAndTorpedoTechs.push_back(torpedoes);

    submarineAndTorpedoTechs.push_back(submarine_creation);
    submarineAndTorpedoTechs.push_back(submarine_hull);
    submarineAndTorpedoTechs.push_back(submarine_engine);
    submarineAndTorpedoTechs.push_back(submarine_anti_air);

}

void TechnologyController::populateRadarSonarAndTransportList()
{
    /** Fills up the object's radar, sonar and transport vector with the technologies below and calls setter
      * methods as necessary.                                                                                    */

    //Object creation
    Technology landing_craft_creation = Technology ("Landing craft", 6000);
    Technology assault_ship_creation = Technology ("Assault ship", 8000);

    Technology small_warship_radar = Technology ("Small warship radar", 10000, 1, 10);
    Technology small_warship_asw = Technology ("Small warship ASW", 10000, 1, 10);
    Technology large_warship_radar = Technology ("Small warship radar", 10000, 1, 10);
    Technology submarine_sonar_and_detection_equipment = Technology ("Small warship ASW", 10000, 1, 10);
    Technology submarine_air_warning_equipment = Technology ("Small warship ASW", 10000, 1, 10);

    //Prerequisite settings
    assault_ship_creation.setPrerequisiteTechs(std::pair<int, int> ( landing_craft_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    small_warship_radar.setPrerequisiteTechs(
            std::pair<int, int> (findElectronicAndCryptographicTechnologyIdByName("Radar"), 3 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    small_warship_asw.setPrerequisiteTechs(
            std::pair<int, int> (findElectronicAndCryptographicTechnologyIdByName("Radar"), 3 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    large_warship_radar.setPrerequisiteTechs(
            std::pair<int, int> (findElectronicAndCryptographicTechnologyIdByName("Radar"), 3 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    submarine_sonar_and_detection_equipment.setPrerequisiteTechs(
            std::pair<int, int> (findElectronicAndCryptographicTechnologyIdByName("Radar"), 3 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    submarine_air_warning_equipment.setPrerequisiteTechs(
            std::pair<int, int> ( findElectronicAndCryptographicTechnologyIdByName("Radar"), 3 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vectors
    radarSonarAndTransportTechs.push_back(landing_craft_creation);
    radarSonarAndTransportTechs.push_back(assault_ship_creation);

    radarSonarAndTransportTechs.push_back(small_warship_radar);
    radarSonarAndTransportTechs.push_back(small_warship_asw);
    radarSonarAndTransportTechs.push_back(large_warship_radar);
    radarSonarAndTransportTechs.push_back(submarine_sonar_and_detection_equipment);
    radarSonarAndTransportTechs.push_back(submarine_air_warning_equipment);
}

void TechnologyController::populateScienceAndManpowerList()
{
    /** Fills up the object's science and manpower vector with the technologies below and calls setter
      * methods as necessary.                                                                               */

    //Object creation
    Technology education = Technology ("Education", 7000, 1, 10);
    Technology agriculture = Technology ("Agriculture", 6000, 1, 10);
    Technology combat_medicine = Technology ("Combat medicine", 7000, 1, 10);
    Technology first_aid = Technology ("First aid", 7000, 1, 10);

    //Addition of objects to vectors
    scienceAndManpowerTechs.push_back(education);
    scienceAndManpowerTechs.push_back(agriculture);
    scienceAndManpowerTechs.push_back(combat_medicine);
    scienceAndManpowerTechs.push_back(first_aid);
}

void TechnologyController::populateResourceAndProductionList()
{
    /** Fills up the object's resource and production vector with the technologies below and calls setter
      * methods as necessary.                                                                               */

    //Object creation
    Technology coal_processing = Technology ("Coal processing techniques", 4000, 1, 10);
    Technology steel_production = Technology ("Steel production", 4000, 1, 10);
    Technology rare_material_refining = Technology ("Rare material refining techniques", 4000, 1, 10);

    Technology synthetic_oil_creation = Technology ("Synthetic oil", 10000);
    Technology synthetic_oil_production = Technology ("Synthetic oil production", 6000, 1, 10);

    Technology supply_production = Technology ("Supply production", 4000, 1, 10);
    Technology fuel_production = Technology ("Oil to fuel conversion", 5000, 1, 10);
    Technology resource_transportation = Technology ("Resource transportation", 7000, 1, 10);
    Technology resource_organisation = Technology ("Resource organisation", 7000, 1, 10);

    Technology production_boost = Technology ("Production boost", 6000, 1, 10);
    Technology production_efficiency = Technology ("Production efficiency", 6000, 1, 10);

    //Prerequisite settings
    synthetic_oil_production.setPrerequisiteTechs(std::pair<int, int> ( synthetic_oil_creation.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vectors
    resourceAndProductionTechs.push_back(coal_processing);
    resourceAndProductionTechs.push_back(steel_production);
    resourceAndProductionTechs.push_back(rare_material_refining);

    resourceAndProductionTechs.push_back(synthetic_oil_creation);
    resourceAndProductionTechs.push_back(synthetic_oil_production);

    resourceAndProductionTechs.push_back(supply_production);
    resourceAndProductionTechs.push_back(fuel_production);
    resourceAndProductionTechs.push_back(resource_transportation);
    resourceAndProductionTechs.push_back(resource_organisation);

    resourceAndProductionTechs.push_back(production_boost);
    resourceAndProductionTechs.push_back(production_efficiency);
}

void TechnologyController::populateJetEngineAndRocketList()
{
    /** Fills up the object's jet engine and rocket vector with the technologies below and calls setter
      * methods as necessary.                                                                               */

    //Object creation
    Technology rocket_tests = Technology ("Rocket tests", 6000);
    Technology rocket_engine = Technology ("Rocket engine", 8000);
    Technology theoretical_jet_engine = Technology ("Theoretical jet engine", 10000);

    //Prerequisite settings
    rocket_engine.setPrerequisiteTechs(std::pair<int, int> ( rocket_tests.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    theoretical_jet_engine.setPrerequisiteTechs(std::pair<int, int> ( rocket_engine.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vectors
    jetEngineAndRocketTechs.push_back(rocket_tests);
    jetEngineAndRocketTechs.push_back(rocket_engine);
    jetEngineAndRocketTechs.push_back(theoretical_jet_engine);
}

void TechnologyController::populateElectronicAndCryptographicList()
{
    /** Fills up the object's electronic and cryptographic vector with the technologies below and calls setter
      * methods as necessary.                                                                                     */

    //Object creation
    Technology radio = Technology ("Radio", 4000);
    Technology radio_detection = Technology ("Radio detection", 6000);
    Technology radar = Technology ("Radar", 6000, 1, 10);
    Technology computing_machine = Technology ("Computing machine", 8000, 1, 10);
    Technology encryption = Technology ("Encryption", 6000, 1, 10);
    Technology decryption = Technology ("Decryption", 6000, 1, 10);

    //Prerequisite settings
    radio_detection.setPrerequisiteTechs(std::pair<int, int> ( radio.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    radar.setPrerequisiteTechs(std::pair<int, int> ( radio_detection.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    encryption.setPrerequisiteTechs(std::pair<int, int> ( computing_machine.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    decryption.setPrerequisiteTechs(std::pair<int, int> ( computing_machine.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vectors
    electronicAndCryptographicTechs.push_back(radio);
    electronicAndCryptographicTechs.push_back(radio_detection);
    electronicAndCryptographicTechs.push_back(radar);
    electronicAndCryptographicTechs.push_back(computing_machine);
    electronicAndCryptographicTechs.push_back(encryption);
    electronicAndCryptographicTechs.push_back(decryption);
}

void TechnologyController::populateNuclearList()
{
    /** Fills up the object's nuclear vector with the technologies below and calls setter methods as necessary.  */

    //Object creation
    Technology atomic_research = Technology ("Atomic research", 18000);
    Technology nuclear_research = Technology ("Nuclear research", 18000);
    Technology atomic_bomb = Technology ("Atomic bomb", 18000);

    //Prerequisite settings
    nuclear_research.setPrerequisiteTechs(std::pair<int, int> ( atomic_research.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    atomic_bomb.setPrerequisiteTechs(std::pair<int, int> ( nuclear_research.getId(), 1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1 ),
            std::pair<int, int> ( emptyTechnology.getId(), -1));

    //Addition of objects to vectors
    nuclearTechs.push_back(atomic_research);
    nuclearTechs.push_back(nuclear_research);
    nuclearTechs.push_back(atomic_bomb);
}


                                                /*  Getter methods  */

std::vector <Technology> TechnologyController::getArmourList()
{
    /** Returns an object's armour technology vector.  */

    return armourTechs;
}

std::vector <Technology> TechnologyController::getInfantryAndSupportList()
{
    /** Returns an object's infantry and support technology vector.  */

    return infantryAndSupportTechs;
}

std::vector <Technology> TechnologyController::getSingleEngineAircraftList()
{
    /** Returns an object's single engine aircraft technology vector.  */

    return singleEngineAircraftTechs;
}

std::vector <Technology> TechnologyController::getTwinEngineAircraftTechnologyList()
{
    /** Returns an object's twin engine aircraft technology vector.  */

    return twinEngineAircraftTechs;
}

std::vector <Technology> TechnologyController::getFourEngineAircraftList()
{
    /** Returns an object's four engine aircraft technology vector.  */

    return fourEngineAircraftTechs;
}

std::vector <Technology> TechnologyController::getAircraftArnamentAndEngineList()
{
    /** Returns an object's aircraft armament and engine technology vector.  */

    return aircraftArmamentAndEngineTechs;
}

std::vector <Technology> TechnologyController::getCarrerAircraftList()
{
    /** Returns an object's carrier aircraft technology vector.  */

    return carrierAircraftTechs;
}

std::vector <Technology> TechnologyController::getAircraftRadarList()
{
    /** Returns an object's aircraft radar technology vector.  */

    return aircraftRadarTechs;
}

std::vector <Technology> TechnologyController::getDestroyerAndPtBoatList()
{
    /** Returns an object's destroyer and PT boat technology vector.  */

    return destroyerAndPtBoatTechs;
}

std::vector <Technology> TechnologyController::getCruiserList()
{
    /** Returns an object's cruiser technology vector.  */

    return cruiserTechs;
}

std::vector <Technology> TechnologyController::getBattleshipAndCruiserList()
{
    /** Returns an object's battleship and battlecruiser technology vector.  */

    return battleshipAndCruiserTechs;
}

std::vector <Technology> TechnologyController::getAircraftCarrierList()
{
    /** Returns an object's aircraft carrier technology vector.  */

    return aircraftCarrierTechs;
}

std::vector <Technology> TechnologyController::getSubmarineAndTorpedoList()
{
    /** Returns an object's submarine and torpedo technology vector.  */

    return submarineAndTorpedoTechs;
}

std::vector <Technology> TechnologyController::getRadarSonarAndTransportList()
{
    /** Returns an object's radar, sonar and transport technology vector.  */

    return radarSonarAndTransportTechs;
}

std::vector <Technology> TechnologyController::getScienceAndManpowerList()
{
    /** Returns an object's science and manpower technology vector.  */

    return scienceAndManpowerTechs;
}

std::vector <Technology> TechnologyController::getResourceAndProductionList()
{
    /** Returns an object's resource and production technology vector.  */

    return resourceAndProductionTechs;
}

std::vector <Technology> TechnologyController::getJetEngineAndRocketList()
{
    /** Returns an object's jet engine and rocket technology vector.  */

    return jetEngineAndRocketTechs;
}

std::vector <Technology> TechnologyController::getElectronicAndCryptographicList()
{
    /** Returns an object's electronic and cryptographic technology vector.  */

    return electronicAndCryptographicTechs;
}

std::vector <Technology> TechnologyController::getNuclearList()
{
    /** Returns an object's nuclear technology vector.  */

    return nuclearTechs;
}
