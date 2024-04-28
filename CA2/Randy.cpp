//
// Created by idate on 24/04/2024.
//
#include <stdlib.h>
#include "Randy.h"
#include <iostream>

void Randy::move(){
    //1 = North; 2 = South; 3 = East; 4 = West
    //position.first = x; position.second = y;
    direction=rand()%4 + 1;
    bool wayBlocked = isWayBlocked();
    while(wayBlocked){
        direction=rand()%4 + 1;
        wayBlocked = isWayBlocked();
    }
    switch(direction){
        case 1:     // north
            position.second--;
            break;
        case 2:     // south
            position.second++;
            break;
        case 3:     // east
            position.first++;
            break;
        case 4:     // west
            position.first--;
            break;
    }
    path.push_back(position); // adds current position to the pair
}

std::string Randy::toString(){
    return std::to_string(id)+" Randy ("+std::to_string(position.first)+", "+std::to_string(position.second)+") "+std::to_string(size)+" "+std::to_string(direction)+" "+((alive)?"alive":"dead");
}

//
// Created by idate on 28/04/2024.
//

#include "Randy.h"
