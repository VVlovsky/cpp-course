
#ifndef JMP2_POINT_H
#define JMP2_POINT_H


class Point {
public:
    Point();

    Point(double x, double y);

    ~Point();

    double Distance(const Point &other) const;

    double GetX() const;

    double GetY() const;

    void SetX(double x);

    void SetY(double y);

private:
    double x, y;
};


#endif //JMP2_POINT_H
