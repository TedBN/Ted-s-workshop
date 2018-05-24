//
// Created by Ted on 4/3/2018
//

#ifndef BUILDINGS_H
#define BUILDINGS_H

#include <array>
#include <string>

class Building
{
    /** This class handles the creation, data retrieval and setting of individual building
      * objects. Contains two constructors, setters and getters for individual objects,
      * members for interaction with other buildings, prerequisite technologies and building
      * data. Created buildings are stored in vectors in the respective controller class and
      * modified in bulk by it's functions. Part of the domain data layer.                      */

    private:

        //Static member
        static int buildingInstances;

        //Members
        std::string name;
        int id;
        int productionCost;
        int energyCost;
        int metalCost;
        int raresCost;
        int maintenance;

        //Members with technology object IDs
        int prerequisiteTechId;
        int prerequisiteTechLevel;

        //Arrays with IDs and their defaults
        std::array<int, 2> prerequisiteBuildings;
        std::array<int, 3> incompatibleBuildings;

    public:

        //Constructors
        Building();
        Building(std::string, int, int, int, int, int);

        //Setter functions
        void setPrerequisiteTechnology(int, int);
        void setIncompatibleBuildings(Building, Building, Building);
        void setPrerequisiteBuildings(Building, Building);

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