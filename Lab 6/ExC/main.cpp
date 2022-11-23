//
//  main.cpp
//  SigletonPattern
//
#include "Client_A.h"
#include "Client_B.h"
#include <iostream>
using namespace std;

int main() {

    Client_A ca;
    cout << "Created a new Client_A object called ca ..." << endl;
    
    cout << "adding two usernames, Jack and Judy, by client ca ..." << endl;
    ca.add("Jack", "apple5000");
    ca.add("Judy", "orange$1234");
    
    Client_B cb;
    cout << "Created a new Client_B object called cb ... " << endl;
    cout << "Adding two usernames called Jim and Josh, by client cb ..." << endl;
    cb.add("Jim", "brooks$2017");
    cb.add("Josh", "mypass2000");
    
    cout << "Now adding another username called Jim by client ca.\n";
    cout << "It must be avoided because a similar username already exits ..." << endl;
    ca.add("Jim", "brooks$2017");
    cout << "Another attempt to add username called Jim, but this time by client cb,\n";
    cout << "with a different password\n";
    cout << "It must be avoided again ..." << endl;
    cb.add("Jim", "br$2017");
    
    cout << "Now client cb validates existence of username Jack and his password: " << endl;
    if( User *u = cb.validate("Jack", "apple5000"))
        cout << "Found: username: " << u->username << " and the password is: " << u->password <<  endl;
    else
        cout << "Username or password NOT found" << endl;
    cout << "Now client ca validates existence of username Jack with a wrong password. " << endl;
    if( User *u = ca.validate("Jack", "apple4000"))
        cout << "Found: username is: " << u->username << " and password is: " << u->password <<  endl;
    else
        cout << "Username or password NOT found" << endl;
    
    cout << "Trying to make a new Client_A object which is a copy of client ca:" << endl;
    Client_A ca2 = ca;
    cout << "Adding a usernames called Tim by client ca2 ..." << endl;
    cb.add("Tim", "blue_sky");
    cout << "Make a new Client_A object called ca3:" << endl;
    Client_A ca3;
    cout << "Make ca3 a copy of ca2:" << endl;
    ca3 = ca2;
    cout << "Now client ca3 validates existence of username Tim and his password: " << endl;
    if( User *u = ca3.validate("Tim", "blue_sky"))
        cout << "Found: username: " << u->username << " and the password is: " << u->password <<  endl;
    else
        cout << " Tim NOT found" << endl;
#if 0
    cout << "Lets now make a couple of objects of LoginServer by main funciton:" << endl;
    LoginServer x;
    LoginServer y = x;
    x = y;
    cout << "Now LoginServer x validates existence of username Tim and his password: " << endl;
    if( User *u = y.validate("Tim", "blue_sky"))
        cout << "Found: username: " << u->username << " and the password is: " << u->password <<  endl;
    else
        cout << "Tim NOT found" << endl;
#endif
    
    return 0;
}
