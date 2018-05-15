//
// Created by Ted on 4/3/2018
//

#ifndef BUILDING_CONTROLLER_H
#define BUILDING_CONTROLLER_H

#include <vector>
#include "Building.h"

class BuildingController
{
    /**  A class that stores all active building objects in a single object meant to be
      *  used in the main class. Members are building storage vectors separated by type,
      *  methods are used to populate and manipulate the lists. Contains a single default
      *  constructor. Part of the game logic layer.                                         */

    private:

        //Empty object
        Building emptyBuilding = Building();

        //Vector members
        std::vector <Building> educationBuildings;
        std::vector <Building> militaryBuildings;
        std::vector <Building> productionBuildings;
        std::vector <Building> resourceBuildings;
        std::vector <Building> economicBuildings;

    public:

        //Constructor
        BuildingController();

        //Methods
        void populateEducationList();
        void populateMilitaryList();
        void populateProductionList();
        void populateResourceList();
        void populateEconomicList();
};

#endif //BUILDING_CONTROLLER_H
