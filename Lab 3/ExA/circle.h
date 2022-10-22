/*
 * File Name: circle.h
 * Assignment: Lab3 Exercise A
 * Completed by: Farica Mago and Aarushi Roy Choudhury
 * Submission Date: 10 October, 2022
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <iostream>
using namespace std;

const double PI = 3.14159265358979323846264338327950288;

// child class of Shape, represents a Circle
class Circle : virtual public Shape
{
protected:
    double radius;

public:
    // constructor + big 3
    Circle(const double x, const double y, const double radius, const char *shapeName);
    // REQUIRES: shapeName points to the first character of a c-string
    // PROMISES: initializes members of circle to the passed in values

    double distance(Circle &other) const;

    // getters/setters
    double get_radius() const { return radius; }
    // PROMISES: returns radius

    void set_radius(double radius) { this->radius = radius; }
    // PROMISES: sets radius to passed in value

    double area() const { return PI * radius * radius; }

    double perimeter() const { return 2 * PI * radius; }
    // PROMISES: returns the perimeter of the circle

    virtual void display() const;
    // PROMISES: prints the circle's name, x/y coords, radius, area and perimeter
};
#endif
