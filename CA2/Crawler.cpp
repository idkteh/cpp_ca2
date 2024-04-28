//
// Created by idate on 24/04/2024.
//
#include <stdlib.h>
#include "Crawler.h"
#include <iostream>

void Crawler::move(){
    //1 = North; 2 = South; 3 = East; 4 = West
    //position.first = x; position.second = y;
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

std::string Crawler::toString(){
    return std::to_string(id)+" Crawler ("+std::to_string(position.first)+", "+std::to_string(position.second)+") "+std::to_string(size)+" "+std::to_string(direction)+" "+((alive)?"alive":"dead");
}

