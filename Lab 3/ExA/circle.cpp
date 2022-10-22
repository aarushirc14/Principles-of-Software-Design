/*
 * File Name: circle.cpp
 * Assignment: Lab3 Exercise A
 * Completed by: Farica Mago and Aarushi Roy Choudhury
 * Submission Date: 10 October, 2022
 */

#include "circle.h"

// constructor
Circle::Circle(const double x, const double y, const double radius, const char *shapeName)
    : Shape(Point(x, y), shapeName)
{
    this->radius = radius;
}

double Circle::distance(Circle &other) const
{
    return Point::distance(this->origin, other.origin);
}

void Circle::display() const
{
    cout << "Circle Name: " << getName() << endl;
    origin.display();
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}
