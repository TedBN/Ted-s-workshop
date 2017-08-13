//
// Created by Teodor on 21/6/2017..
//

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Buildings.h"

class Controller
{
    /**  This class contains functions that run the game.
      *  Contains a function to create a database file for the game,
      *  along with functions to create and set class objects.
      *  This class is accessible only to the main function.            */

    //Database function
    static void create_database();

    //Game-building functions
    static void create_technologies();
    static void create_buildings();

    //Friend classes and functions
    friend int main();
};

#endif //CONTROLLER_H