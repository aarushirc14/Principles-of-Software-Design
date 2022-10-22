// exBmain.cpp
// ENSF 480 - Lab 2 - Exercise A
// Completed by: Aarushi Roy Choudhury and Farica Mago
// Sep 2022

#include <assert.h>
#include <iostream>
#include <string.h>
#include "dictionaryList.h"

using namespace std;

DictionaryList dictionary_tests();

void test_copying();

void print(DictionaryList &dl);

void test_finding(DictionaryList &dl);

void test_operator_overloading(DictionaryList &dl);

int main()
{
    DictionaryList dl = dictionary_tests();
    test_copying();
    // Uncomment the call to test_copying when DictionaryList::copy is properly defined
    test_finding(dl);
    test_operator_overloading(dl);

    return 0;
}

DictionaryList dictionary_tests()
{

    DictionaryList dl;

    assert(dl.size() == 0);
    cout << "\nPrinting list just after its creation ...\n";
    print(dl);

    // Insert using new keys.
    dl.insert(8001, "Dilbert");
    dl.insert(8002, "Alice");
    dl.insert(8003, "Wally");
    assert(dl.size() == 3);
    cout << "\nPrinting list after inserting 3 new keys ...\n";
    print(dl);
    dl.remove(8002);
    dl.remove(8001);
    dl.insert(8004, "PointyHair");
    assert(dl.size() == 2);
    cout << "\nPrinting list after removing two keys and inserting PointyHair ...\n";
    print(dl);

    // Insert using existing key.
    dl.insert(8003, "Sam");
    assert(dl.size() == 2);
    cout << "\nPrinting list after changing data for one of the keys ...\n";
    print(dl);

    dl.insert(8001, "Allen");
    dl.insert(8002, "Peter");
    assert(dl.size() == 4);
    cout << "\nPrinting list after inserting 2 more keys ...\n";
    print(dl);

    cout << "***----Finished dictionary tests---------------------------***\n\n";
    return dl;
}

void test_copying()
{
    DictionaryList one;
    // Copy an empty list.
    DictionaryList two;
    assert(two.size() == 0);

    // Copy a list with three entries and a valid cursor.
    one.insert(319, "Randomness");
    one.insert(315, "Shocks");
    one.insert(335, "ParseErrors");
    one.go_to_first();
    one.step_fwd();

    DictionaryList three(one);
    // print(one);
    // print(three);

    assert(three.cursor_datum().isEqual("Randomness"));
    one.remove(335);

    cout << "Printing list--keys should be 315, 319\n";
    print(one);

    cout << "Printing list--keys should be 315, 319, 335\n";
    print(three);

    // Assignment operator check.
    one = two = three = three;
    one.remove(319);
    two.remove(315);

    cout << "Printing list--keys should be 315, 335\n";
    print(one);

    cout << "Printing list--keys should be 319, 335\n";
    print(two);

    cout << "Printing list--keys should be 315, 319, 335\n";
    print(three);

    cout << "***----Finished tests of copying----------------------***\n\n";
}

void print(DictionaryList &dl)
{
    if (dl.size() == 0)
        cout << "  List is EMPTY.\n";
    for (dl.go_to_first(); dl.cursor_ok(); dl.step_fwd())
    {
        cout << "  " << dl.cursor_key();
        cout << "  " << dl.cursor_datum().c_str() << '\n';
    }
}

