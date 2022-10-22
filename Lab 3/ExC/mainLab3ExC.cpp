
/*
 * File Name: mainLab3ExC.cpp
 * Assignment: Lab3 Exercise C
 * Completed by: Farica Mago and Aarushi Roy Choudhury
 * Submission Date: 10 October, 2022
 */

#include <assert.h>
#include <iostream>
#include "lookupTable.h"
#include "customer.h"
#include <cstring>
using namespace std;

template <class K, class D>
void print(LookupTable<K, D> &lt);

template <class K, class D>
void try_to_find(LookupTable<K, D> &lt, K key);

void test_Customer();
// Uncomment the following function calls when ready to test template class LookupTable
void test_String();
void test_integer();

int main()
{

  // create and test a lookup table with an integer key value and Customer datum
  test_Customer();

  // Uncomment the following function calls when ready to test template class LookupTable
  // create and test a a lookup table of type <int, String>
  test_String();

  // Uncomment the following function calls when ready to test template class LookupTable
  // create and test a a lookup table of type <int, int>
  test_integer();

  cout << "\n\nProgram terminated successfully.\n\n";

  return 0;
}

template <class K, class D>
void print(LookupTable<K, D> &lt)
{
  if (lt.size() == 0)
    cout << "  Table is EMPTY.\n";
  for (lt.go_to_first(); lt.cursor_ok(); lt.step_fwd())
  {
    cout << lt << endl;
  }
}

template <class K, class D>
void try_to_find(LookupTable<K, D> &lt, K key)
{
  lt.find(key);
  if (lt.cursor_ok())
    cout << "\nFound key:" << lt;
  else
    cout << "\nSorry, I couldn't find key: " << key << " in the table.\n";
}

void test_Customer()
// creating a lookup table for customer objects.
{
  cout << "\nCreating and testing Customers Lookup Table <not template>-...\n";
  LookupTable<int, Customer> lt;

  // Insert using new keys.
  Customer a("Joe", "Morrison", "11 St. Calgary.", "(403)-1111-123333");
  Customer b("Jack", "Lewis", "12 St. Calgary.", "(403)-1111-123334");
  Customer c("Tim", "Hardy", "13 St. Calgary.", "(403)-1111-123335");
  lt.insert(Pair(8002, a));
  lt.insert(Pair(8004, c));
  lt.insert(Pair(8001, b));

  assert(lt.size() == 3);
  lt.remove(8004);
  assert(lt.size() == 2);
  cout << "\nPrinting table after inserting 3 new keys and 1 removal...\n";
  print(lt);

  // Pretend that a user is trying to look up customers info.

  cout << "\nLet's look up some names ...\n";
  try_to_find(lt, 8001);
  try_to_find(lt, 8000);

  // test Iterator
  cout << "\nTesing and using  iterator ...\n";
  LookupTable<int, Customer>::Iterator it = lt.begin();
  cout << "\nThe first node contains: " << *it << endl;

  while (!it)
  {
    cout << ++it << endl;
  }

  // test copying
  lt.go_to_first();
  lt.step_fwd();
  LookupTable clt(lt);
  assert(strcmp(clt.cursor_datum().getFname(), "Joe") == 0);

  cout << "\nTest copying: keys should be 8001, and 8002\n";
  print(clt);
  lt.remove(8002);

  // Assignment operator check.
  clt = lt;

  cout << "\nTest assignment operator: key should be 8001\n";
  print(clt);

  // Wipe out the entries in the table.
  lt.make_empty();
  cout << "\nPrinting table for the last time: Table should be empty...\n";
  print(lt);

  cout << "***----Finished tests on Customers Lookup Table <not template>-----***\n";
  cout << "PRESS RETURN TO CONTINUE.";
  cin.get();
}

// Uncomment and modify the following funciton when ready to test LookupTable<int,Mystring>

void test_String()

// creating lookuptable for Mystring objects
{
  cout << "\nCreating and testing LookupTable <int, Mystring> .....\n";
  LookupTable<int, Mystring> lt;

  // Insert using new keys.

  Mystring a("I am an ENEL-409 student.");
  Mystring b("C++ is a powerful language for engineers but it's not easy.");
  Mystring c("Winter 2004");

  lt.insert(Pair<int, Mystring>(8002, a));
  lt.insert(Pair<int, Mystring>(8001, b));
  lt.insert(Pair<int, Mystring>(8004, c));

  // assert(lt.size() == 3);
  // lt.remove(8004);
  // assert(lt.size() == 2);
  cout << "\nPrinting table after inserting 3 new keys and  and 1 removal...\n";
  print(lt);

  // Pretend that a user is trying to look up customers info.

  cout << "\nLet's look up some names ...\n";
  try_to_find(lt, 8001);
  try_to_find(lt, 8000);
  // test Iterator
  LookupTable<int, Mystring>::Iterator it = lt.begin();
  cout << "\nThe first node contains: " << *it << endl;

  while (!it)
  {
    cout << ++it << endl;
  }

  // test copying
  lt.go_to_first();
  lt.step_fwd();
  LookupTable clt(lt);
  assert(strcmp(clt.cursor_datum().c_str(), "I am an ENEL-409 student.") == 0);

  cout << "\nTest copying: keys should be 8001, and 8002\n";
  print(clt);
  lt.remove(8002);

  // Assignment operator check.
  clt = lt;

  cout << "\nTest assignment operator: key should be 8001\n";
  print(clt);

  // Wipe out the entries in the table.
  lt.make_empty();
  cout << "\nPrinting table for the last time: Table should be empty ...\n";
  print(lt);

  cout << "***----Finished Lab 4 tests on <int> <Mystring>-----***\n";
  cout << "PRESS RETURN TO CONTINUE.";
  cin.get();
}

// Uncomment and modify the following funciton when ready to test LookupTable<int,int>

void test_integer()

// creating look table of integers

{
  cout << "\nCreating and testing LookupTable <int, int> .....\n";
  LookupTable<int, int> lt;

  // Insert using new keys.
  lt.insert(Pair<int, int>(8002, 9999));
  lt.insert(Pair<int, int>(8001, 8888));
  lt.insert(Pair<int, int>(8004, 8888));
  assert(lt.size() == 3);
  lt.remove(8004);
  assert(lt.size() == 2);
  cout << "\nPrinting table after inserting 3 new keys and  and 1 removal...\n";
  print(lt);

  // Pretend that a user is trying to look up customers info.

  cout << "\nLet's look up some names ...\n";
  try_to_find(lt, 8001);
  try_to_find(lt, 8000);

  // test Iterator
  LookupTable<int, int>::Iterator it = lt.begin();

  while (!it)
  {
    cout << ++it << endl;
  }

  // test copying
  lt.go_to_first();
  lt.step_fwd();
  LookupTable clt(lt);
  assert(clt.cursor_datum() == 9999);

  cout << "\nTest copying: keys should be 8001, and 8002\n";
  print(clt);
  lt.remove(8002);

  // Assignment operator check.
  clt = lt;

  cout << "\nTest assignment operator: key should be 8001\n";
  print(clt);

  // Wipe out the entries in the table.
  lt.make_empty();
  cout << "\nPrinting table for the last time: Table should be empty ...\n";
  print(lt);

  cout << "***----Finished Lab 4 tests on <int> <int>-----***\n";
}
