//
// Created by Teodor on 21/6/2017..
//

#ifndef TECHNOLOGIES_H
#define TECHNOLOGIES_H

#include <string>
#include <vector>
#include <map>

class Technology
{
    /**  This class handles the technology objects to be used for the
      *  research system and their characteristics. Contains members for costs,
      *  levels for repeated techs and prerequisites, also static vectors to
      *  track objects. Has a setter function for already existing objects and
      *  two constructors. Objects must be added to the appropriate static vector upon creation.
      *  Accessible to the main function, country, building and controller classes.                 */

    //Static vectors
    static std::vector <Technology> infantry_and_support_techs;
    static std::vector <Technology> armour_techs;

    static std::vector <Technology> single_engine_aircraft_techs;
    static std::vector <Technology> twin_engine_aircraft_techs;
    static std::vector <Technology> four_engine_aircraft_techs;
    static std::vector <Technology> aircraft_armament_and_engine_techs;
    static std::vector <Technology> carrier_aircraft_techs;
    static std::vector <Technology> aircraft_radar_techs;

    static std::vector <Technology> destroyer_and_pt_boat_techs;
    static std::vector <Technology> cruiser_techs;
    static std::vector <Technology> battleship_and_cruiser_techs;
    static std::vector <Technology> aircraft_carrier_techs;
    static std::vector <Technology> submarine_and_torpedo_techs;
    static std::vector <Technology> radar_sonar_and_transport_techs;

    static std::vector <Technology> science_and_manpower_techs;
    static std::vector <Technology> resource_and_production_techs;
    static std::vector <Technology> jet_engine_and_rocket_techs;
    static std::vector <Technology> electronic_and_cryptographic_techs;
    static std::vector <Technology> nuclear_techs;

    //Members
    std::string name;
    int id;
    int science_cost;
    int level;
    std::map <int, int> prerequisites;

    //Functions
    void set_prerequisite_techs(int, int, int, int, int, int, int, int, int, int);

    //Constructors
    Technology ();
    Technology (int, std::string, int, int);

    //Friend classes and functions
    friend class Controller;
    friend class Country;
    friend class Building;
    friend int main();
};

#endif //TECHNOLOGIES_H