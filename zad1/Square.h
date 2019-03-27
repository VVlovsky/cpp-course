#include "Point.h"

#ifndef JMP2_SQUARE_H
#define JMP2_SQUARE_H


class Square {
public:
    Square();

    Square(Point a, Point b, Point c, Point d);

    ~Square();

    int Circumference();

    int Area();

private:
    Point a, b, c, d;
};


#endif //JMP2_SQUARE_H
