//
// Created by Ted on 24/05/2018
//

#include "MilitaryUnitController.h"


                                                /*  Constructor   */

MilitaryUnitController::MilitaryUnitController()
{
    //Land unit vectors
    populateInfantryUnits();
    populateSupportUnits();
    populateSpecialUnits();
    populateArmouredUnits();

    //Air unit vectors
    populateFighterUnits();
    populateBomberUnits();
    populateMissileUnits();
    populateAirTransportUnits();

    //Naval unit vectors
    populateScreenUnits();
    populateCapitalUnits();
    populateSubmarineUnits();
    populateNavalTransportUnits();
}


                                                /*  Population functions   */

void MilitaryUnitController::populateInfantryUnits()
{
    /** Fills up the object's infantry unit vector with the created below units.  */

    //Object creation
    LandUnit militia = LandUnit("Militia", 15, 20, 2, 0, 3, 75, 50, 25, 75);
    LandUnit cavalry = LandUnit("Cavalry", 20, 15, 4, 0, 5, 100, 75, 50, 75);

    LandUnit infantry = LandUnit("Infantry", 25, 30, 2, 0, 7, 125, 100, 50, 75);
    LandUnit motorizedInfantry = LandUnit("Motorized infantry", 30, 30, 4, 0, 9, 175, 150, 75, 50);
    LandUnit mechanizedInfantry = LandUnit("Mechanized infantry", 35, 40, 4, 0, 13, 225, 175, 100, 50);

    //Addition to respective vector
    infantryUnits.push_back(militia);
    infantryUnits.push_back(cavalry);

    infantryUnits.push_back(infantry);
    infantryUnits.push_back(motorizedInfantry);
    infantryUnits.push_back(mechanizedInfantry);
}

void MilitaryUnitController::populateSupportUnits()
{
    /** Fills up the object's support unit vector with the created below units.  */

    //Object creation
    LandUnit artillery = LandUnit("Artillery", 30, 15, 2, 2, 11, 150, 175, 75, 25);
    LandUnit antiTank = LandUnit("Anti-tank gun", 30, 15, 2, 0, 11, 150, 175, 75, 25);
    LandUnit antiAircraft = LandUnit("Anti-aircraft gun", 30, 15, 2, 0, 10, 150, 175, 75, 25);

    //Addition to respective vector
    supportUnits.push_back(artillery);
    supportUnits.push_back(antiTank);
    supportUnits.push_back(antiAircraft);
}

void MilitaryUnitController::populateSpecialUnits()
{
    /** Fills up the object's special unit vector with the created below units.  */

    //Object creation
    LandUnit mountainInfantry = LandUnit("Mountain infantry", 25, 30, 2, 0, 9, 150, 125, 50, 75);
    LandUnit marineInfantry = LandUnit("Marine", 25, 30, 2, 0, 9, 150, 125, 50, 75);
    LandUnit airborneInfantry = LandUnit("Paratrooper", 25, 30, 2, 0, 9, 150, 125, 75, 75);
    LandUnit eliteInfantry = LandUnit("Elite infantry", 30, 35, 2, 0, 11, 200, 150, 75, 75);

    //Addition to respective vector
    specialUnits.push_back(mountainInfantry);
    specialUnits.push_back(marineInfantry);
    specialUnits.push_back(airborneInfantry);
    specialUnits.push_back(eliteInfantry);
}

void MilitaryUnitController::populateArmouredUnits()
{
    /** Fills up the object's armoured unit vector with the created below units.  */

    //Object creation
    LandUnit armouredCar = LandUnit("Armoured car", 25, 20, 4, 0, 9, 125, 150, 50, 50);
    LandUnit lightTank = LandUnit("Light tank", 40, 40, 5, 0, 13, 175, 200, 75, 50);
    LandUnit mediumTank = LandUnit("Medium tank", 45, 45, 4, 0, 16, 200, 225, 100, 25);
    LandUnit heavyTank = LandUnit("Heavy tank", 50, 50, 3, 0, 18, 250, 275, 150, 25);
    LandUnit superHeavyTank = LandUnit("Super heavy tank", 55, 55, 1, 0, 22, 275, 300, 175, 25);
    LandUnit modernTank = LandUnit("Modern tank", 55, 50, 4, 0, 18, 250, 275, 150, 25);

    //Addition to respective vector
    armouredUnits.push_back(armouredCar);
    armouredUnits.push_back(lightTank);
    armouredUnits.push_back(mediumTank);
    armouredUnits.push_back(heavyTank);
    armouredUnits.push_back(superHeavyTank);
    armouredUnits.push_back(modernTank);
}

