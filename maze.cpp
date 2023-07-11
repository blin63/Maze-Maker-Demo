//
// Created by Brendan on 2022-11-16.
//

#include "maze.hpp"

maze::~maze() {
    for (room* i : rooms) {
        delete i;
    }
}

void DMaze::addRoom(room *room) {
    rooms.push_back(room);
}

std::string DMaze::mazeDesc() const {
    return "An Orwellian dystopian maze";
}

void FMaze::addRoom(room *room) {
    rooms.push_back(room);
}

std::string FMaze::mazeDesc() const {
    return "A pretty, magical fairy maze";
}
