//
// Created by Ted on 24/05/2018
//

#ifndef EUROPE_AT_WAR_V2_2_MILITARY_UNIT_TYPES_H
#define EUROPE_AT_WAR_V2_2_MILITARY_UNIT_TYPES_H

#include "AbstractMilitaryUnit.h"

class LandUnit : public AbstractMilitaryUnit
{
    /** This is a subclass that inherits from the abstract military unit class and is
      * responsible for creating and assigning IDs to the land unit type. Contains a
      * single static integer and constructor, everything else is inherited from the
      * abstract class. Part of the domain data layer.                                      */

    private:

        //Static variable for IDs
        static int landUnitInstanceIds;

    public:

        //Constructor
        LandUnit(std::string, int, int, int, int, int, int, int, int, int);
};

class AirUnit : public AbstractMilitaryUnit
{
    /** This is a subclass that inherits from the abstract military unit class and is
      * responsible for creating and assigning IDs to the air unit type. Contains a
      * single static integer and constructor, everything else is inherited from the
      * abstract class. Part of the domain data layer.                                      */

    private:

        //Static variable for IDs
        static int airUnitInstanceIds;

    public:

        //Constructor
        AirUnit(std::string, int, int, int, int, int, int, int, int);
};

class NavalUnit : public AbstractMilitaryUnit
{
    /** This is a subclass that inherits from the abstract military unit class and is
      * responsible for creating and assigning IDs to the naval unit type. Contains a
      * single static integer and constructor, everything else is inherited from the
      * abstract class. Part of the domain data layer.                                      */

    private:

        //Static variable for IDs
        static int navalUnitInstanceIds;

    public:

        //Constructor
        NavalUnit(std::string, int, int, int, int, int, int, int, int, int);
};

#endif //EUROPE_AT_WAR_V2_2_MILITARY_UNIT_TYPES_H
