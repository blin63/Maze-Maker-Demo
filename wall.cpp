//
// Created by Brendan on 2022-11-16.
//

#include <iostream>
#include "wall.hpp"

std::string DWall::printWallDesc() const {
    return "This wall has surveillance cameras on it";
}

std::string FWall::printWallDesc() const {
 return "This wall has fairy wings on it";
}
