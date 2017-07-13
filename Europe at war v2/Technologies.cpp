//
// Created by Ted on 9/7/2017..
//

#include "Technologies.h"

Technology::Technology (int id_a, std::string name_a, int cost, int level_a)
{
    /**  IDs for technologies are in the 100-200 range. Science is generated in regions
      *  and must reached the given number to research a technology. Technologies may
      *  be repeatedly researched (Hearts of Iron style) - such technologies must have
      *  a level of 1 to 10. One time technologies need to have level 0. For repeated
      *  technologies level increases science costs.                                     */

    id = id_a;
    name = name_a;
    science_cost = cost;
    level = level_a;
}

void Technology::add_prerequisite_tech(Technology tech, int level_a)
{
    /**  Assigns the given technology and level as a prerequisite to the technology
      *  this method is called on.                                                      */

    prerequisites.insert(std::pair <Technology, int> (tech, level_a));
}
