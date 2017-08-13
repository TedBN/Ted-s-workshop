#include <iostream>
#include "MilitaryObjects.h"
#include "Controller.h"
#include "Countries.h"

int main()
{
    /**  Currently used to test database and new game code. Set to create default database
      *  and game objects.                                                                          */

    Controller::create_database();
    std::cout << "SQLite file successfully created..." << std::endl;

    Controller::create_technologies();
    std::cout << "Technologies successfully created and set..." << std::endl;

    Controller::create_buildings();
    std::cout << "Buildings successfully created and set..." << std::endl;

    return 0;
}