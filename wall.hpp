//
// Created by Brendan on 2022-11-16.
//

#ifndef LAB1TEMPLATE_WALL_HPP
#define LAB1TEMPLATE_WALL_HPP

#include <iostream>

class wall {
public:
    virtual std::string printWallDesc() const = 0;
    virtual ~wall() = default;
    friend std::ostream& operator<<(std::ostream& os, const wall& w) {
        os << w.printWallDesc() << std::endl;

        return os;
    }
};

class DWall : public wall {
public:
    std::string printWallDesc() const override;
};

class FWall : public wall {
public:
    std::string printWallDesc() const override;
};


#endif //LAB1TEMPLATE_WALL_HPP
