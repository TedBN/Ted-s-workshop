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
      *  used in the main function. Members are building storage vectors separated by type,
      *  methods are used to populate, manipulate and retrieve the lists. One vector and two
      *  methods are used to set and store technological prerequisites via bridging this object
      *  with a technology controller. Contains a single constructor. Part of the game logic layer.    */

    private:

        //Empty object
        Building emptyBuilding = Building();

        //Technology requirements vector
        std::vector <std::pair<int, int>> requiredTechsById;

        //List members
        std::vector <Building> educationBuildings;
        std::vector <Building> militaryBuildings;
        std::vector <Building> productionBuildings;
        std::vector <Building> resourceBuildings;
        std::vector <Building> economicBuildings;

    public:

        //Constructor
        BuildingController();

        //Population methods
        void populateEducationList();
        void populateMilitaryList();
        void populateProductionList();
        void populateResourceList();
        void populateEconomicList();

        //Single building search methods
        int findEducationBuildingIdByName(std::string);
        int findMilitaryBuildingIdByName(std::string);
        int findProductionBuildingIdByName(std::string);
        int findResourceBuildingIdByName(std::string);
        int findEconomicBuildingIdByName(std::string);

        //Technology requirement methods
        void addIdToTechPrerequisites(std::pair <int, int>);
        void setAllBuildingTechPrerequisites();

        //Getter methods
        std::vector <Building> getEducationList();
        std::vector <Building> getMilitaryList();
        std::vector <Building> getProductionList();
        std::vector <Building> getResourceList();
        std::vector <Building> getEconomicList();
};

#endif //BUILDING_CONTROLLER_H
