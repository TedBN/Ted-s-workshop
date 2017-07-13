//
// Created by Teodor on 21/6/2017..
//

#ifndef TECHNOLOGIES_H
#define TECHNOLOGIES_H

#include <string>
#include <map>

//TO-DO: Experimentation
class Technology
{
    /**  This class handles the technology objects to be used for the
      *  research system and their characteristics.
      *  Contains members for costs, levels for repeated techs and
      *  prerequisites. Has a setter function for already existing objects.
      *  Accessible to the main function, country and controller classes.           */

    //Members
    std::string name;
    int id;
    int science_cost;
    int level;
    std::map <Technology, int> prerequisites;

    //Function
    void add_prerequisite_tech (Technology, int);

    //Constructor
    Technology (int, std::string, int, int);

    //Friend classes and functions
    friend class Controller;
    friend class Country;
    friend int main();
};

#endif //TECHNOLOGIES_H