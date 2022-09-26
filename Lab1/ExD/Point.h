/*
 *File Name: Point.h
 * Assignment: Lab 1 Exercise D
 * Completed by: Farica Mago and Aarushi Roychoudhury
 * Submission Date: Sept 18, 2022
 * ENSF 480 - Lab 2 - Exercise D
 */
using namespace std;
#include <iostream>
class Point
{
private:
   friend class Human;

   double x; // x coordinate of a location on Cartisian Plain
   double y; // y coordinate of a location on Cartisian Plain

   Point();                   // PROMISES: assigns the value of 0 to x and y as default.
   Point(double a, double b); // PROMISES: assigns the value of a to x and y to b.
   void set_x(double a);      // PROMISES: Sets the value of a to x.
   void set_y(double a);      // PROMISES: Sets the value of a to y.

public:
   double get_x() const;
   // PROMISES: Returns the value of x coordinate.

   double get_y() const;
   // PROMISES: Returns the value of y coordinate.
};