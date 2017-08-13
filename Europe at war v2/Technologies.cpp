//
// Created by Ted on 9/7/2017..
//

#include "Technologies.h"

    //Static vector definitions
    std::vector <Technology> Technology::infantry_and_support_techs = {};
    std::vector <Technology> Technology::armour_techs = {};

    std::vector <Technology> Technology::single_engine_aircraft_techs = {};
    std::vector <Technology> Technology::twin_engine_aircraft_techs = {};
    std::vector <Technology> Technology::four_engine_aircraft_techs = {};
    std::vector <Technology> Technology::aircraft_armament_and_engine_techs = {};
    std::vector <Technology> Technology::carrier_aircraft_techs = {};
    std::vector <Technology> Technology::aircraft_radar_techs = {};

    std::vector <Technology> Technology::destroyer_and_pt_boat_techs = {};
    std::vector <Technology> Technology::cruiser_techs = {};
    std::vector <Technology> Technology::battleship_and_cruiser_techs = {};
    std::vector <Technology> Technology::aircraft_carrier_techs = {};
    std::vector <Technology> Technology::submarine_and_torpedo_techs = {};
    std::vector <Technology> Technology::radar_sonar_and_transport_techs = {};

    std::vector <Technology> Technology::science_and_manpower_techs = {};
    std::vector <Technology> Technology::resource_and_production_techs = {};
    std::vector <Technology> Technology::jet_engine_and_rocket_techs = {};
    std::vector <Technology> Technology::electronic_and_cryptographic_techs = {};
    std::vector <Technology> Technology::nuclear_techs = {};

Technology::Technology(int id_a, std::string name_a, int cost, int level_a)
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

void Technology::set_prerequisite_techs(int tech_1, int level_1, int tech_2, int level_2, int tech_3, int level_3,
                                        int tech_4, int level_4, int tech_5, int level_5)
{
    /**  Assigns the supplied technologies via their IDs ('tech' integers) and necessary levels
      *  as a prerequisites to the technology his method is called on. -1 means an empty slot
      *  and is ignored.                                                                            */

    std::vector <int> techs = {tech_1, tech_2, tech_3, tech_4, tech_5};
    std::vector <int> levels = {level_1, level_2, level_3, level_4, level_5};

    for (int i : techs)
    {
        if (i != -1)
        {
            if (levels[i] != -1)
            {
                prerequisites.insert(std::pair <int, int> (i, levels[i]));
            }

            else { continue; }
        }

        else { continue; }
    }
}
