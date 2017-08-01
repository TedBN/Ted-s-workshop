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
      *  technologies level increases science costs. Effects will be handled by controller
      *  class.                                                                                 */

    id = id_a;
    name = name_a;
    science_cost = cost;
    level = level_a;
}

Technology::Technology()
{
    /**  To be used by other classes for initializing technology objects.       */

    id = 100;
    name = "None";
    science_cost = 0;
    level = 0;
}

void Technology::set_prerequisite_techs(int tech_1, int level_1, int tech_2, int level_2,
                                        int tech_3, int level_3, int tech_4, int level_4)
{
    /**  Assigns the supplied technologies via their IDs ('tech' integers) and necessary levels
      *  as a prerequisites to  the technology his method is called on.                            */

    prerequisites.insert(std::pair <int, int> (tech_1, level_1));
    prerequisites.insert(std::pair <int, int> (tech_2, level_2));
    prerequisites.insert(std::pair <int, int> (tech_3, level_3));
    prerequisites.insert(std::pair <int, int> (tech_4, level_4));
}
