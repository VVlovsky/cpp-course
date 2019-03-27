#include "Point.h"
#include <cmath>

Point::Point() = default;


Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}


Point::~Point() = default;


double Point::Distance(const Point &other) const {
    return sqrt((this->x - other.x) * (this->x - other.x) + (this->y - other.y) * (this->y - other.y));
}


double Point::GetX() const {
    return this->x;
}


double Point::GetY() const {
    return this->y;
}


void Point::SetX(double x) {
    this->x = x;
}


void Point::SetY(double y) {
    this->y = y;
}


