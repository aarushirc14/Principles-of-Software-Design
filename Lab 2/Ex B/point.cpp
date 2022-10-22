/*
* File Name: Point.cpp
* Assignment: Lab2 Exercise B
* Completed by: Farica Mago and Aarushi Roychoudhary
* Submission Date: September 30, 2022
*/


#include "point.h"

int Point::pointCount = 0; // initializes the static point count

void Point::display() const
{
    cout << fixed << "X-coordinate: " << setw(8) << setprecision(2) << x << endl;
    cout << fixed << "Y-coordinate: " << setw(8) << setprecision(2) << y << endl;
}

double Point::distance(const Point &the_point, const Point &other)
{
    double dx = the_point.getX() - other.getX();
    double dy = the_point.getY() - other.getY();

    return sqrt(dx * dx + dy * dy);
}

double Point::distance(const Point &other) const
{
    return distance(*this, other);
}
