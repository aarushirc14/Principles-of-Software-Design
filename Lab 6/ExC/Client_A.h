
/*  ENSF 480 Fall 2022
    Lab 6 - Exercise C
    Filename: Client_A.h
    Author: Aarushi Roy Choudhury
    Date: 2022-11-15
 */
#include "LoginServer.h"
using namespace std;

class Client_A{
    private:
        LoginServer *instance;
    public:
        Client_A(){
            instance = LoginServer::getInstance();
        }
        void add(string username, string password){
            instance->add(username, password);
        }
        User* validate(string username, string password){
            return instance->validate(username, password);
        }
        Client_A& operator =(const Client_A& rhs){
            if(this == &rhs) return *this;
            instance = LoginServer::getInstance();
        }   
};
