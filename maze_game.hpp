//
// Created by Brendan on 2022-11-16.
//

#ifndef LAB1TEMPLATE_MAZE_GAME_HPP
#define LAB1TEMPLATE_MAZE_GAME_HPP


#include "maze_factory.hpp"
#include "maze.hpp"

class maze_game {
public:
    maze* create_maze(maze_factory* mazeFactory);
};


#endif //LAB1TEMPLATE_MAZE_GAME_HPP
