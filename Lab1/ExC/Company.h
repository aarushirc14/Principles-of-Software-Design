// File Name: Company.h
// Assignment: Lab 1 Exercise C
// Author: Aarushi Roy Choudhury and Farica Mago
// Submission Date: Sept. 21, 2022

#ifndef COMPANY_H
#define COMPANY_H

#include "Employee.h"
#include "Customer.h"
#include <string>
#include <vector>
using namespace std;

class Company
{
private:
    string companyName;
    string dateEstablished;
    string companyAddress;

    vector<Employee> employees;
    vector<Customer> customers;
};

#endif