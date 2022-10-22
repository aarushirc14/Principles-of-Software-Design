/*
 * File Name: curveCut.h
 * Assignment: Lab3 Exercise A
 * Completed by: Farica Mago and Aarushi Roy Choudhury
 * Submission Date: 10 October, 2022
 */

#ifndef CURVECUT_H
#define CURVECUT_H

#include "rectangle.h"
#include "circle.h"
#include <iostream>
using namespace std;

// child class of Rectangle and Circle, represents a CurveCut
class CurveCut : public Rectangle, public Circle
{
protected:
    char *shapeName;

public:
    // constructor + big 3
    CurveCut(const double x, const double y, const double side_a, const double side_b, const double radius, const char *shapeName);
    // REQUIRES: shapeName points to the first character of a c-string
    // PROMISES: initializes members of curvecut to the passed in values

    char *getName();

    double distance(Circle &cir);

    double area() const { return Rectangle::area() - Circle::area() / 4; }

    double perimeter() const { return Rectangle::perimeter() - 2 * radius + Circle::perimeter() / 4; }
    // PROMISES: returns the perimeter of the circle

    void display() const;
    // PROMISES: prints the circle's name, x/y coords, radius, area and perimeter
};
#endif
