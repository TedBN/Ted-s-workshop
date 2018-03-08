//
// Created by Ted on 4/3/2018
//

#ifndef BUILDINGS_H
#define BUILDINGS_H

#include <array>
#include <string>

class Building
{
    /**  This class handles the creation, modification and data retrieval of all in-game building data.
       * Members store data for construction, maintenance costs, prerequisites and behavior between
       * buildings. The functions for the class are setters and getters for existing objects.
       * Contains three constructors - one default, one without tech prerequisites and one with them.
       * Part of the domain data layer.                                                                     */

    private:

        //Static member
        static int buildingInstances;

        //Members
        std::string name;
        int id;
        int production_cost;
        int energy_cost;
        int metal_cost;
        int rares_cost;
        int maintenance;

        //Members with technology object IDs
        int prerequisite_tech_id;
        int prerequisite_tech_level;

        //Arrays with IDs and their defaults
        std::array <int, 2> prerequisite_buildings;
        std::array <int, 3> incompatible_buildings;

    public:

        //Constructors
        Building();
        Building(std::string, int, int, int, int, int);
        Building(std::string, int, int, int, int, int, int, int);

        //Setter functions
        void setIncompatibleBuildings (Building, Building, Building);
        void setPrerequisiteBuildings (Building, Building);

        //Getter functions
        int getId();
        std::string getName();
        int getProductionCost();
        int getEnergyCost();
        int getMetalCost();
        int getRaresCost();
        int getMaintenanceCost();
        int getPrereqTechId();
        int getPrereqTechLevel();

        //Getter functions for arrays
        std::array<int, 2> getPrerequisiteBuildings();
        std::array<int, 3> getIncompatibleBuildings();
};

#endif //BUILDINGS_H