//
// Created by idate on 16/04/2024.
//

#ifndef CA2_BUG_H
#define CA2_BUG_H
#include <utility>
#include <list>
#include <string>
using namespace std;

class Bug {
protected:

    int id;
    pair<int, int> position;
    int direction;
    int size;
    bool alive;
    list<pair<int,int>> path;
public:
    Bug();  //default
    Bug(int id,int x,int y,int direction,int size); // !default
    virtual void move() = 0;   //virtual = function that might be overriden in child class
    bool isWayBlocked();

    int getId() const;

    void setId(int id);

    const pair<int, int> &getPosition() const;

    void setPosition(const pair<int, int> &position);

    int getDirection() const;

    void setDirection(int direction);

    int getSize() const;

    void setSize(int size);

    bool isAlive() const;

    void setAlive(bool alive);

    const list<pair<int, int>> &getPath() const;

    void setPath(const list<pair<int, int>> &path);

    virtual std::string toString() = 0;
};


#endif //CA2_BUG_H
