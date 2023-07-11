//
// Created by Brendan on 2022-11-16.
//

#ifndef LAB1TEMPLATE_MAZE_FACTORY_HPP
#define LAB1TEMPLATE_MAZE_FACTORY_HPP


#include "maze.hpp"
#include "wall.hpp"
#include "room.hpp"
#include "door.hpp"

class maze_factory {
public:
    virtual maze* make_maze()=0;
    virtual wall* make_wall()=0;
    virtual room* make_room()=0;
    virtual door* make_door(room* room1, room* room2)=0;
};

class Dmaze_factory : public maze_factory {
public:
    maze* make_maze() override;
    wall* make_wall() override;
    room* make_room() override;
    door* make_door(room* room1, room* room2) override;
};

class Fmaze_factory : public maze_factory {
public:
    maze* make_maze() override;
    wall* make_wall() override;
    room* make_room() override;
    door* make_door(room* room1, room* room2) override;
};


#endif //LAB1TEMPLATE_MAZE_FACTORY_HPP
