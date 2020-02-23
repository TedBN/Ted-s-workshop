//
// Created by Ted on 24/05/2018
//

#ifndef EUROPE_AT_WAR_V2_2_MILITARY_UNIT_H
#define EUROPE_AT_WAR_V2_2_MILITARY_UNIT_H

#include <string>
#include <array>

class AbstractMilitaryUnit
{
    /** This is an abstract class used as a base for all military unit types in the game.
      * Contains members split in four categories and getter methods for all of them. Does
      * not have a constructor, as they are supposed to be implemented by subclasses. Part
      * of the domain data layer.                                                            */

    private:

        //Members
        std::string name;
        int id;

        //Economic stat members
        int buildTime;
        int energyCost;
        int metalCost;
        int oilCost;
        int manpowerCost;

        //Combat stat members
        int attack;
        int defense;
        int movement;
        int range;

        //Prerequisite members
        int creationTechId = 0;
        std::array<int, 2> creationBuildingIds = std::array<int, 2> { 0, -1 };

    public:

        //Identification member getters
        int getId();
        std::string getName();

        //Combat member getter methods
        int getAttack();
        int getDefense();
        int getMovement();
        int getRange();

        //Economic member getter methods
        int getBuildTime();
        int getEnergyCost();
        int getMetalCost();
        int getOilCost();
        int getManpowerCost();

        //Setter methods
        void setProductionBuildings(int, int);
        void setCreationTech(int);

    //Subclasses are friend classes
    friend class LandUnit;
    friend class AirUnit;
    friend class NavalUnit;
};

#endif //EUROPE_AT_WAR_V2_2_MILITARY_UNIT_H
