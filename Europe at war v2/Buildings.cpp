//
// Created by Teodor on 1/7/2017..
//

#include <vector>
#include "Buildings.h"

    //Static vector definitions
    std::vector <Building> Building::education_buildings = {};
    std::vector <Building> Building::military_buildings = {};
    std::vector <Building> Building::factories = {};
    std::vector <Building> Building::resource_buildings = {};
    std::vector <Building> Building::economic_buildings = {};

//Definitions for constructor and function
Building::Building(int i, std::string n, int c, int ec, int mc, int rc, int m, int t1, int t2, int t3, Technology pt, int tech_level)
{
    /**  IDs for buildings are in the 1 to 100 range. Every turn a region generates production and it is
      *  used to complete a selected unit or building. Production cost is the total number required for
      *  a building to be completed and functional. Resource costs deduct the specified resource upon
      *  starting production. Maintenance determines money spent on this building per turn.
      *  Type determines what a building does. A building can be up to 3 types. Null values are ignored.
      *
      *  The type integers and their effects are as follows:
      *  1 -> science boost -> effect is percentage increase in science of region
      *  2 -> production boost -> effect is general or unit specific percentage production boost to region
      *  3 -> enabler -> effect is allowing production of new units or use of abilities via flags
      *  4, 5, 6, 7, 8, 13 -> resource production -> effect is percentage boost to production of a specific resource
      *                                         (respectively: energy, metal, oil, materiel, fuel, rare materials)
      *  9 -> unit capacity -> effect is increasing number of aircraft/warships that can be stationed
      *  10 -> money boost -> effect is increasing money production in region
      *  11 -> unit experience -> effect is an increase the starting experience of new units
      *  12 -> manpower boost -> effect is an increase in manpower gain from region                                 */

    id = i;
    name = n;
    production_cost = c;
    energy_cost = ec;
    metal_cost = mc;
    rares_cost = rc;
    maintenance = m;

    prerequisite_tech = pt;
    prerequisite_tech.level = tech_level;

    //Check for null values
    int types[3] = {t1, t2, t3};
    for (int i2 : types)
    {
        if (i2 >= 1 && i2 <= 12)
        {
            type.push_back(i2);
        }
            else { continue; }
    }
}

Building::Building(int i, std::string n, int c, int ec, int mc, int rc, int m, int t1, int t2, int t3)
{
    /**  Same constructor as above, but without a tech prerequisite for construction.       */

    id = i;
    name = n;
    production_cost = c;
    energy_cost = ec;
    metal_cost = mc;
    rares_cost = rc;
    maintenance = m;

    //Check for null values
    int types[3] = {t1, t2, t3};
    for (int i2 : types)
    {
        if (i2 >= 1 && i2 <= 12)
        {
            type.push_back(i2);
        }

        else { continue; }
    }
}

void Building::set_incompatible_buildings(Building ib1, Building ib2, Building ib3)
{
    /**  Takes three building objects and adds them to the written above vector of the
      *  object this method is called on. Unused arguments should be the 'empty' debug object.   */

    incompatible_buildings.push_back(ib1);
    incompatible_buildings.push_back(ib2);
    incompatible_buildings.push_back(ib3);
}

void Building::set_prerequisite_buildings(Building pb1, Building pb2)
{
    /**  Takes two building objects and declares them prerequisites for the building this
      *  method is called on. Unused slots should use the 'empty' building object.              */

    prerequisite_buildings.push_back(pb1);
    prerequisite_buildings.push_back(pb2);
}