void MilitaryUnitController::populateFighterUnits()
{
    /** Fills up the object's fighter unit vector with the created below units.  */

    //Object creation
    AirUnit fighter = AirUnit("Fighter", 25, 30, 3, 10, 150, 175, 125, 15);
    AirUnit fighterBomber = AirUnit("Fighter-bomber", 20, 25, 4, 13, 200, 225, 125, 15);
    AirUnit heavyFighter = AirUnit("Heavy fighter", 40, 35, 4, 13, 200, 225, 125, 15);
    AirUnit rocketInterceptor = AirUnit("Rocket interceptor", 32, 40, 1, 16, 225, 250, 150, 15);
    AirUnit jetFighter = AirUnit("Jet fighter", 40, 45, 4, 19, 300, 275, 175, 15);

    //Addition to respective vector
    fighterUnits.push_back(fighter);
    fighterUnits.push_back(fighterBomber);
    fighterUnits.push_back(heavyFighter);
    fighterUnits.push_back(rocketInterceptor);
    fighterUnits.push_back(jetFighter);
}

void MilitaryUnitController::populateBomberUnits()
{
    /** Fills up the object's bomber unit vector with the created below units.  */

    //Object creation
    AirUnit closeAirSupport = AirUnit("Close air support", 20, 20, 2, 11, 175, 200, 125, 25);
    AirUnit navalBomber = AirUnit("Naval bomber", 20, 20, 2, 13, 175, 200, 125, 15);
    AirUnit tacticalBomber = AirUnit("Tactical bomber", 30, 40, 1, 13, 225, 250, 150, 15);
    AirUnit strategicBomber = AirUnit("Strategic bomber", 40, 40, 8, 18, 275, 250, 175, 15);

    //Addition to respective vector
    bomberUnits.push_back(closeAirSupport);
    bomberUnits.push_back(navalBomber);
    bomberUnits.push_back(tacticalBomber);
    bomberUnits.push_back(strategicBomber);
}

void MilitaryUnitController::populateMissileUnits()
{
    /** Fills up the object's missile unit vector with the created below units.  */

    //Object creation
    AirUnit flyingBomb = AirUnit("Flying bomb", 40, 0, 8, 10, 125, 150, 100, 0);
    AirUnit v2Rocket = AirUnit("V2 Rocket", 80, 0, 12, 16, 225, 200, 150, 0);

    //Addition to respective vector
    missileUnits.push_back(flyingBomb);
    missileUnits.push_back(v2Rocket);
}

void MilitaryUnitController::populateAirTransportUnits()
{
    /** Fills up the object's air transport vector with the created below units.  */

    //Object creation
    AirUnit transportPlane = AirUnit("Transport plane", 0, 15, 8, 17, 275, 250, 175, 15);

    //Addition to respective vector
    airTransportUnits.push_back(transportPlane);
}

void MilitaryUnitController::populateScreenUnits()
{
    /** Fills up the object's screen ship unit vector with the created below units.  */

    //Object creation
    NavalUnit torpedoBoat = NavalUnit("Torpedo boat", 15, 20, 6, 1, 9, 150, 125, 100, 15);
    NavalUnit destroyer = NavalUnit("Destroyer", 20, 25, 6, 1, 12, 175, 150, 125, 25);
    NavalUnit lightCruiser = NavalUnit("Light cruiser", 25, 30, 5, 2, 15, 200, 175, 150, 25);

    //Addition to respective vector
    screenUnits.push_back(torpedoBoat);
    screenUnits.push_back(destroyer);
    screenUnits.push_back(lightCruiser);
}

void MilitaryUnitController::populateCapitalUnits()
{
    /** Fills up the object's capital ship unit vector with the created below units.  */

    //Object creation
    NavalUnit heavyCruiser = NavalUnit("Heavy cruiser", 30, 35, 4, 3, 18, 250, 225, 200, 25);
    NavalUnit battleship = NavalUnit("Battleship", 40, 45, 3, 4, 22, 250, 225, 200, 50);
    NavalUnit battlecruiser = NavalUnit("Battlecruiser", 40, 35, 4, 4, 22, 225, 250, 200, 50);
    NavalUnit superHeavyBattleship = NavalUnit("Super heavy battleship", 50, 55, 2, 4, 26, 300, 325, 250, 75);

    NavalUnit escortCarrier = NavalUnit("Escort carrier", 15, 15, 4, 0, 15, 200, 175, 175, 25);
    NavalUnit aircraftCarrier = NavalUnit("Aircraft carrier", 20, 20, 5, 0, 24, 225, 250, 225, 50);

    //Addition to respective vector
    capitalUnits.push_back(heavyCruiser);
    capitalUnits.push_back(battleship);
    capitalUnits.push_back(battlecruiser);
    capitalUnits.push_back(superHeavyBattleship);

    capitalUnits.push_back(escortCarrier);
    capitalUnits.push_back(aircraftCarrier);
}

