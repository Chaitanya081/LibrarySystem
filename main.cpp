#include <iostream>
#include "auth.h"
using namespace std;

// Function declarations
void adminMenu();
void userMenu();

int main() {
    User currentUser;
    string username, password;

    cout << "==== Library Management System ====\n";
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (login(username, password, currentUser)) {
        cout << "\nLogin Successful!\n";

        if (currentUser.role == "admin") {
            adminMenu();
        } else {
            userMenu();
        }
    } else {
        cout << "\nInvalid Login Credentials\n";
    }

    return 0;
}

void adminMenu() {
    int choice;
    do {
        cout << "\n--- Admin Menu ---\n";
        cout << "1. Add Book\n";
        cout << "2. View Books\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addBook();
            break;
        case 2:
            viewBooks();
            break;
        }
    } while (choice != 3);
}

void userMenu() {
    int choice;
    do {
        cout << "\n--- User Menu ---\n";
        cout << "1. View Books\n";
        cout << "2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            viewBooks();
        }
    } while (choice != 2);
}
