cmake_minimum_required(VERSION 3.9)
project(Europe_at_war_v2_2)

set(CMAKE_CXX_STANDARD 11)

add_executable(Europe_at_war_v2_2 main.cpp
               Building.cpp
               Building.h
               Technology.cpp
               Technology.h
               BuildingController.h
               TechnologyController.h
               TechnologyController.cpp
               BuildingController.cpp AbstractMilitaryUnit.cpp AbstractMilitaryUnit.h MilitaryUnitController.cpp MilitaryUnitController.h MilitaryUnitTypes.cpp MilitaryUnitTypes.h Army.cpp Army.h Region.cpp Region.h RegionController.cpp RegionController.h)