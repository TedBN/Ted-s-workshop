//
// Created by Ted on 24/05/2018
//

#include "AbstractMilitaryUnit.h"


                                                    /*  Getters   */


int AbstractMilitaryUnit::getId()
{
    /** Return a unit's ID integer. */

    return id;
}

std::string AbstractMilitaryUnit::getName()
{
    /** Return a unit's name string. */

    return name;
}

int AbstractMilitaryUnit::getAttack()
{
    /** Return a unit's attack integer. */

    return attack;
}

int AbstractMilitaryUnit::getDefense()
{
    /** Return a unit's defense integer. */

    return defense;
}

int AbstractMilitaryUnit::getMovement()
{
    /** Return a unit's movement integer. */

    return movement;
}

int AbstractMilitaryUnit::getRange()
{
    /** Return a unit's range integer. */

    return range;
}

int AbstractMilitaryUnit::getBuildTime()
{
    /** Return a unit's build time integer. */

    return buildTime;
}

int AbstractMilitaryUnit::getEnergyCost()
{
    /** Return a unit's energy cost integer. */

    return energyCost;
}

int AbstractMilitaryUnit::getMetalCost()
{
    /** Return a unit's metal cost integer. */

    return metalCost;
}

int AbstractMilitaryUnit::getOilCost()
{
    /** Return a unit's oil cost integer. */

    return oilCost;
}

int AbstractMilitaryUnit::getManpowerCost()
{
    /** Return a unit's manpower cost integer. */

    return manpowerCost;
}


                                                      /* Setters  */

void AbstractMilitaryUnit::setProductionBuildings(int building1, int building2)
{
    /**  Takes two building object IDs and adds them to the building prerequisites array.                */

    creationBuildingIds[0] = building1;
    creationBuildingIds[1] = building2;
}

void AbstractMilitaryUnit::setCreationTech(int technologyId)
{
    /**  Takes a single technology ID and assigns it as a unit object's prerequisite.                */

    creationTechId = technologyId;
}
