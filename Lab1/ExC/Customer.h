// File Name: Customer.h
// Assignment: Lab 1 Exercise C
// Author: Aarushi Roy Choudhury and Farica Mago
// Submission Date: Sept. 21, 2022

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer
{
private:
    friend class Company;
    friend class Employee;
    string customerName;
    string customerPhone;
    string customerAddress;
};

#endif