//
// Created by Ted on 24/05/2018.
//

#include "MilitaryUnitTypes.h"
#include <utility>

//Static integer definitions
int LandUnit::landUnitInstanceIds = 301;
int AirUnit::airUnitInstanceIds = 334;
int NavalUnit::navalUnitInstanceIds = 367;


                                                /*  Constructors   */

LandUnit::LandUnit(std::string unitName, int attackValue, int defenseValue, int movementValue, int rangeValue,
                   int buildTimeValue, int energyCostValue, int metalCostValue, int oilCostValue,
                   int manpowerCostValue)
{
    /** Constructor for land units. Takes a string for a name and integers for all stats. Updates instance IDs
      * after unit creation.                                                                                        */

    //Identifier members
    id = landUnitInstanceIds;
    name = std::move(unitName);

    //Combat members
    attack = attackValue;
    defense = defenseValue;
    movement = movementValue;
    range = rangeValue;

    //Economic members
    buildTime = buildTimeValue;
    energyCost = energyCostValue;
    metalCost = metalCostValue;
    oilCost = oilCostValue;
    manpowerCost = manpowerCostValue;

    //Counter is updated
    ++landUnitInstanceIds;
}

AirUnit::AirUnit(std::string unitName, int attackValue, int defenseValue, int rangeValue,
                 int buildTimeValue, int energyCostValue, int metalCostValue, int oilCostValue,
                 int manpowerCostValue)
{
    /**  Constructor for aerial units. Same as land constructor, but movement is always 0.                 */

    //Identifier members
    id = airUnitInstanceIds;
    name = std::move(unitName);

    //Combat members
    attack = attackValue;
    defense = defenseValue;
    range = rangeValue;

    //Economic members
    buildTime = buildTimeValue;
    energyCost = energyCostValue;
    metalCost = metalCostValue;
    oilCost = oilCostValue;
    manpowerCost = manpowerCostValue;

    //Counter is updated
    ++airUnitInstanceIds;
}

NavalUnit::NavalUnit(std::string unitName, int attackValue, int defenseValue, int movementValue, int rangeValue,
                     int buildTimeValue, int energyCostValue, int metalCostValue, int oilCostValue,
                     int manpowerCostValue)
{
    /**  Constructor for naval units. Absolute same as the one for land units.                              */

    //Identifier members
    id = navalUnitInstanceIds;
    name = std::move(unitName);

    //Combat members
    attack = attackValue;
    defense = defenseValue;
    movement = movementValue;
    range = rangeValue;

    //Economic members
    buildTime = buildTimeValue;
    energyCost = energyCostValue;
    metalCost = metalCostValue;
    oilCost = oilCostValue;
    manpowerCost = manpowerCostValue;

    //Counter is updated
    ++navalUnitInstanceIds;
}