//
// Created by idate on 24/04/2024.
//
#include <stdlib.h>
#include "Crawler.h"

void Crawler::move(){
    //1 = North; 2 = South; 3 = East; 4 = West
    //position.first = x; position.second = y;
    while(Bug::isWayBlocked()){
        direction=rand()%4 + 1;
    }
    switch(direction){
        case 1:
            position.second--;
            break;
        case 2:
            position.second++;
            break;
        case 3:
            position.first++;
            break;
        case 4:
            position.second--;
            break;
    }

}

std::string Crawler::toString(){
    return std::to_string(id)+" Crawler ("+std::to_string(position.first)+", "+std::to_string(position.second)+") "+std::to_string(size)+" "+std::to_string(direction)+" "+((alive)?"alive":"dead");
}