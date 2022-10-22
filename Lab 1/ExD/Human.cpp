/*
 *File Name: Point.cpp
 * Assignment: Lab 1 Exercise D
 * Completed by: Farica Mago and Aarushi Roychoudhury
 * Submission Date: Sept 18, 2022
 * ENSF 480 - Lab 2 - Exercise D
 */

#include "Human.h"
#include <iostream>
#include <string.h>

using namespace std;
Human::Human()
{
    strcpy(this->name, "");
    location.set_x(0);
    location.set_y(0);
}

Human::~Human()
{
    delete[] name;
}

Human::Human(const char *nam, double x, double y) : name(new char[strlen(nam) + 1])
{
    strcpy(this->name, nam);
    location.set_x(x);
    location.set_y(y);
}

char *Human::get_name() { return name; }

void Human::set_name(char *name)
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

Point Human::get_point() const { return location; }

void Human::display()
{
    cout << "Human Name: " << name << "\nHuman Location: "
         << location.get_x() << " ,"
         << location.get_y() << ".\n"
         << endl;
}
