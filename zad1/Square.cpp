#include "Square.h"
#include "Point.h"


Square::Square() = default;

Square::Square(Point a, Point b, Point c, Point d) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
}

Square::~Square() = default;

int Square::Circumference() {
    return static_cast<int>(2 * (a.Distance(b) + b.Distance(c)));
}

int Square::Area() {
    return static_cast<int>(a.Distance(b) * b.Distance(a));
}
