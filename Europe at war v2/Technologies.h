//
// Created by Teodor on 21/6/2017..
//

#ifndef TECHNOLOGIES_H
#define TECHNOLOGIES_H

#include <string>
#include <map>

class Technology
{
    /**  This class handles the technology objects to be used for the
      *  research system and their characteristics. Contains members for costs,
      *  levels for repeated techs and prerequisites. Has a setter function for
      *  already existing objects and two constructors.
      *  Accessible to the main function, country, building and controller classes.           */

    //Members
    std::string name;
    int id;
    int science_cost;
    int level;
    std::map <int, int> prerequisites;

    //Function
    void set_prerequisite_techs(int, int, int, int, int, int, int, int);

    //Constructors
    Technology ();
    Technology (int, std::string, int, int);

    //Friend classes and functions
    friend class Controller;
    friend class Country;
    friend class Building;
    friend int main();
};

#endif //TECHNOLOGIES_H