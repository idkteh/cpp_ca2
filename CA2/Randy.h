//
// Created by idate on 24/04/2024.
//

#ifndef CA2_RANDY_H
#define CA2_RANDY_H

#include "Bug.h"


class Randy: public Bug{
public:
    using Bug::Bug;   //using the bug constructor
    void move();
    std::string toString();
};


#endif //CA2_RANDY_H
