//
// Created by Ted on 27/05/2018
//

#ifndef EUROPE_AT_WAR_V2_2_REGION_H
#define EUROPE_AT_WAR_V2_2_REGION_H

#include <vector>
#include <string>

class Region
{
    /** Class responsible for creation and manipulation of region objects. Contains a
      * single default constructor, members for base resource production, limit, current
      * stock, levels of present buildings and a bool for wastelands(regions that are
      * impassable by units, have no resources or buildings). Has setters and getters
      * for members.                                                                        */

    private:

        //Static member for IDs
        static int regionInstanceIds;

        //Identifier members
        int id;
        std::string name;
        std::string continent;

        //Base stat members
        int scienceProduction;

        int energyProduction;
        int metalProduction;
        int oilProduction;
        int raresProduction;
        int manpowerProduction;

        int energyStock;
        int metalStock;
        int oilStock;
        int raresStock;
        int manpowerStock;

        int energyLimit;
        int metalLimit;
        int oilLimit;
        int raresLimit;
        int manpowerLimit;

        int moneyProduction;

        //Buildings and infrastructure members
        std::vector <int> buildingsPresent;
        int infrastructureLevel;
        int airfieldLevel;
        int dockyardLevel;

        //Wasteland flag
        bool isWasteland;

    public:

        //Setter methods
        void setScienceProduction(int);

        void setEnergyProduction(int);
        void setMetalProduction(int);
        void setOilProduction(int);
        void setRaresProduction(int);
        void setManpowerProduction(int);

        void setEnergyStock(int);
        void setMetalStock(int);
        void setOilStock(int);
        void setRaresStock(int);
        void setManpowerStock(int);

        void setEnergyLimit(int);
        void setMetalLimit(int);
        void setOilLimit(int);
        void setRaresLimit(int);
        void setManpowerLimit(int);

        void setMoneyProduction(int);

        void addBuilding(int);
        void setInfrastructureLevel(int);
        void setAirfieldLevel(int);
        void setDockyardLevel(int);

        //Getter methods
        std::string getName();
        std::string getContinent();

        int getScienceProduction();

        int getEnergyProduction();
        int getMetalProduction();
        int getOilProduction();
        int getRaresProduction();
        int getManpowerProduction();

        int getEnergyStock();
        int getMetalStock();
        int getOilStock();
        int getRaresStock();
        int getManpowerStock();

        int getEnergyLimit();
        int getMetalLimit();
        int getOilLimit();
        int getRaresLimit();
        int getManpowerLimit();

        int getMoneyProduction();

        bool regionIsWasteland();

        std::vector <int> getBuildingIdList();
        int getInfrastructureLevel();
        int getAirfieldLevel();
        int getDockyardLevel();

        //Constructors
        Region(std::string, int, int, int, int, int, int, int, int, int,
               int, int, int, int, int, int, int, int, int, int, int);
        Region(std::string, std::string);
};

#endif //EUROPE_AT_WAR_V2_2_REGION_H
