//
// Created by Ted on 30/05/2018.
//

#include "GameController.h"

CountryController::CountryController()
{
    populateCountriesList();
}

void CountryController::populateCountriesList()
{
    //Object creation
    //Country spain = Country("Spain", "Spanish");
    //Country portugal = Country("Portugal", "Portuguese");

    //Addition to vectors
    //gameCountries.push_back(spain);
    //gameCountries.push_back(portugal);
}

int CountryController::findCountryIdByName(std::string)
{
    return 0;
}

std::vector<Country> CountryController::getCountryList()
{
    return gameCountries;
}




