/*
* File Name: Point.h
* Assignment: Lab2 Exercise B
* Completed by: Farica Mago and Aarushi Roychoudhary
* Submission Date: September 30, 2022
*/


#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Represents a 1D point with an x and y coordinate
// Comes with functions to calculate the distance between points
// and a counter of the total number of points
class Point
{
private:
    static int pointCount; // the current number of active points
    double x, y;           // the x and y coordinates of the points
    int id;                // each point object has a unique id, starting at 1001
    friend class Shape;

public:
    // TODO: how to make pointCount start at 0?
    Point(double x, double y) : x(x), y(y)
    {
        pointCount++;
        id = pointCount + 1000;
    }
    // PROMISES: increments pointCount
    // PROMISES: sets id to 1000 + pointCount

    ~Point() { pointCount--; }
    // PROMISES: decrements the point count

    // getters and setters
    void setX(const double x) { this->x = x; }
    // PROMISES: sets x to the passed in value

    void setY(const double y) { this->y = y; }
    // PROMISES: sets y to the passed in value

    double getX() const { return x; }
    // PROMISES: returns x

    double getY() const { return y; }
    // PROMISES: returns y

    static int counter() { return pointCount; }
    // PROMISES: returns the total number of point objects in the program

    void display() const;
    // PROMISES: displays the x and y coord

    static double distance(const Point &the_point, const Point &other);
    // PROMISES: returns the distance between any 2 points (static)

    double distance(const Point &other) const;
    // PROMISES: returns the distance between this point and another
};
#endif
