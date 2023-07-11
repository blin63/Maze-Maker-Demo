//
// Created by Brendan on 2022-11-16.
//

#include "door.hpp"
#include "room.hpp"

void door::setDoor(room *r1, room *r2) {
    this->r1 = r1;
    this->r2 = r2;
}

door::~door() {

    delete r1;
    delete r2;
}

std::string DDoor::roomDesc() const {
    return "This door has a pipe for a handle.\nThis door connects dystopian Room " +
        std::to_string(r1->getRoomId()) + " and dystopian Room " + std::to_string(r2->getRoomId());
}

std::string FDoor::roomDesc() const {
    return "This door has a fairy wing for a handle.\nThis door connects fairy Room " +
        std::to_string(r1->getRoomId()) + " and fairy Room " + std::to_string(r2->getRoomId());
}
