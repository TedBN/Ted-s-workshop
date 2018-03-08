//
// Created by Ted on 4/3/2018
//

#include "Building.h"

//Definition for static integer
int Building::buildingInstances = 1;

                                            /*      Constructors        */

Building::Building() : id(0), name("None"), production_cost(0), energy_cost(0),
                       metal_cost(0), rares_cost(0), maintenance(0)
{
    /**  Default constructor. Used to represent empty slots in arrays and vectors.     */
}

Building::Building(std::string name, int cost, int eCost, int mCost, int rCost, int maintenance) :
                   id(Building::buildingInstances), name(std::move(name)), production_cost(cost),
                   energy_cost(eCost), metal_cost(mCost), rares_cost(rCost), maintenance(maintenance)
{
    /**  IDs for buildings are in the 1 to 100 range. Every turn a region generates production and it is
      *  used to complete a selected unit or building. Production cost is the total number required for
      *  a building to be completed and functional. Resource costs deduct the specified resource upon
      *  starting production. Maintenance determines money spent on this building per turn.
      *  Intended to be main constructor.                                                                   */

    ++Building::buildingInstances;
}

Building::Building(std::string name, int cost, int eCost, int mCost,
                   int rCost, int maintenance, int prereqTechId, int prereqTechLevel) :
                   id(Building::buildingInstances), name(std::move(name)), production_cost(cost),
                   energy_cost(eCost), metal_cost(mCost), rares_cost(rCost), maintenance(maintenance),
                   prerequisite_tech_id(prereqTechId), prerequisite_tech_level(prereqTechLevel)

{
    /**  Same constructor as above, but without a tech prerequisite for construction.       */

    ++Building::buildingInstances;
}

                                            /*      Setter functions      */

void Building::setIncompatibleBuildings(Building incompatibleBuilding1, Building incompatibleBuilding2,
                                        Building incompatibleBuilding3                                  )
{
    /**  Takes three building objects and adds their IDs to the incompatible array of the
      *  object this method is called on. Unused arguments should be the "empty" object.       */

    incompatible_buildings[0] = incompatibleBuilding1.id;
    incompatible_buildings[1] = incompatibleBuilding2.id;
    incompatible_buildings[2] = incompatibleBuilding3.id;
}

void Building::setPrerequisiteBuildings(Building prerequisiteBuilding1, Building prerequisiteBuilding2)
{
    /**  Takes two building objects and adds their IDs to prerequisite array of the building this
      *  method is called on. Unused slots should have a value of -1.                               */

    prerequisite_buildings[0] = prerequisiteBuilding1.id;
    prerequisite_buildings[1] = prerequisiteBuilding2.id;
}

                                             /*      Getter functions      */

int Building::getId()
{
    /*  Returns a building object's ID.  */
    return id;
}

std::string Building::getName()
{
    /*  Returns a building object's name.  */
    return name;
}

int Building::getProductionCost()
{
    /*  Returns a building object's production cost.  */
    return production_cost;
}

int Building::getEnergyCost()
{
    /*  Returns a building object's energy cost.  */
    return energy_cost;
}

int Building::getMetalCost()
{
    /*  Returns a building object's metal cost.  */
    return metal_cost;
}

int Building::getRaresCost()
{
    /*  Returns a building object's rares cost.  */
    return rares_cost;
}

int Building::getMaintenanceCost()
{
    /*  Returns a building object's maintenance cost.  */
    return maintenance;
}

int Building::getPrereqTechId()
{
    /*  Returns a building object's prerequisite tech ID.  */
    return prerequisite_tech_id;
}

int Building::getPrereqTechLevel()
{
    /*  Returns a building object's prerequisite tech minimum level. */
    return prerequisite_tech_level;
}

std::array<int, 2> Building::getPrerequisiteBuildings()
{
    /*  Returns a building object's prerequisite building IDs array. */
    return prerequisite_buildings;
}

std::array<int, 3> Building::getIncompatibleBuildings()
{
    /*  Returns a building object's incompatible building IDs array. */
    return incompatible_buildings;
}