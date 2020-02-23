//
// Created by Ted on 30/05/2018.
//

#ifndef EUROPE_AT_WAR_V2_2_GAME_CONTROLLER_H
#define EUROPE_AT_WAR_V2_2_GAME_CONTROLLER_H

#include "Country.h"

class CountryController
{
    private:

        //Vector members
        std::vector <Country> gameCountries;

    public:

        //Population method
        void populateCountriesList();

        //Search method
        int findCountryIdByName(std::string);

        //Getter method
        std::vector <Country> getCountryList();

        //Constructor
        CountryController();
};

#endif //EUROPE_AT_WAR_V2_2_GAME_CONTROLLER_H
