//
// Created by Ted on 27/05/2018
//

#include "Region.h"
#include <utility>

//Static member definitions
int Region::regionInstanceIds = 401;


                                                        /* Constructors */

Region::Region(std::string objectName, /*std::string continentName,*/ int scienceProductionValue,
               int energyProductionValue, int metalProductionValue, int oilProductionValue, int raresProductionValue,
               int manpowerProductionValue, int energyStockValue, int metalStockValue, int oilStockValue,
               int raresStockValue, int manpowerStockValue, int energyLimitValue, int metalLimitValue,
               int oilLimitValue, int raresLimitValue, int manpowerLimitValue, int moneyProductionValue,
               int infrastructureLevelValue, int airfieldLevelValue, int dockyardLevelValue ) :

               id(regionInstanceIds), name(std::move(objectName)), /*continent(std::move(continentName)),*/
               scienceProduction(scienceProductionValue), energyProduction(energyProductionValue),
               metalProduction(metalProductionValue), oilProduction(oilProductionValue),
               raresProduction(raresProductionValue), manpowerProduction(manpowerProductionValue),
               energyStock(energyStockValue), metalStock(metalStockValue), oilStock(oilStockValue),
               raresStock(raresStockValue), manpowerStock(manpowerStockValue), energyLimit(energyLimitValue),
               metalLimit(metalLimitValue), oilLimit(oilLimitValue), raresLimit(raresLimitValue),
               manpowerLimit(manpowerLimitValue), moneyProduction(moneyProductionValue),
               infrastructureLevel(infrastructureLevelValue), airfieldLevel(airfieldLevelValue),
               dockyardLevel(dockyardLevelValue)
{
    ++regionInstanceIds;
}


                                                        /* Setters */

void Region::setScienceProduction(int scienceProductionValue)
{
    scienceProduction = scienceProductionValue;
}

void Region::setEnergyProduction(int energyProductionValue)
{
    energyProduction = energyProductionValue;
}

void Region::setMetalProduction(int metalProductionValue)
{
    metalProduction = metalProductionValue;
}

void Region::setOilProduction(int oilProductionValue)
{
    oilProduction = oilProductionValue;
}

void Region::setRaresProduction(int raresProductionValue)
{
    raresProduction = raresProductionValue;
}

void Region::setManpowerProduction(int manpowerProductionValue)
{
    manpowerProduction = manpowerProductionValue;
}

void Region::setEnergyStock(int energyStockValue)
{
    energyStock = energyStockValue;
}

void Region::setMetalStock(int metalStockValue)
{
    metalStock = metalStockValue;
}

void Region::setOilStock(int oilStockValue)
{
    oilStock = oilStockValue;
}

void Region::setRaresStock(int raresStockValue)
{
    raresStock = raresStockValue;
}

void Region::setManpowerStock(int manpowerStockValue)
{
    manpowerStock = manpowerStockValue;
}

void Region::setEnergyLimit(int energyLimitValue)
{
    energyLimit = energyLimitValue;
}

void Region::setMetalLimit(int metalLimitValue)
{
    metalLimit = metalLimitValue;
}

void Region::setOilLimit(int oilLimitValue)
{
    oilLimit =oilLimitValue;
}

void Region::setRaresLimit(int raresLimitValue)
{
    raresLimit = raresLimitValue;
}

void Region::setManpowerLimit(int manpowerLimitValue)
{
    manpowerLimit = manpowerLimitValue;
}

void Region::setMoneyProduction(int moneyProductionValue)
{
    moneyProduction = moneyProductionValue;
}

void Region::addBuilding(int buildingId)
{
    buildingsPresent.push_back(buildingId);
}

void Region::setInfrastructureLevel(int infrastructureLevelValue)
{
    infrastructureLevel = infrastructureLevelValue;
}

void Region::setAirfieldLevel(int airfieldLevelValue)
{
    airfieldLevel = airfieldLevelValue;
}

void Region::setDockyardLevel(int dockyardLevelValue)
{
    dockyardLevel = dockyardLevelValue;
}


                                                              /* Getters */

std::string Region::getName()
{
    return name;
}

std::string Region::getContinent()
{
    return continent;
}

int Region::getScienceProduction()
{
    return scienceProduction;
}

int Region::getEnergyProduction()
{
    return energyProduction;
}

int Region::getMetalProduction()
{
    return metalProduction;
}

int Region::getOilProduction()
{
    return oilProduction;
}

int Region::getRaresProduction()
{
    return raresProduction;
}

int Region::getManpowerProduction()
{
    return manpowerProduction;
}

int Region::getEnergyStock()
{
    return energyStock;
}

int Region::getMetalStock()
{
    return metalStock;
}

int Region::getOilStock()
{
    return oilStock;
}

int Region::getRaresStock()
{
    return raresStock;
}

int Region::getManpowerStock()
{
    return manpowerStock;
}

int Region::getEnergyLimit()
{
    return energyLimit;
}

int Region::getMetalLimit()
{
    return metalLimit;
}

int Region::getOilLimit()
{
    return oilLimit;
}

int Region::getRaresLimit()
{
    return raresLimit;
}

int Region::getManpowerLimit()
{
    return manpowerLimit;
}

int Region::getMoneyProduction()
{
    return moneyProduction;
}

bool Region::regionIsWasteland()
{
    return isWasteland;
}

std::vector<int> Region::getBuildingIdList()
{
    return buildingsPresent;
}

int Region::getInfrastructureLevel()
{
    return infrastructureLevel;
}

int Region::getAirfieldLevel()
{
    return airfieldLevel;
}

int Region::getDockyardLevel()
{
    return dockyardLevel;
}

