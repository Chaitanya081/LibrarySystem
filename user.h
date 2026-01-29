#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
public:
    string username;
    string password;
    string role; // admin or user

    User() {}

    User(string u, string p, string r) {
        username = u;
        password = p;
        role = r;
    }
};

#endif
