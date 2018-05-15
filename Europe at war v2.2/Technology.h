//
// Created by Ted on 4/3/2018
//

#ifndef TECHNOLOGIES_H
#define TECHNOLOGIES_H

#include <string>
#include <array>

class Technology
{
    /**  This class handles the technology objects to be used for the
      *  research system and their characteristics. Contains members for costs,
      *  levels for repeated techs and prerequisites, also static vectors to
      *  track objects. Has a setter function for already existing objects and
      *  two constructors. Objects must be added to the appropriate static vector upon creation.
      *  Accessible to the main function, country, building and controller classes.                 */

    private:

        //Static member
        static int technologyInstances;

        //Members
        std::string name;
        int id;
        int scienceCost;
        int currentLevel;
        int maxLevel;
        std::array <std::pair<int, int>, 5> techPrerequisites;

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