void MilitaryUnitController::populateSubmarineUnits()
{
    /** Fills up the object's submarine unit vector with the created below units.  */

    //Object creation
    NavalUnit submarine = NavalUnit("Submarine", 25, 15, 4, 2, 17, 250, 225, 200, 25);

    //Addition to respective vector
    submarineUnits.push_back(submarine);
}

void MilitaryUnitController::populateNavalTransportUnits()
{
    /** Fills up the object's naval transport unit vector with the created below units.  */

    //Object creation
    NavalUnit convoy = NavalUnit("Convoy", 0, 0, 3, 0, 6, 50, 25, 50, 15);
    NavalUnit transportShip = NavalUnit("Transport ship", 0, 10, 3, 0, 8, 75, 50, 75, 15);
    NavalUnit landingCraft = NavalUnit("Landing craft", 0, 15, 4, 0, 11, 175, 150, 125, 10);
    NavalUnit assaultShip = NavalUnit("Assault ship", 0, 25, 4, 0, 16, 200, 175, 150, 10);

    //Addition to respective vector
    navalTransportUnits.push_back(convoy);
    navalTransportUnits.push_back(transportShip);
    navalTransportUnits.push_back(landingCraft);
    navalTransportUnits.push_back(assaultShip);
}


                                              /*  Search functions   */

int MilitaryUnitController::findInfantryUnitIdByName(std::string targetName)
{
    /** Searches for an infantry unit in the respective list via a string that contains the target objects's
      * name. Returns the matching land unit object's id if found, -1 if nothing is found.                      */

    for ( LandUnit landUnit : infantryUnits )
    { if ( landUnit.getName() == targetName ) { return landUnit.getId(); }}

    return -1;
}

int MilitaryUnitController::findArmouredUnitIdByName(std::string targetName)
{
    /** Searches for an armoured unit in the respective list via a string that contains the target objects's
      * name. Returns the matching land unit object's id if found, -1 if nothing is found.                      */

    for ( LandUnit landUnit : armouredUnits )
    { if ( landUnit.getName() == targetName ) { return landUnit.getId(); }}

    return -1;
}

int MilitaryUnitController::findSpecialUnitIdByName(std::string targetName)
{
    /** Searches for a special unit in the respective list via a string that contains the target objects's name.
      * Returns the matching land unit object's id if found, -1 if nothing is found.                                */

    for ( LandUnit landUnit : specialUnits )
    { if ( landUnit.getName() == targetName ) { return landUnit.getId(); }}

    return -1;
}

int MilitaryUnitController::findSupportUnitIdByName(std::string targetName)
{
    /** Searches for a support unit in the respective list via a string that contains the target objects's name.
      * Returns the matching land unit object's id if found, -1 if nothing is found.                                */

    for ( LandUnit landUnit : supportUnits )
    { if ( landUnit.getName() == targetName ) { return landUnit.getId(); }}

    return -1;
}

int MilitaryUnitController::findFighterUnitIdByName(std::string targetName)
{
    /** Searches for a fighter unit in the respective list via a string that contains the target objects's name.
      * Returns the matching air unit object's id if found, -1 if nothing is found.                                */

    for ( AirUnit airUnit : fighterUnits )
    { if ( airUnit.getName() == targetName ) { return airUnit.getId(); }}

    return -1;
}

int MilitaryUnitController::findBomberUnitIdByName(std::string targetName)
{
    /** Searches for a bomber unit in the respective list via a string that contains the target objects's name.
      * Returns the matching air unit object's id if found, -1 if nothing is found.                                */

    for ( AirUnit airUnit : bomberUnits )
    { if ( airUnit.getName() == targetName ) { return airUnit.getId(); }}

    return -1;
}

