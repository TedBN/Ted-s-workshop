//
// Created by Ted on 15/8/2017..
//

#include "MilitaryObjects.h"

    //Static vector definitions
    std::vector <LandUnit> LandUnit::land_units = {};
    std::vector <AirUnit> AirUnit::air_units = {};
    std::vector <NavalUnit> NavalUnit::naval_units = {};

LandUnit::LandUnit(int num, std::string str, int att, int def, int mov, int ra, int bt, int ec, int mc, int oc, int mpc)
{
    /**  Constructor for land units. Movement presents how many hexes a unit type can move
      *  through per turn, range presents from how many hexes a unit can attack. Build time represents
      *  the base number of turns necessary to produce a unit of that type. Everything else
      *  should be self-explanatory.                                                                        */

    id = num,               build_time = bt;
    name = str,             energy_cost = ec;
    attack = att,           metal_cost = mc;
    defense = def,          oil_cost = oc;
    movement = mov;         manpower_cost = mpc;
    range = ra;
}

AirUnit::AirUnit(int num, std::string str, int att, int def, int ra, int bt, int ec, int mc, int oc, int mpc)
{
    /**  Constructor for aerial units. Same as above constructor, but movement is always 0.                 */

    id = num,               build_time = bt;
    name = str,             energy_cost = ec;
    attack = att,           metal_cost = mc;
    defense = def,          oil_cost = oc;
    movement = 0;           manpower_cost = mpc;
    range = ra;
}

NavalUnit::NavalUnit(int num, std::string str, int att, int def, int mov, int ra, int bt, int ec, int mc, int oc, int mpc)
{
    /**  Constructor for naval units. Absolute same as the one for land units.                              */

    id = num,               build_time = bt;
    name = str,             energy_cost = ec;
    attack = att,           metal_cost = mc;
    defense = def,          oil_cost = oc;
    movement = mov;         manpower_cost = mpc;
    range = ra;
}

void MilitaryUnit::set_costs(int bt, int ec, int mc, int oc, int mpc)
{
    /**  Takes five integers and replaces the original cost and build time members with them.                */

    build_time = bt;
    energy_cost = ec;
    metal_cost = mc;
    oil_cost = oc;
    manpower_cost = mpc;
}

void MilitaryUnit::set_stats(int att, int def, int mov, int ran)
{
    /**  Takes four integers and replaces the corresponding stat members with them.
      *  If used on an air unit, mov must be 0.                                                              */

    attack = att;
    defense = def;
    movement = mov;
    range = ran;
}