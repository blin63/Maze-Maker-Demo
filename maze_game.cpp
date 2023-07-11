//
// Created by Brendan on 2022-11-16.
//

#include "maze_game.hpp"

maze *maze_game::create_maze(maze_factory *mazeFactory) {
    //Build maze components
    maze* maze = mazeFactory->make_maze();
    wall* wall = mazeFactory->make_wall();
    room* room1 = mazeFactory->make_room();
    room* room2 = mazeFactory->make_room();
    door* door = mazeFactory->make_door(room1, room2);

    //Set roomIDs
    room1->setRoomId(0);
    room2->setRoomId(1);

    //Add walls to rooms
    room1->addWall(wall);
    room1->addWall(wall);
    room1->addWall(wall);
    room1->addWall(wall);
    room2->addWall(wall);
    room2->addWall(wall);
    room2->addWall(wall);
    room2->addWall(wall);

    //Add doors to rooms
    room1->addDoor(door);

    //Add rooms to maze
    maze->addRoom(room1);
    maze->addRoom(room2);

    return maze;
}
