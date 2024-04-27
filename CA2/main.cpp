#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Board.h"

int main() {
    srand (time(NULL)); //for random
    Board board;

    board.displayAllBugs();


    return 0;
}
