cmake_minimum_required(VERSION 3.7)
project(World_at_war)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}  "${CMAKE_CURRENT_SOURCE_DIR}/cmake}")

set(SOURCE_FILES
        CMakeLists.txt
        Controller.h
        Countries.h
        DiploRelations.h
        main.cpp
        MilitaryObjects.h
        Regions.h
        Controller.cpp
        sqlite3.c
        Buildings.h
        Technologies.h
        Buildings.cpp
        Technologies.cpp)

add_executable(World_at_war ${SOURCE_FILES})

find_package(sqlite3)
if (SQLITE3_FOUND)
    include_directories(${SQLITE3_INCLUDE_DIRS})
    target_link_libraries(World_at_war  ${SQLITE3_LIBRARIES})
endif(SQLITE3_FOUND)