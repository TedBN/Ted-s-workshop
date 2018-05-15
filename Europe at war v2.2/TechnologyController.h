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
      * It contains vectors of all technologies sorted into categories and functions to populate
      * the vectors, locate specific technologies and copy existing technologies to other vectors.
      * Only a single instance of this class must exist in the program. Part of the game logic layer.    */

    //Empty object
    Technology emptyTechnology = Technology();

    //Static vectors
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

    //Population functions
    void populateInfantryAndSupportList();
    void populateArmourList();

    void populateSingleEngineAircraftList();
    void populateTwinEngineAircraftList();
    void populateFourEngineAircraftList();
    void populateAircraftArnamentAndEngineList();
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

    //Search function
    int findTechnologyIdByName(std::string);
};

#endif // TECHNOLOGY_CONTROLLER_H
