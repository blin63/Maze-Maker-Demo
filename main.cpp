//Program Created By: Brendan Lin

#include <iostream>
#include "maze_factory.hpp"
#include "maze_game.hpp"

using namespace std;

int main() {
    maze_factory* dmf = new Dmaze_factory;
    maze_factory* fmf = new Fmaze_factory;
    maze_game* mg = new maze_game;
    maze_game* mg2 = new maze_game;
    maze* dMaze;
    maze* fMaze;

    dMaze = mg->create_maze(dmf);
    fMaze = mg2->create_maze(fmf);

    cout << *dMaze << endl;
    cout << *fMaze << endl;

    delete mg;
    delete mg2;

    return 0;
}
