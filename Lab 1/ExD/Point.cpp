/* 
*File Name: Point.cpp
* Assignment: Lab 1 Exercise D
* Completed by: Farica Mago and Aarushi Roychoudhury
* Submission Date: Sept 18, 2022
* ENSF 480 - Lab 2 - Exercise D
*/

#include "Point.h"
#include<iostream>

using namespace std;

Point::Point()
{
    x = 0;
    y = 0;

}

Point::Point(double a, double b)
{
    x = a;
    y = b;

}

double Point::get_x()const
{
    return x;
}  

double Point::get_y()const
{
    return y;
}    

void Point::set_x(double a)
{
    x = a;
}

void Point::set_y(double a)
{
    y = a;
}