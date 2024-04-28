//
// Created by idate on 24/04/2024.
//

#include "Hopper.h"

Hopper::Hopper(int id,int x, int y,int direction,int size,int hopLength) {
    this->id = id;
    this->position.first=x;this->position.second=y;
    this->direction = direction;
    this->size = size;
    this->alive = true;
    this->hopLength = hopLength;
}

void Hopper::move(){

    bool wayBlocked = isWayBlocked();
    while(wayBlocked){
        direction=rand()%4 + 1;
        wayBlocked = isWayBlocked();
    }
    switch(direction){
        case 1:     //north
            position.second-=hopLength;
            if(position.second<0){
                position.second=0;
            }
            break;
        case 2:     //south
            position.second+=hopLength;
            if(position.second>9){
                position.second=9;
            }
            break;
        case 3:     //east
            position.first+=hopLength;
            if(position.first>9){
                position.first=9;
            }
            break;
        case 4:     //west
            position.first-=hopLength;
            if(position.first<0){
                position.first=0;
            }
            break;
    }
    path.push_back(position); // adds current position to the pair

}


std::string Hopper::toString(){
    return std::to_string(id)+" Hopper ("+std::to_string(position.first)+", "+std::to_string(position.second)+") "+std::to_string(size)+" "+std::to_string(direction)+" "+((alive)?"alive":"dead") + ", " + std::to_string(hopLength);
}