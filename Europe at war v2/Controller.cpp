//
// Created by Teodor on 21/6/2017..
//

#include <iostream>
#include <vector>
#include "sqlite3.h"
#include "Controller.h"

void Controller::create_database()
{
    /**  This function creates a database file with the necessary tables for
      *  the game. Takes no arguments.                                          */

    //Char variables with the SQL commands for the tables
    char command1[357] = "CREATE TABLE Countries ("
                         "ID           INTEGER     PRIMARY KEY,"
                         "Name         TEXT        UNIQUE  NOT NULL,"
                         "Regions      INTEGER     UNIQUE  NOT NULL,"
                         "Techs        INTEGER     NOT NULL,"
                         "Relations    INTEGER     NOT NULL);";

    char command2[1241] = "CREATE TABLE Regions ("
                          "ID                     INTEGER     PRIMARY KEY,"
                          "Name                   TEXT        UNIQUE NOT NULL,"
                          "Owner                  INTEGER     UNIQUE NOT NULL,"
                          "Buildings              INTEGER,"
                          "Current_production     INTEGER,"
                          "Energy_production      INTEGER     NOT NULL,"
                          "Metal_production       INTEGER     NOT NULL,"
                          "Oil_production         INTEGER     NOT NULL,"
                          "Manpower_production    INTEGER     NOT NULL,"
                          "Energy_stored          INTEGER     NOT NULL,"
                          "Metal_stored           INTEGER     NOT NULL,"
                          "Oil_stored             INTEGER     NOT NULL,"
                          "Manpower_stored        INTEGER     NOT NULL,"
                          "Energy_limit           INTEGER     NOT NULL,"
                          "Metal_limit            INTEGER     NOT NULL,"
                          "Oil_limit              INTEGER     NOT NULL,"
                          "Manpower_limit         INTEGER     NOT NULL);";

    char command3[296] = "CREATE TABLE Armies ("
                         "ID            INTEGER     PRIMARY KEY,"
                         "Name          TEXT        UNIQUE  NOT NULL,"
                         "Location      INTEGER     UNIQUE  NOT NULL,"
                         "Strength      INTEGER     NOT NULL);";

    char command4[376] = "CREATE TABLE Units ("
                         "ID        INTEGER     PRIMARY KEY,"
                         "Name      TEXT        UNIQUE  NOT NULL,"
                         "Location  INTEGER     NOT NULL,"
                         "Type      INTEGER     NOT NULL,"
                         "Army      INTEGER,"
                         "Health    INTEGER     NOT NULL);";

    char command5[900] = "CREATE TABLE DiploRelations ("
                         "ID            INTEGER     PRIMARY KEY,"
                         "Sender_ID     INTEGER     NOT NULL,"
                         "Recipient_ID  INTEGER     NOT NULL,"
                         "Type          INTEGER     NOT NULL);";

    //Database objects created
    sqlite3 * db;
    sqlite3_stmt * stmt;

    //All statements are processed one by one
    //Due to data type problems I can't use a for loop
    sqlite3_open("World_at_war.sqlite", &db);

    sqlite3_prepare_v2(db, command1, sizeof(command1), &stmt, NULL);
    sqlite3_step(stmt);
    std::cout << "Countries table created" << std::endl;

    sqlite3_prepare_v2(db, command2, sizeof(command2), &stmt, NULL);
    sqlite3_step(stmt);
    std::cout << "Regions table created" << std::endl;

    sqlite3_prepare_v2(db, command3, sizeof(command3), &stmt, NULL);
    sqlite3_step(stmt);
    std::cout << "Armies table created" << std::endl;

    sqlite3_prepare_v2(db, command4, sizeof(command4), &stmt, NULL);
    sqlite3_step(stmt);
    std::cout << "Units table created" << std::endl;

    sqlite3_prepare_v2(db, command5, sizeof(command5), &stmt, NULL);
    sqlite3_step(stmt);
    std::cout << "Diplomatic relations table created" << std::endl;

    sqlite3_close(db);
}

int Controller::new_countries()
{
    /**
        Creates the default country objects for the game. Takes no arguments.
    */

    //Vector with strings to be used in a for loop.
    std::vector <std::string> country_names =
    {"Portugal", "Spain", "France", "Ireland", "United Kingdom",  "Netherlands", "Belgium", "Luxembourg",
     "Switzerland", "Italy", "Germany", "Denmark", "Norway", "Austria", "Yugoslavia", "Sweden",
     "Czechoslovakia", "Poland", "Finland", "Hungary", "Romania",  "Bulgaria", "Greece", "Latvia", "Estonia",
     "Lithuania", "Soviet Union", "Turkey"};
}