//
// Created by Ted on 4/3/2018
//

#ifndef TECHNOLOGY_CONTROLLER_H
#define TECHNOLOGY_CONTROLLER_H

#include <vector>
#include "Technology.h"

class TechnologyController
{
    /** This class is responsible for initializing and managing all technologies in the game.
      * It contains vectors of all technologies sorted into categories and functions to populate,
      * manipulate and retrieve them or their data. Has a single default constructor and technology
      * member used in the place of empty slots. Part of the game logic layer.                         */

    private:

        //Empty object
        Technology emptyTechnology = Technology();

        //Technology vectors
        std::vector <Technology> infantryAndSupportTechs;
        std::vector <Technology> armourTechs;

        std::vector <Technology> singleEngineAircraftTechs;
        std::vector <Technology> twinEngineAircraftTechs;
        std::vector <Technology> fourEngineAircraftTechs;
        std::vector <Technology> aircraftArmamentAndEngineTechs;
        std::vector <Technology> carrierAircraftTechs;
        std::vector <Technology> aircraftRadarTechs;

        std::vector <Technology> destroyerAndPtBoatTechs;
        std::vector <Technology> cruiserTechs;
        std::vector <Technology> battleshipAndCruiserTechs;
        std::vector <Technology> aircraftCarrierTechs;
        std::vector <Technology> submarineAndTorpedoTechs;
        std::vector <Technology> radarSonarAndTransportTechs;

        std::vector <Technology> scienceAndManpowerTechs;
        std::vector <Technology> resourceAndProductionTechs;
        std::vector <Technology> jetEngineAndRocketTechs;
        std::vector <Technology> electronicAndCryptographicTechs;
        std::vector <Technology> nuclearTechs;

    public:

        //Constructor
        TechnologyController();

        //Population functions
        void populateInfantryAndSupportList();
        void populateArmourList();

        void populateSingleEngineAircraftList();
        void populateTwinEngineAircraftList();
        void populateFourEngineAircraftList();
        void populateAircraftArmamentAndEngineList();
        void populateCarrierAircraftList();
        void populateAircraftRadarList();

        void populateDestroyerAndPtBoatList();
        void populateCruiserList();
        void populateBattleshipAndCruiserList();
        void populateAircraftCarrierList();
        void populateSubmarineAndTorpedoList();
        void populateRadarSonarAndTransportList();

        void populateScienceAndManpowerList();
        void populateResourceAndProductionList();
        void populateJetEngineAndRocketList();
        void populateElectronicAndCryptographicList();
        void populateNuclearList();


        //Search functions
        int findArmourTechnologyIdByName(std::string);
        int findInfantryAndSupportTechnologyIdByName(std::string);

        int findSingleEngineAircraftTechnologyIdByName(std::string);
        int findTwinEngineAircraftTechnologyIdByName(std::string);
        int findFourEngineAircraftTechnologyIdByName(std::string);
        int findAircraftArnamentAndEngineTechnologyIdByName(std::string);
        int findCarrerAircraftTechnologyIdByName(std::string);
        int findAircraftRadarTechnologyIdByName(std::string);

        int findDestroyerAndPtBoatTechnologyIdByName(std::string);
        int findCruiserTechnologyIdByName(std::string);
        int findBattleshipAndCruiserTechnologyIdByName(std::string);
        int findAircraftCarrierTechnologyIdByName(std::string);
        int findSubmarineAndTorpedoTechnologyIdByName(std::string);
        int findRadarSonarAndTransportTechnologyIdByName(std::string);

        int findScienceAndManpowerTechnologyIdByName(std::string);
        int findResourceAndProductionTechnologyIdByName(std::string);
        int findJetEngineAndRocketTechnologyIdByName(std::string);
        int findElectronicAndCryptographicTechnologyIdByName(std::string);
        int findNuclearTechnologyIdByName(std::string);


        //Getter functions
        std::vector <Technology> getArmourList();
        std::vector <Technology> getInfantryAndSupportList();

        std::vector <Technology> getSingleEngineAircraftList();
        std::vector <Technology> getTwinEngineAircraftTechnologyList();
        std::vector <Technology> getFourEngineAircraftList();
        std::vector <Technology> getAircraftArnamentAndEngineList();
        std::vector <Technology> getCarrerAircraftList();
        std::vector <Technology> getAircraftRadarList();

        std::vector <Technology> getDestroyerAndPtBoatList();
        std::vector <Technology> getCruiserList();
        std::vector <Technology> getBattleshipAndCruiserList();
        std::vector <Technology> getAircraftCarrierList();
        std::vector <Technology> getSubmarineAndTorpedoList();
        std::vector <Technology> getRadarSonarAndTransportList();

        std::vector <Technology> getScienceAndManpowerList();
        std::vector <Technology> getResourceAndProductionList();
        std::vector <Technology> getJetEngineAndRocketList();
        std::vector <Technology> getElectronicAndCryptographicList();
        std::vector <Technology> getNuclearList();
};

#endif // TECHNOLOGY_CONTROLLER_H
