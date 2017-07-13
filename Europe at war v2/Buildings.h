//
// Created by Teodor on 21/6/2017..
//

#ifndef BUILDINGS_H
#define BUILDINGS_H

#include <iostream>
#include <vector>
#include <string>
#include "Technologies.h"

//TO-DO: Experimentation
class Building
{
    /**  This class handles all in-game buildings and their data.
      *  Members store data for construction and maintenance costs,
      *  prerequisites, effects and behavior between buildings.
      *  The functions for the class are setters for existing objects.
      *  Accessible by main function, region and controller classes.          */

    //Members
    std::string name;
    int id;
    int production_cost;
    int energy_cost, metal_cost, rares_cost;
    int maintenance;
    Technology prerequisite_tech;
    std::vector <int> type;
    std::vector <Building> prerequisite_buildings;
    std::vector <Building> incompatible_buildings;

    //Functions
    void set_incompatible_buildings (Building, Building, Building);
    void set_prerequisite_buildings (Building, Building);

    //Constructor
    Building (int, std::string, int, int, int, int, int, int, int, int, Technology);

    //Friend classes and function
    friend class Controller;
    friend class Region;
    friend int main();
};

#endif //BUILDINGS_H