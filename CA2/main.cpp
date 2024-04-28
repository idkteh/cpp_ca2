#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Board.h"

int main() {
    srand (time(NULL)); //for random
    Board board;

    board.displayAllBugs();

//    int id;
//    cout<< "Type id of a bug you want to look up: " << endl;
//    cin>>id;
//    board.findBug(id);
    cout<< " "<<endl;
    board.tap();
    board.displayAllBugs();


    return 0;
}
