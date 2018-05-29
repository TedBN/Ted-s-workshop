#include <iostream>
#include "TechnologyController.h"
#include "BuildingController.h"
#include "MilitaryUnitController.h"

int main()
{
    //Start of game
    std::cout << "Game starting..." << std::endl << std::endl;

    //Technology controller is created
    std::cout << "Technologies initializing..." << std::endl;
    TechnologyController technologyController = TechnologyController();
    std::cout << "Technologies initialized!" << std::endl << std::endl;

    //Building controller is created
    std::cout << "Buildings initializing..." << std::endl;
    BuildingController buildingController = BuildingController();

    //Hardcoded technological prerequisites are here
    buildingController.addIdToTechPrerequisites
            (std::pair <int, int> (technologyController.findScienceAndManpowerTechnologyIdByName("Education"), 1));

    buildingController.addIdToTechPrerequisites
            (std::pair <int, int> (technologyController.findScienceAndManpowerTechnologyIdByName("Education"), 3));

    buildingController.addIdToTechPrerequisites
            (std::pair <int, int> (technologyController.findInfantryAndSupportTechnologyIdByName("Infantry"), 1));

    buildingController.addIdToTechPrerequisites
            (std::pair <int, int> (technologyController.findDestroyerAndPtBoatTechnologyIdByName("Destroyer"), 1));

    buildingController.addIdToTechPrerequisites
            (std::pair <int, int> (technologyController.findSingleEngineAircraftTechnologyIdByName("Fighter"), 1));

    buildingController.addIdToTechPrerequisites
            (std::pair <int, int> (technologyController.findArmourTechnologyIdByName("Light tank"), 1));

    buildingController.addIdToTechPrerequisites
            (std::pair <int, int>
                    (technologyController.findTwinEngineAircraftTechnologyIdByName("Medium bomber"), 1));

    buildingController.addIdToTechPrerequisites
            (std::pair <int, int>
                    (technologyController.findFourEngineAircraftTechnologyIdByName("Strategic bomber"), 1));

    buildingController.addIdToTechPrerequisites
            (std::pair <int, int>
                    (technologyController.findResourceAndProductionTechnologyIdByName("Synthetic oil"), 1));

    //Assign the prerequisites to correct buildings
    buildingController.setAllBuildingTechPrerequisites();
    std::cout << "Buildings initialized!" << std::endl << std::endl;

    //Military controller is created
    std::cout << "Military units initializing..." << std::endl;
    MilitaryUnitController militaryUnitController = MilitaryUnitController();
    std::cout << "Military units initialized!" << std::endl;

    return 0;
}