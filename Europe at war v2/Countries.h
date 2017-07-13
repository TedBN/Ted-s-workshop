//
// Created by Teodor on 21/6/2017..
//

#ifndef COUNTRIES_H
#define COUNTRIES_H

#include <string>
#include <vector>
#include "Regions.h"
#include "DiploRelations.h"

//TO-DO: Experiment with class members
class Country
{
    /**  This class contains data for the countries in the game.
      *  Contains a ID members and three vectors for owned regions,
      *  researched techs and related diplomatic relations.
      *  This class is accessible to the main function and the controller class             */

    //Members
    std::string name;
    int id;
    std::vector <Region> regions;
    std::vector <Technology> technologies_researched;
    std::vector <DiploRelation> relations;

    //Constructors
    Country (int, std::string, std::vector <Region>, std::vector <Technology>, std::vector <DiploRelation>);

    //Friend classes and functions
    friend class Controller;
    friend int main();
};

#endif //COUNTRIES_H