//
// Created by Brendan on 2022-11-16.
//

#ifndef LAB1TEMPLATE_DOOR_HPP
#define LAB1TEMPLATE_DOOR_HPP


#include <string>
#include <iostream>
class room;

using namespace std;

class door {
protected:
    room* r1;
    room* r2;
public:
    void setDoor(room* r1, room* r2);
    virtual std::string roomDesc() const = 0;
    ~door();
    friend ostream& operator<<(ostream& os, const door& d) {
        os << d.roomDesc() << std::endl;

        return os;
    }
};

class DDoor : public door {
public:
    std::string roomDesc() const override;
};

class FDoor : public door {
public:
    std::string roomDesc() const override;
};


#endif //LAB1TEMPLATE_DOOR_HPP
