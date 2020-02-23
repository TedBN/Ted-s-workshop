//
// Created by Ted on 30/05/2018.
//

#ifndef EUROPE_AT_WAR_V2_2_COUNTRY_H
#define EUROPE_AT_WAR_V2_2_COUNTRY_H

#include <string>
#include <vector>

class Country
{
    private:

        //Static integer for IDs
        static int countryInstanceIds;

        //Identifier members
        int id;
        std::string name;
        std::string adjective;

        //Base members
        std::vector <std::pair <int, int>> technologiesResearched;
        std::vector <int> ownedRegionIds;
        std::vector <int> diploRelationIds;

        //Modifiers
        int researchCostModifier;
        int buildingCostModifier;
        int buildingSpeedModifier;

        int energyProductionModifier;
        int metalProductionModifier;
        int oilProductionModifier;
        int raresProductionModifier;

        //Boolean value
        bool isPlayer;

    public:

        //Constructor
        Country(std::string, std::string, bool);
};

#endif //EUROPE_AT_WAR_V2_2_COUNTRY_H
