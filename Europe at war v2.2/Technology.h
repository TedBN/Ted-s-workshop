//
// Created by Ted on 4/3/2018
//

#ifndef TECHNOLOGIES_H
#define TECHNOLOGIES_H

#include <string>
#include <array>

class Technology
{
    /** This class handles the creation and data retrieval for individual technology
      * objects. Contains three constructors, a static integer that tracks number of created
      * objects, an array with their prerequisites and five other members. Vectors with all
      * created objects are held in this class's respective controller and can be modified in
      * bulk via it's functions. Part of the domain data layer.                                 */

    private:

        //Static member
        static int technologyInstanceIds;

        //Members
        std::string name;
        int id;
        int scienceCost;
        int currentLevel;
        int maxLevel;

        //Array with prerequisites
        std::array<std::pair<int, int>, 5> techPrerequisites =
        std::array<std::pair<int, int>, 5>
                { std::pair<int, int> { 0, -1 },
                  std::pair<int, int> { 0, -1 },
                  std::pair<int, int> { 0, -1 },
                  std::pair<int, int> { 0, -1 },
                  std::pair<int, int> { 0, -1 }, };

    public:

        //Setter function
        void setPrerequisiteTechs(std::pair<int, int>, std::pair<int, int>, std::pair<int, int>,
                                  std::pair<int, int>, std::pair<int, int>);

        //Getter functions
        int getId();
        std::string getName();
        int getCurrentLevel();
        int getMaxLevel();
        int getScienceCost();
        std::array<std::pair<int, int>, 5> getTechPrereqs();

        //Constructors
        Technology();
        Technology(std::string, int);
        Technology(std::string, int, int, int);
};

#endif //TECHNOLOGIES_H
