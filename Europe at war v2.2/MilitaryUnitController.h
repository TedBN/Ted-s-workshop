//
// Created by Ted on 24/05/2018
//

#ifndef EUROPE_AT_WAR_V2_2_MILITARY_UNIT_CONTROLLER_H
#define EUROPE_AT_WAR_V2_2_MILITARY_UNIT_CONTROLLER_H

#include <vector>
#include "MilitaryUnitTypes.h"

class MilitaryUnitController
{
    /** Controller class for the military system of the game. Contains vectors consisting of all
      * three unit types categorized as members. Has a single constructor and population/creation,
      * single object search and vector retrieval methods. Dependant on the land, air and naval unit
      * classes. Part of the game logic layer.                                                          */

    private:

        //Unit vectors by category and type
        std::vector <LandUnit> infantryUnits;
        std::vector <LandUnit> supportUnits;
        std::vector <LandUnit> specialUnits;
        std::vector <LandUnit> armouredUnits;

        std::vector <AirUnit> fighterUnits;
        std::vector <AirUnit> bomberUnits;
        std::vector <AirUnit> missileUnits;
        std::vector <AirUnit> airTransportUnits;

        std::vector <NavalUnit> screenUnits;
        std::vector <NavalUnit> capitalUnits;
        std::vector <NavalUnit> submarineUnits;
        std::vector <NavalUnit> navalTransportUnits;

    public:

        //Constructor
        MilitaryUnitController();

        //Population methods
        void populateInfantryUnits();
        void populateSupportUnits();
        void populateSpecialUnits();
        void populateArmouredUnits();

        void populateFighterUnits();
        void populateBomberUnits();
        void populateMissileUnits();
        void populateAirTransportUnits();

        void populateScreenUnits();
        void populateCapitalUnits();
        void populateSubmarineUnits();
        void populateNavalTransportUnits();

        //Search methods
        int findInfantryUnitIdByName(std::string);
        int findArmouredUnitIdByName(std::string);
        int findSpecialUnitIdByName(std::string);
        int findSupportUnitIdByName(std::string);

        int findFighterUnitIdByName(std::string);
        int findBomberUnitIdByName(std::string);
        int findMissileUnitIdByName(std::string);
        int findAirTransportUnitIdByName(std::string);

        int findScreenUnitIdByName(std::string);
        int findCapitalUnitIdByName(std::string);
        int findSubmarineUnitIdByName(std::string);
        int findNavalTransportUnitIdByName(std::string);

        //Getter methods
        std::vector <LandUnit> getInfantryUnitList();
        std::vector <LandUnit> getArmouredUnitList();
        std::vector <LandUnit> getSpecialUnitList();
        std::vector <LandUnit> getSupportUnitList();

        std::vector <AirUnit> getFighterUnitList();
        std::vector <AirUnit> getBomberUnitList();
        std::vector <AirUnit> getMissileUnitList();
        std::vector <AirUnit> getAirTransportUnitList();

        std::vector <NavalUnit> getScreenUnitList();
        std::vector <NavalUnit> getCapitalUnitList();
        std::vector <NavalUnit> getSubmarineUnitList();
        std::vector <NavalUnit> getNavalTransportUnitList();
};

#endif //EUROPE_AT_WAR_V2_2_MILITARY_UNIT_CONTROLLER_H
