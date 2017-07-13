//
// Created by Teodor on 21/6/2017..
//

#ifndef DIPLORELATIONS_H
#define DIPLORELATIONS_H

#include <string>

//TO-DO:Expand class
class DiploRelation
{
    /**  This class handles all relations between countries in the game.
      *  Contains members to identify effect and affected countries.
      *  This class is accessible to the controller class, country class and main function.          */

    //Members
    int sender_id, recipient_id;
    int relation_id;
    int type;

    //Constructors
    DiploRelation (int, int, int);

    //Friend classes and functions
    friend class Controller;
    friend class Country;
    friend int main();
};

#endif //DIPLORELATIONS_H