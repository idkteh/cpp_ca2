//
// Created by idate on 24/04/2024.
//

#ifndef CA2_HOPPER_H
#define CA2_HOPPER_H
#include "Bug.h"

class Hopper: public Bug {
    int hopLength;
public:
    Hopper(int id,int x,int y,int direction,int size, int hopLength);
    void move();
    std::string toString();
};


#endif //CA2_HOPPER_H
