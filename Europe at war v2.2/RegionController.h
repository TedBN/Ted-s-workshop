//
// Created by Ted on 27/05/2018
//

#ifndef EUROPE_AT_WAR_V2_2_REGION_CONTROLLER_H
#define EUROPE_AT_WAR_V2_2_REGION_CONTROLLER_H

#include "Region.h"

class RegionController
{
    /** Class responsible for managing region objects at a large scale. Creates all game
      * regions at game start and stores them in vectors. Contains getters for each vector
      * and populate functions for object creation. Only a single object of this class must
      * exist.                                                                                  */

    private:

        //Categorized region vectors
        std::vector <Region> iberianRegions;
        std::vector <Region> frenchRegions;
        std::vector <Region> englishAndIrishRegions;
        std::vector <Region> centralEuropeanRegions;
        std::vector <Region> scandinavianRegions;
        std::vector <Region> italianRegions;
        std::vector <Region> easternEuropeanRegions;
        std::vector <Region> balkansAndAnatolianRegions;
        std::vector <Region> russianRegions;

        //Population functions
        void populateIberianList();
        void populateFrenchList();
        void populateEnglishAndIrishList();
        void populateCentralEuropeanList();
        void populateScandinavianList();
        void populateItalianList();
        void populateEasternEuropeanList();
        void populateBalkanAndAnatolianList();
        void populateRussianList();

    public:

        //Constructor
        RegionController();

        //Search functions
        int getIberianRegionIdByName(std::string);
        int getFrenchRegionIdByName(std::string);
        int getEnglishAndIrishRegionIdByName(std::string);
        int getCentralEuropeanRegionIdByName(std::string);
        int getScandinavianRegionIdByName(std::string);
        int getItalianRegionIdByName(std::string);
        int getEasternEuropeanRegionIdByName(std::string);
        int getBalkanAndAnatolianRegionIdByName(std::string);
        int getRussianRegionIdByName(std::string);

        //Getter functions
        std::vector <Region> getIberianRegions();
        std::vector <Region> getFrenchRegions();
        std::vector <Region> getEnglishAndIrishRegions();
        std::vector <Region> getCentralEuropeanRegions();
        std::vector <Region> getScandinavianRegions();
        std::vector <Region> getItalianRegions();
        std::vector <Region> getEasternEuropeanRegions();
        std::vector <Region> getBalkanAndAnatolianRegions();
        std::vector <Region> getRussianRegions();
};

#endif //EUROPE_AT_WAR_V2_2_REGION_CONTROLLER_H
