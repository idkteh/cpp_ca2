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

}
std::string Hopper::toString(){
    return std::to_string(id)+" Hopper ("+std::to_string(position.first)+", "+std::to_string(position.second)+") "+std::to_string(size)+" "+std::to_string(direction)+" "+((alive)?"alive":"dead") + ", " + std::to_string(hopLength);
}