//
// Created by idate on 27/04/2024.
//

#include <vector>
#include "Bug.h"
#ifndef CA2_BOARD_H
#define CA2_BOARD_H


class Board {
public:
    Board();
    void displayAllBugs();
    void findBug(int id);
    void tap();
private:
    std::vector<Bug*> bugs;   //vector for storing pointers of all bugs
};


#endif //CA2_BOARD_H
