/*
 * File Name: curveCut.cpp
 * Assignment: Lab3 Exercise A
 * Completed by: Farica Mago and Aarushi Roy Choudhury
 * Submission Date: October 10, 2022
 */

#include "curveCut.h"
#include <stdlib.h>
#include <string.h>

// constructor
CurveCut::CurveCut(const double x, const double y, const double side_a, const double side_b, const double radius, const char *shapeName)
    : Rectangle(x, y, side_a, side_b, shapeName), Circle(x, y, radius, shapeName), Shape(Point(x, y), shapeName)
{
    strcpy(this->shapeName, shapeName);
    if ((Circle::get_radius() > Rectangle::get_side_a()) || (Circle::get_radius() > Rectangle::get_side_b()))
    {
        cout << "Error: The radius of the circle must be always less than or equal to the smaller width and length. Terminating program.";
        exit(0);
    }
}

char *CurveCut::getName()
{
    return shapeName;
}

double CurveCut::distance(Circle &cir)
{
    return Circle::distance(cir);
}

void CurveCut::display() const
{
    cout << "CurveCut Name: " << shapeName << endl;
    Rectangle::origin.display();
    cout << "Width: " << Rectangle::get_side_a() << endl;
    cout << "Length: " << Rectangle::get_side_b() << endl;
    cout << "Radius of the cut. " << Circle::get_radius() << endl;
}
