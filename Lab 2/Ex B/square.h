/*
* File Name: Square.h
* Assignment: Lab2 Exercise B
* Completed by: Farica Mago and Aarushi Roychoudhary
* Submission Date: September 30, 2022
*/

#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"
#include <iostream>
using namespace std;

// child class of Shape, represents a Square
// has one side defined (squares have all sides equal)
class Square : public Shape
{
protected:
    double side_a;

public:
    // constructor + big 3
    Square(const double x, const double y, const double side_a, const char *shapeName);
    // REQUIRES: shapeName points to the first character of a c-string
    // PROMISES: initializes members of square to the passed in values

    // getters/setters
    double get_side_a() const { return side_a; }
    // PROMISES: returns side_a

    void set_side_a(double side_a) { this->side_a = side_a; }
    // PROMISES: sets side_a to passed in value

    virtual double area() const { return side_a * side_a; }
    // PROMISES: returns the area of the square

    virtual double perimeter() const { return 4 * side_a; }
    // PROMISES: returns the perimeter of the square

    virtual void display() const;
    // PROMISES: prints the square's name, x/y coords, side length, area and perimeter
};
#endif
