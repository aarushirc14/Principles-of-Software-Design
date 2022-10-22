// File Name : Employee.h
// Assignment: Lab 1 Exercise C
// Author: Aarushi Roy Choudhury and Farica Mago
// Submission Date: Sept. 21, 2022

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
    enum State
    {
        ACTIVE,
        SUSPENDED,
        RETIRED,
        FIRED
    };

private:
    friend class Company;
    string employeeName;
    string dob;
    string employeeAddress;
    State currentState;
};

#endif