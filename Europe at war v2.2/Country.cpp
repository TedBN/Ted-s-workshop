//
// Created by Ted on 30/05/2018.
//

#include "Country.h"
#include <utility>

//Static member definition
int Country::countryInstanceIds = 601;


                                                        /* Constructor */

Country::Country(std::string nameGiven, std::string adjectiveGiven, bool playerCountry) :
                 id(countryInstanceIds), name(std::move(nameGiven)), adjective(std::move(adjectiveGiven)),
                 researchCostModifier(1), buildingCostModifier(1), buildingSpeedModifier(1),
                 energyProductionModifier(1), metalProductionModifier(1), oilProductionModifier(1),
                 raresProductionModifier(1), isPlayer(playerCountry)
{
    ++countryInstanceIds;
}