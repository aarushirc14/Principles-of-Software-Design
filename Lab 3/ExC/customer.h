/*
 * File Name: customer.h
 * Assignment: Lab3 Exercise A
 * Completed by: Farica Mago and Aarushi Roy Choudhury
 * Submission Date: 10 October, 2022
 */
#ifndef CUSTOMER
#define CUSTOMER
#include <iostream>

#include "mystring2.h"

using namespace std;

class Customer
{
  friend ostream &operator<<(ostream &, const Customer &c);

public:
  Customer(const Mystring &fn, const Mystring &ln, const Mystring &ad, const Mystring &ph);
  const char *getFname() const;
  const char *getLname() const;
  const char *getAddress() const;
  const char *getPhone() const;
  void setFname(const char *s);
  void setLname(const char *s);
  void setAddress(const char *s);
  void setPhone(const char *s);

private:
  Mystring fname;
  Mystring lname;
  Mystring address;
  Mystring phone;
};

#endif
