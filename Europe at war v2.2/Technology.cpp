//
// Created by Ted on 4/3/2018
//

#include "Technology.h"

//Static member definition
int Technology::technologyInstanceIds = 1;


                                                /*  Constructors    */

Technology::Technology() : name("Empty"), id(0), scienceCost(0), currentLevel(0), maxLevel(0)
{
    /** Default constructor. Creates an object with an ID of 0 that acts as an empty slot.  */
}

Technology::Technology(std::string name_a, int scienceCost_a, int currentLevel_a, int maxLevel_a) :
                       id(Technology::technologyInstanceIds), name(std::move(name_a)),
                       scienceCost(scienceCost_a), currentLevel(currentLevel_a), maxLevel(maxLevel_a)
{
    /** Main constructor. IDs start from 1 and can go up to 200 depending on number of instances in memory.
      * Exceeding 200 will cause conflicts. All members except the prerequisites array are set via this
      * constructor.                                                                                            */

    ++Technology::technologyInstanceIds;
}

Technology::Technology(std::string name_a, int scienceCost_a) :
                       id(Technology::technologyInstanceIds), name(std::move(name_a)),
                       scienceCost(scienceCost_a), currentLevel(0), maxLevel(0)
{
    /** Secondary constructor. This variant assumes that the technology to be created is a one time
      * technology, so the current and last level integers are excluded from the arguments and set to 0.    */

    ++Technology::technologyInstanceIds;
}


                                                    /*  Setter  */

void Technology::setPrerequisiteTechs(std::pair<int, int> tech1, std::pair<int, int> tech2, std::pair<int, int> tech3,
                                      std::pair<int, int> tech4, std::pair<int, int> tech5)
{
    /** Sets a Technology object's prerequisites array to the given values. The parameters for this function
      * are five pairs of two integers - one representing the technology ID and the other it's minimum level.   */

    techPrerequisites[0] = tech1;
    techPrerequisites[1] = tech2;
    techPrerequisites[2] = tech3;
    techPrerequisites[3] = tech4;
    techPrerequisites[4] = tech5;
}


                                                     /*  Getters  */

int Technology::getId()
{
    /** Returns an object's ID. */

    return id;
}

std::string Technology::getName()
{
    /** Returns an object's name. */

    return name;
}

int Technology::getMaxLevel()
{
    /** Returns an object's max level. */

    return maxLevel;
}

int Technology::getCurrentLevel()
{
    /** Returns an object's current level. */

    return currentLevel;
}

int Technology::getScienceCost()
{
    /** Returns an object's science cost. */

    return scienceCost;
}

std::array<std::pair<int, int>, 5> Technology::getTechPrereqs()
{
    /** Returns an object's prerequisites array. */

    return techPrerequisites;
}
