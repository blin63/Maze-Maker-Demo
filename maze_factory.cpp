//
// Created by Brendan on 2022-11-16.
//

#include "maze_factory.hpp"

maze *Dmaze_factory::make_maze() {
    return new DMaze();
}

wall *Dmaze_factory::make_wall() {
    return new DWall();
}

room *Dmaze_factory::make_room() {
    return new DRoom();
}

door *Dmaze_factory::make_door(room *room1, room *room2) {
    DDoor* ddoor = new DDoor();
    room1->setRoomId(0);
    room2->setRoomId(1);
    ddoor->setDoor(room1, room2);

    return ddoor;
}

maze *Fmaze_factory::make_maze() {
    return new FMaze();
}

wall *Fmaze_factory::make_wall() {
    return new FWall();
}

room *Fmaze_factory::make_room() {
    return new FRoom();
}

door *Fmaze_factory::make_door(room *room1, room *room2) {
    FDoor* fdoor = new FDoor();
    room1->setRoomId(0);
    room2->setRoomId(1);
    fdoor->setDoor(room1, room2);

    return fdoor;
}
