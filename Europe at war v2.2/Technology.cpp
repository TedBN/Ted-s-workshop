//
// Created by Ted on 4/3/2018
//

#include "Technology.h"

//Static member definition
int Technology::technologyInstances = 1;

                                                /*  Constructors    */

Technology::Technology() : name("Empty"), id(0), scienceCost(0), maxLevel(0)
{
    /** Default constructor. Creates an object with an ID of 0 that acts as an empty slot.  */
}

Technology::Technology(std::string name_a, int scienceCost_a, int currentLevel_a, int maxLevel_a) :
                       id(Technology::technologyInstances), name(std::move(name_a)),
                       scienceCost(scienceCost_a), currentLevel(currentLevel_a), maxLevel(maxLevel_a)
{
    /** Main constructor. IDs are between 0 and 200. A technology is tracked by Country objects and
      * is researched in the game to unlock access to units or buildings, making certain technology
      * objects prerequisites to them. Science cost determines the total number of science from regions
      * needed to finish researching the technology, while max level determines how many times the
      * technology can be researched per country. Current level is used when a copy of the object
      * is created in a Country object's vector.                                                            */

    ++Technology::technologyInstances;
}

Technology::Technology(std::string name_a, int scienceCost_a) :
                       id(Technology::technologyInstances), name(std::move(name_a)),
                       scienceCost(scienceCost_a), currentLevel(0), maxLevel(0)
{
    /** Secondary constructor. This variant assumes that the technology to be created is a one time
      * technology, so the current and last level integers are excluded from the arguments.             */

    ++Technology::technologyInstances;
}

                                                    /*  Setter  */

void Technology::setPrerequisiteTechs(std::pair<int, int> tech1, std::pair<int, int> tech2, std::pair<int, int> tech3,
                                      std::pair<int, int> tech4, std::pair<int, int> tech5)
{
    /** Sets a Technology object's prerequisites array to the given values. The parameters for this function
      * are five pairs of two integers. Unused parameters should be the "emptyTech" object.                    */

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
