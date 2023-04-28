
#ifndef LOGIN_SERVER_H
#define LOGIN_SERVER_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct User {
        string username;
        string password;
};
/*  ENSF 480 Fall 2022
    Lab 6 - Exercise C
    Filename: LoginServer.h
    Author: Aarushi Roy Choudhury
    Date: 2022-11-15
 */

class LoginServer{
    private: 
        static LoginServer* instance;
        vector<User> users; 

        LoginServer():users(){
        }
        
        LoginServer(const LoginServer& src){
            instance = src.getInstance();
        }
        LoginServer& operator= (const LoginServer& rhs){
            instance = rhs.getInstance();
        }
        ~LoginServer();
    public: 
        static LoginServer *getInstance(){
            if(instance == NULL){
                instance = new LoginServer();
            }
            return instance;
        }
        void add(string name, string pass){
           
            for(int i = 0; i < users.size(); i++){
                 if(name == users[i].username) {
                cout << "Username " << name << " already exists!" << endl;
                return;
                }
            }
             User n = {name, pass};
            users.push_back(n);
            
        }

        User* validate(string name, string pass){
            for(int i = 0; i < users.size(); i++){
                if(users[i].username == name && users[i].password == pass){
                    return &users[i];
                }
            }
            return nullptr;
        }
};

#endif