void test_finding(DictionaryList &dl)
{

    // Pretend that a user is trying to look up names.
    cout << "\nLet's look up some names ...\n";

    dl.find(8001);
    if (dl.cursor_ok())
        cout << "  name for 8001 is: " << dl.cursor_datum().c_str() << ".\n";
    else
        cout << "  Sorry, I couldn't find 8001 in the list. \n";

    dl.find(8000);
    if (dl.cursor_ok())
        cout << "  name for 8000 is: " << dl.cursor_datum().c_str() << ".\n";
    else
        cout << "  Sorry, I couldn't find 8000 in the list. \n";

    dl.find(8002);
    if (dl.cursor_ok())
        cout << "  name for 8002 is: " << dl.cursor_datum().c_str() << ".\n";
    else
        cout << "  Sorry, I couldn't find 8002 in the list. \n";

    dl.find(8004);
    if (dl.cursor_ok())
        cout << "  name for 8004 is: " << dl.cursor_datum().c_str() << ".\n";
    else
        cout << "  Sorry, I couldn't find 8004 in the list. \n";

    cout << "***----Finished tests of finding -------------------------***\n\n";
}
#if 1
void test_operator_overloading(DictionaryList &dl)
{

    DictionaryList dl2 = dl;
    dl.go_to_first();
    dl.step_fwd();
    dl2.go_to_first();

    cout << "\nTestig a few comparison and insertion operators." << endl;

    // Needs to overload >= and << (insertion operator) in class Mystring
    if (dl.cursor_datum() >= (dl2.cursor_datum()))
        cout << endl
             << dl.cursor_datum() << " is greater than or equal " << dl2.cursor_datum();
    else
        cout << endl
             << dl2.cursor_datum() << " is greater than " << dl.cursor_datum();

    // Needs to overload <= for Mystring
    if (dl.cursor_datum() <= (dl2.cursor_datum()))
        cout << dl.cursor_datum() << " is less than or equal" << dl2.cursor_datum();
    else
        cout << endl
             << dl2.cursor_datum() << " is less than " << dl.cursor_datum();

    if (dl.cursor_datum() != (dl2.cursor_datum()))
        cout << endl
             << dl.cursor_datum() << " is not equal to " << dl2.cursor_datum();
    else
        cout << endl
             << dl2.cursor_datum() << " is equal to " << dl.cursor_datum();

    if (dl.cursor_datum() > (dl2.cursor_datum()))
        cout << endl
             << dl.cursor_datum() << " is greater than " << dl2.cursor_datum();
    else
        cout << endl
             << dl.cursor_datum() << " is not greater than " << dl2.cursor_datum();

    if (dl.cursor_datum() < (dl2.cursor_datum()))
        cout << endl
             << dl.cursor_datum() << " is less than " << dl2.cursor_datum();
    else
        cout << endl
             << dl.cursor_datum() << " is not less than " << dl2.cursor_datum();
    if (dl.cursor_datum() == (dl2.cursor_datum()))
        cout << endl
             << dl.cursor_datum() << " is equal to " << dl2.cursor_datum();
    else
        cout << endl
             << dl.cursor_datum() << " is not equal to " << dl2.cursor_datum();

    cout << endl
         << "\nUsing square bracket [] to access elements of Mystring objects. ";

    char c = dl.cursor_datum()[1];
    cout << endl
         << "The socond element of " << dl.cursor_datum() << " is: " << c;

    dl.cursor_datum()[1] = 'o';
    c = dl.cursor_datum()[1];
    cout << endl
         << "The socond element of " << dl.cursor_datum() << " is: " << c;

    cout << endl
         << "\nUsing << to display key/datum pairs in a Dictionary list: \n";
    /* The following line is expected to display the content of the linked list
     * dl2 -- key/datum pairs. It should display:
     *   8001  Allen
     *   8002  Peter
     *   8003  Sam
     *   8004  PointyHair
     */
    cout << dl2;

    cout << endl
         << "\nUsing [] to display the datum only: \n";
    /* The following line is expected to display the content of the linked list
     * dl2 -- datum. It should display:
     *   Allen
     *   Peter
     *   Sam
     *   PointyHair
     */

    for (int i = 0; i < dl2.size(); i++)
        cout << dl2[i] << endl;
    // #endif
    // #if 0
    cout << endl
         << "\nUsing [] to display sequence of charaters in a datum: \n";
    /* The following line is expected to display the characters in the first node
     * of the dictionary. It should display:
     *   A
     *   l
     *   l
     *   e
     *   n
     */
    cout << dl2[0][0] << endl;
    cout << dl2[0][1] << endl;
    cout << dl2[0][2] << endl;
    cout << dl2[0][3] << endl;
    cout << dl2[0][4] << endl;

    cout << "\n\n***----Finished tests for overloading operators ----------***\n\n";
}
#endif
