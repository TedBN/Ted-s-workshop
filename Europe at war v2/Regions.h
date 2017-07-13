//
// Created by Teodor on 21/6/2017..
//

#ifndef REGIONS_H
#define REGIONS_H

#include <vector>
#include <string>
#include "Buildings.h"
#include "Countries.h"

//TO-DO: Experimentation
class Region
{
    /**  This class houses data for regions in the game.
      *  Included are members for constructed buildings, resource
      *  situation, building levels, capacity for units and resources,
      *  flags for possible production and methods for resource management
      *  and construction of units or buildings.
      *  Accessible to the main function, the controller and country class                           */

    //Members
    //Core members and resources
    std::string name;
    int owner;
    int id;
    int science;
    int energy_production, metal_production, oil_production, rares_production, manpower_production;
    int materiel_production, fuel_production;
    int materiel_limit, fuel_limit;
    int energy_stock, metal_stock, oil_stock, rares_stock, manpower_stock;
    int energy_limit, metal_limit, oil_limit, rares_limit, manpower_limit;
    int money_production;

    //Buildings and infrastructure
    std::vector <Building> buildings_present;
    int infastructure_level;
    int airfield_level;
    int dockyard_level;
    int armour_factory_level;
    int small_air_factory_level;
    int medium_air_factory_level;
    int large_air_factory_level;
    int synthethic_oil_refinery_level;
    int oil_well_level;
    int quarry_level;
    int coal_mine_level;

    int aircraft_capacity;
    int warship_capacity;

    //Production flags
    bool can_build_armour;
    bool can_build_light_aircraft;
    bool can_build_medium_aircraft;
    bool can_build_heavy_aircraft;
    bool can_build_convoys;
    bool can_build_warships;
    bool can_stage_operations;

    //Methods
    void transfer_resources(int, int, int, int, int, int);
    void build_unit(int, int);
    void build_building(int);

    //Constructors
    Region (int, std::string, int, int, int, int, int, int, int, int, int, int, int, int, int, int);

    //Friend classes and functions
    friend class Controller;
    friend class Country;
    friend int main();
};

#endif //REGIONS_H