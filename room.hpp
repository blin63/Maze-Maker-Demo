//
// Created by Brendan on 2022-11-16.
//

#ifndef LAB1TEMPLATE_ROOM_HPP
#define LAB1TEMPLATE_ROOM_HPP

#include "wall.hpp"
#include <vector>
#include <string>
#include <iostream>

class door;

using namespace std;

class room {
protected:
    vector<wall*> walls;
    door* d = nullptr;
    int roomId;

public:
    virtual void addWall(wall* wall) = 0;
    virtual void addDoor(door* d) = 0;
    virtual std::string printRoomDesc() const = 0;
    virtual door* getDoor() = 0;
    virtual vector<wall*> getWalls() = 0;
    virtual ~room();
    int getRoomId();
    void setRoomId(int rID);
    friend std::ostream& operator<<(std::ostream& os, const room& r) {
        os << r.printRoomDesc() << std::endl;

        return os;
    }
};

class DRoom : public room {
public:
    void addWall(wall* wall) override;
    void addDoor(door* d) override;
    std::string printRoomDesc() const override;
    door* getDoor() override;
    vector<wall*> getWalls() override;
};

class FRoom : public room {
public:
    void addWall(wall* wall) override;
    void addDoor(door* d) override;
    std::string printRoomDesc() const override;
    door* getDoor() override;
    vector<wall*> getWalls() override;
};

#endif //LAB1TEMPLATE_ROOM_HPP
