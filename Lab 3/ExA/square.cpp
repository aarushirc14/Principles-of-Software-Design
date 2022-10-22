/*
 * File Name: Square.cpp
 * Assignment: Lab2 Exercise B
 * Completed by: Farica Mago and Aarushi Roy Choudhury
 * Submission Date: September 30, 2022
 */

#include "square.h"

// constructor
Square::Square(const double x, const double y, const double side_a, const char *shapeName) : Shape(Point(x, y), shapeName)
{
    this->side_a = side_a;
}

void Square::display() const
{
    cout << "Square Name: " << getName() << endl;
    origin.display();
    cout << "Side a: " << side_a << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}
