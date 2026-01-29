#include "auth.h"
#include <fstream>

bool login(string username, string password, User &loggedUser) {
    ifstream file("data/users.txt");

    string u, p, r;
    while (file >> u >> p >> r) {
        if (u == username && p == password) {
            loggedUser = User(u, p, r);
            return true;
        }
    }
    return false;
}
