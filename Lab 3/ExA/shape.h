/*
 * File Name: Shape.h
 * Assignment: Lab2 Exercise B
 * Completed by: Farica Mago and Aarushi Roy Choudhury
 * Submission Date: September 30, 2022
 */

#ifndef SHAPE_H
#define SHAPE_H

#include <string.h>
#include "point.h"
using namespace std;

// represents a Shape and acts as the base class for Square/Rectangle
// has an origin point and a name and functions related to the shape
class Shape
{
protected:
    Point origin;
    char *shapeName; // dynamically allocated by the constructor

public:
    // constructor + big 3
    Shape(const Point origin, const char *shapeName); // constructor
    // REQUIRES: shapeName points to the first character of a c-string
    // PROMISES: initializes members of shape to the passed in values

    ~Shape() { delete[] shapeName; }
    // PROMISES: frees shapeName

    Shape &operator=(const Shape &s); // assignment operator
    // REQUIRES: s is a reference to a shape object
    // PROMISES: make this object a copy of s, freeing memory as necessary, freeing memory as necessary

    Shape(const Shape &s); // copy constructor
    // REQUIRES: s is a reference to a shape object
    // PROMISES: construct a copy of s, allocating memory as necessary

    const Point &getOrigin() const { return origin; }
    // PROMISES: returns an immutable reference to the origin of the shape

    char *getName() const { return shapeName; }
    // PROMISES: returns a pointer to the shapeName

    virtual void display() const;
    // PROMISES: displays the shape name and origin coordinates

    virtual double distance(Shape &other) const;
    // PROMISES: returns the distance between this shape and another

    static double distance(Shape &the_shape, Shape &other);
    // PROMISES: returns the distance between any 2 shapes

    void move(double dx, double dy);
    // PROMISES: Sets shape's origin to the passed in coordinates

    virtual double area() const;

    virtual double perimeter() const;
};
#endif
