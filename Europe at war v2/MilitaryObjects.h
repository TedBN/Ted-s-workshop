//
// Created by Teodor on 21/6/2017..
//

#ifndef MILITARYOBJECTS_H
#define MILITARYOBJECTS_H

#include <string>

//TO-DO: Experiment with superclass
class MilitaryUnit
{
    /**  This class is the base for all military units in the game.
      *  Includes members for unit stats and resource costs and setter
      *  methods to reflect upgrades. Intended to be the superclass
      *  for land, air and naval units. Has no friend classes or functions.     */

    //Members
    std::string name;
    int id;
    int attack, defense, movement, range;
    int energy_cost, metal_cost, oil_cost, manpower_cost;

    //Setting methods
    void set_stats();
    void set_costs();
};

//TO-DO: Add more stuff to subclasses
class LandUnit : public MilitaryUnit
{
    /**  This class handles every country's ground forces and data of
      *  every ground unit type. Borrows all members from superclass.
      *  Accessible to the main function and controller class                */

    //Constructor
    LandUnit (int, std::string, int, int, int, int, int, int, int, int);

    //Friend classes and functions
    friend class Controller;
    friend int main();
};

class AirUnit : public MilitaryUnit
{
    /**  This class handles every country's air forces and data of
      *  every air unit type. Borrows all members from superclass.
      *  Accessible to the main function and controller class                */

    //Constructor
    AirUnit (int, std::string, int, int, int, int, int, int, int, int);

    //Friend classes and functions
    friend class Controller;
    friend int main();
};

class NavalUnit : public MilitaryUnit
{
    /**  This class handles every country's naval forces and data of
      *  every naval unit type. Borrows all members from superclass.
      *  Accessible to the main function and controller class                */

    //Constructor
    NavalUnit (int, std::string, int, int, int, int, int, int, int, int);

    //Friend classes and functions
    friend class Controller;
    friend int main();
};

#endif //MILITARYOBJECTS_H