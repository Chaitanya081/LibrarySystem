#ifndef AUTH_H
#define AUTH_H

#include "user.h"
#include <string>
using namespace std;

bool login(string username, string password, User &loggedUser);

#endif
