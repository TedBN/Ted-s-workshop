//
// Created by Teodor on 21/6/2017..
//

#ifndef CONTROLLER_H
#define CONTROLLER_H

//TO-DO: Add new functions for class objects or not?
class Controller
{
    /**  This class contains functions that run the game.
      *  Contains a function to create a database file for the game.
      *  This class is accessible only to the main function.            */

    //Functions
    static void create_database();

    //Friend classes and functions
    friend int main();
};

#endif //CONTROLLER_H