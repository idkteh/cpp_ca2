//
// Created by idate on 16/04/2024.
//

#include "Bug.h"
using namespace std;
Bug::Bug(int id,int x, int y,int direction,int size){
    this->id = id;
    this->position.first=x;this->position.second=y;
    this->direction = direction;
    this->size = size;
    this->alive = true;
}

Bug::Bug(){
    this->id=1;
    this->position.first=0; this->position.second=0;                //pair
    this->direction=1;
    this->size=1;
    this->alive=true;
    this->path;                    //pair
}

int Bug::getId() const {
    return id;
}

void Bug::setId(int id) {
    Bug::id = id;
}

const pair<int, int> &Bug::getPosition() const {
    return position;
}

void Bug::setPosition(const pair<int, int> &position) {
    Bug::position = position;
}

int Bug::getDirection() const {
    return direction;
}

void Bug::setDirection(int direction) {
    Bug::direction = direction;
}

int Bug::getSize() const {
    return size;
}

void Bug::setSize(int size) {
    Bug::size = size;
}

bool Bug::isAlive() const {
    return alive;
}

void Bug::setAlive(bool alive) {
    Bug::alive = alive;
}

const list<pair<int, int>> &Bug::getPath() const {
    return path;
}

void Bug::setPath(const list<pair<int, int>> &path) {
    Bug::path = path;
}

bool Bug::isWayBlocked(){
    switch(direction){
        case 1:
            if(position.second==0){
                return true;
            }
            break;
        case 2:
            if(position.second==9){
                return true;
            }
            break;
        case 3:
            if(position.first==9){
                return true;
            }
            break;
        case 4:
            if(position.first==0){
                return true;
            }
            break;
    }
}

