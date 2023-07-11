//
// Created by Brendan on 2022-11-16.
//

#ifndef LAB1TEMPLATE_MAZE_HPP
#define LAB1TEMPLATE_MAZE_HPP


#include "room.hpp"
#include "wall.hpp"
#include "door.hpp"
#include <vector>

using namespace std;

class maze {
protected:

    vector<room*> rooms;

public:

    virtual void addRoom(room* room) = 0;
    virtual std::string mazeDesc() const = 0;
    virtual ~maze();
    friend std::ostream& operator<<(std::ostream& os, const maze& m) {
        //Print maze description
        os << m.mazeDesc() << std::endl;

        //Print room description
        for (room* i : m.rooms) {
            os << *i;
        }

        //Print door and walls description
        for (room* i : m.rooms) {
            if (i->getDoor() != nullptr) {
                //Print the door and the walls
                os << *i->getDoor();
            }

            for (wall* j : i->getWalls()) {
                //Print the walls
                os << *j;
            }
        }

        return os;
    }

};

class DMaze : public maze {
    void addRoom(room* room) override;
    std::string mazeDesc() const override;
};

class FMaze : public maze {
    void addRoom(room* room) override;
    std::string mazeDesc() const override;
};


#endif //LAB1TEMPLATE_MAZE_HPP
