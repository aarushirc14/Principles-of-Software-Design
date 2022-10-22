/*
 * File Name: Rectangle.cpp
 * Assignment: Lab2 Exercise B
 * Completed by: Farica Mago and Aarushi Roy Choudhury
 * Submission Date: September 30, 2022
 */

#include "rectangle.h"

// constructor
Rectangle::Rectangle(const double x, const double y, const double side_a, const double side_b,
                     const char *shapeName) : Square(x, y, side_a, shapeName), Shape(Point(x, y), shapeName)
{
    this->side_b = side_b;
}

void Rectangle::display() const
{
    cout << "Rectangle Name: " << getName() << endl;
    origin.display();
    cout << "Side a: " << side_a << endl;
    cout << "Side b: " << side_b << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}
