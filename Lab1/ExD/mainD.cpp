/* 
*File Name: mainD.cpp
* Assignment: Lab 1 Exercise D
* Completed by: Farica Mago and Aarushi Roychoudhury
* Submission Date: Sept 18, 2022
* ENSF 480 - Lab 2 - Exercise D
*/

#include <iostream>
#include "Human.h"
//#include"Point.h"
using namespace std;

int main(int argc, char **argv)
{
	double x = 2000, y = 3000;
	Human h("Ken Lai", x , y); 
    h.display();
	return 0;
}