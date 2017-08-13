//
// Created by Teodor on 21/6/2017..
//

#ifndef BUILDINGS_H
#define BUILDINGS_H

#include "Technologies.h"

class Building
{
    /**  This class handles all in-game buildings and their data.
      *  Members store data for construction, maintenance costs,
      *  prerequisites and behavior between buildings.
      *  Objects are tracked via the static vectors.
      *  Upon creation each object must be added to the correct vector.
      *  The functions for the class are setters for existing objects.
      *  Contains two constructors - one without a tech prerequisite and
      *  one with a tech prerequisite.
      *  Accessible by main function, region and controller classes.          */

    //Static vectors
    static std::vector <Building> education_buildings;
    static std::vector <Building> military_buildings;
    static std::vector <Building> factories;
    static std::vector <Building> resource_buildings;
    static std::vector <Building> economic_buildings;

    //Members
    std::string name;
    int id;
    int production_cost;
    int energy_cost, metal_cost, rares_cost;
    int maintenance;

    Technology prerequisite_tech = Technology();
    int prerequisite_tech_level;

    std::vector <int> type;
    std::vector <Building> prerequisite_buildings;
    std::vector <Building> incompatible_buildings;

    //Functions
    void set_incompatible_buildings (Building, Building, Building);
    void set_prerequisite_buildings (Building, Building);

    //Constructors
    Building(int, std::string, int, int, int, int, int, int, int, int, Technology, int);
    Building(int, std::string, int, int, int, int, int, int, int, int);

    //Friend classes and function
    friend class Controller;
    friend class Region;
    friend int main();
};

#endif //BUILDINGS_H