int MilitaryUnitController::findMissileUnitIdByName(std::string targetName)
{
    /** Searches for a missile unit in the respective list via a string that contains the target objects's name.
      * Returns the matching air unit object's id if found, -1 if nothing is found.                                */

    for ( AirUnit airUnit : missileUnits )
    { if ( airUnit.getName() == targetName ) { return airUnit.getId(); }}

    return -1;
}

int MilitaryUnitController::findAirTransportUnitIdByName(std::string targetName)
{
    /** Searches for an air transport unit in the respective list via a string that contains the target objects's
      * name. Returns the matching air unit object's id if found, -1 if nothing is found.                          */

    for ( AirUnit airUnit : airTransportUnits )
    { if ( airUnit.getName() == targetName ) { return airUnit.getId(); }}

    return -1;
}

int MilitaryUnitController::findScreenUnitIdByName(std::string targetName)
{
    /** Searches for a screen unit in the respective list via a string that contains the target objects's name.
      * Returns the matching naval unit object's id if found, -1 if nothing is found.                              */

    for ( NavalUnit navalUnit : screenUnits )
    { if ( navalUnit.getName() == targetName ) { return navalUnit.getId(); }}

    return -1;
}

int MilitaryUnitController::findCapitalUnitIdByName(std::string targetName)
{
    /** Searches for a capital ship unit in the respective list via a string that contains the target objects's
      * name. Returns the matching naval unit object's id if found, -1 if nothing is found.                        */

    for ( NavalUnit navalUnit : capitalUnits )
    { if ( navalUnit.getName() == targetName ) { return navalUnit.getId(); }}

    return -1;
}

int MilitaryUnitController::findSubmarineUnitIdByName(std::string targetName)
{
    /** Searches for a submarine unit in the respective list via a string that contains the target objects's
      * name. Returns the matching naval unit object's id if found, -1 if nothing is found.                      */

    for ( NavalUnit navalUnit : submarineUnits )
    { if ( navalUnit.getName() == targetName ) { return navalUnit.getId(); }}

    return -1;
}

int MilitaryUnitController::findNavalTransportUnitIdByName(std::string targetName)
{
    /** Searches for a naval transport unit in the respective list via a string that contains the target
      * objects's name. Returns the matching naval unit object's id if found, -1 if nothing is found.          */

    for ( NavalUnit navalUnit : screenUnits )
    { if ( navalUnit.getName() == targetName ) { return navalUnit.getId(); }}

    return -1;
}


                                                 /*  Getter functions   */

std::vector<LandUnit> MilitaryUnitController::getInfantryUnitList()
{
    /** Returns an object's infantry unit vector.  */

    return infantryUnits;
}

std::vector<LandUnit> MilitaryUnitController::getArmouredUnitList()
{
    /** Returns an object's armoured unit vector.  */

    return armouredUnits;
}

std::vector<LandUnit> MilitaryUnitController::getSpecialUnitList()
{
    /** Returns an object's special unit vector.  */

    return specialUnits;
}

std::vector<LandUnit> MilitaryUnitController::getSupportUnitList()
{
    /** Returns an object's support unit vector.  */

    return supportUnits;
}

std::vector<AirUnit> MilitaryUnitController::getFighterUnitList()
{
    /** Returns an object's fighter unit vector.  */

    return fighterUnits;
}

std::vector<AirUnit> MilitaryUnitController::getBomberUnitList()
{
    /** Returns an object's bomber unit vector.  */

    return bomberUnits;
}

std::vector<AirUnit> MilitaryUnitController::getMissileUnitList()
{
    /** Returns an object's missile unit vector.  */

    return missileUnits;
}

std::vector<AirUnit> MilitaryUnitController::getAirTransportUnitList()
{
    /** Returns an object's air transport unit vector.  */

    return airTransportUnits;
}

std::vector<NavalUnit> MilitaryUnitController::getScreenUnitList()
{
    /** Returns an object's screen unit vector.  */

    return screenUnits;
}

std::vector<NavalUnit> MilitaryUnitController::getCapitalUnitList()
{
    /** Returns an object's capital unit vector.  */

    return capitalUnits;
}

std::vector<NavalUnit> MilitaryUnitController::getSubmarineUnitList()
{
    /** Returns an object's submarine unit vector.  */

    return submarineUnits;
}

std::vector<NavalUnit> MilitaryUnitController::getNavalTransportUnitList()
{
    /** Returns an object's naval transport unit vector.  */

    return navalTransportUnits;
}
