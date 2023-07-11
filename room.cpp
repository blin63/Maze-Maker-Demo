//
// Created by Brendan on 2022-11-16.
//

#include "room.hpp"
#include "door.hpp"
#include <string>

room::~room() {
    for (wall* i : walls) {
        delete i;
    }

    delete d;
}

int room::getRoomId() {
    return roomId;
}

void room::setRoomId(int rID) {
    roomId = rID;
}

void DRoom::addWall(wall *wall) {
    walls.push_back(wall);
}

void DRoom::addDoor(door *d) {
    this->d = d;
}

std::string DRoom::printRoomDesc() const {
    return "Dystopian Room " + std::to_string(roomId) + ": This room is run down and cracked";
}

door *DRoom::getDoor() {
    return d;
}

vector<wall *> DRoom::getWalls() {
    return walls;
}

void FRoom::addWall(wall *wall) {
    walls.push_back(wall);
}

void FRoom::addDoor(door *d) {
    this->d = d;
}

std::string FRoom::printRoomDesc() const {
    return "fairy Room " + std::to_string(roomId) + ": This room has fairies in it";
}

door *FRoom::getDoor() {
    return d;
}

vector<wall *> FRoom::getWalls() {
    return walls;
}
