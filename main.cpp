#include <iostream>
#include "user.h"
using namespace std;

int main() {
    User currentUser;
    int choice;

    cout << "1. Login\n2. Exit\n";
    cin >> choice;

    if (choice == 1) {
        string u, p;
        cout << "Username: ";
        cin >> u;
        cout << "Password: ";
        cin >> p;

        if (login(u, p, currentUser)) {
            cout << "Welcome " << currentUser.username << endl;
        } else {
            cout << "Invalid credentials\n";
        }
    }
    return 0;
}
