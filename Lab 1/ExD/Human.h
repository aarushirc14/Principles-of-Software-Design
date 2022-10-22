/*
 *File Name: Human.h
 * Assignment: Lab 1 Exercise D
 * Completed by: Farica Mago and Aarushi Roychoudhury
 * Submission Date: Sept 18, 2022
 * ENSF 480 - Lab 2 - Exercise D
 */
using namespace std;
#include <iostream>
#include "Point.h"
class Human
{

public:
   Human();
   // Promises: default constructor

   ~Human();

   Human(const char *nam = "", double x = 0, double y = 0);
   // Promises: Creats an object of class Juman with
   //           specific parameters

   char *get_name();
   // Promises: retuens *name pointer

   void set_name(char *name);
   // Promises: sets the name of the human

   Point get_point() const;
   // Promises: returns the object of class Point

   virtual void display();
   // Promises: displays the formatted output

protected:
   Point location; // Location of an object of Human on a Cartisian Plain
   char *name;     // Human's name
};