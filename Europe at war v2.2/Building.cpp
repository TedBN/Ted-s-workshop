//
// Created by Ted on 4/3/2018
//

#include "Building.h"

//Definition for static integer
int Building::buildingInstanceIds = 201;


                                            /*      Constructors        */

Building::Building() : id(200), name("None"), productionCost(0), energyCost(0),
                       metalCost(0), raresCost(0), maintenance(0)
{
    /**  Default constructor. Used to represent empty slots in arrays and vectors. Always has an ID of 200.    */
}

Building::Building(std::string name, int cost, int eCost, int mCost, int rCost, int maintenance) :
                   id(Building::buildingInstanceIds), name(std::move(name)), productionCost(cost),
                   energyCost(eCost), metalCost(mCost), raresCost(rCost), maintenance(maintenance)
{
    /**  IDs for buildings are in the 200 to 300 range. This constructor takes arguments for everything except
      *  the prerequisite integers and two building arrays, they are handled by the respective setters.         */

    ++Building::buildingInstanceIds;
}


                                            /*      Setter functions      */

void Building::setIncompatibleBuildings(Building building1, Building building2, Building building3)
{
    /**  Takes three building objects and adds their IDs to the incompatible array of the
      *  object this method is called on. Unused slots should have a value of -1.             */

    incompatibleBuildings[0] = building1.id;
    incompatibleBuildings[1] = building2.id;
    incompatibleBuildings[2] = building3.id;
}

void Building::setPrerequisiteBuildings(Building building1, Building building2)
{
    /**  Takes two building objects and adds their IDs to prerequisite array of the building this
      *  method is called on. Unused slots should have a value of -1.                               */

    prerequisiteBuildings[0] = building1.id;
    prerequisiteBuildings[1] = building2.id;
}


void Building::setPrerequisiteTechnology(int technologyId, int technologyLevel)
{
    prerequisiteTechId = technologyId;
    prerequisiteTechLevel = technologyLevel;
}


                                             /*      Getter functions      */

int Building::getId()
{
    /**  Returns a building object's ID.  */

    return id;
}

std::string Building::getName()
{
    /**  Returns a building object's name.  */

    return name;
}

int Building::getProductionCost()
{
    /**  Returns a building object's production cost.  */

    return productionCost;
}

int Building::getEnergyCost()
{
    /**  Returns a building object's energy cost.  */

    return energyCost;
}

int Building::getMetalCost()
{
    /**  Returns a building object's metal cost.  */

    return metalCost;
}

int Building::getRaresCost()
{
    /**  Returns a building object's rares cost.  */

    return raresCost;
}

int Building::getMaintenanceCost()
{
    /**  Returns a building object's maintenance cost.  */

    return maintenance;
}

int Building::getPrereqTechId()
{
    /**  Returns a building object's prerequisite tech ID.  */

    return prerequisiteTechId;
}

int Building::getPrereqTechLevel()
{
    /** Returns a building object's prerequisite tech minimum level. */

    return prerequisiteTechLevel;
}

std::array<int, 2> Building::getPrerequisiteBuildings()
{
    /** Returns a building object's prerequisite building IDs array. */

    return prerequisiteBuildings;
}

std::array<int, 3> Building::getIncompatibleBuildings()
{
    /**  Returns a building object's incompatible building IDs array. */

    return incompatibleBuildings;
}
