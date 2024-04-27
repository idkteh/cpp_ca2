//
// Created by idate on 24/04/2024.
//

#ifndef CA2_CRAWLER_H
#define CA2_CRAWLER_H

#include "Bug.h"


class Crawler: public Bug{
public:
    using Bug::Bug;   //using the bug constructor
    void move();
    std::string toString();
};


#endif //CA2_CRAWLER_H
