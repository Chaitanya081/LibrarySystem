#include "book.h"
#include <fstream>
#include <iostream>
using namespace std;

void addBook() {
    ofstream file("data/books.txt", ios::app);

    int id;
    string title, author;

    cout << "Enter Book ID: ";
    cin >> id;
    cout << "Enter Title: ";
    cin >> title;
    cout << "Enter Author: ";
    cin >> author;

    file << id << " " << title << " " << author << " " << 0 << endl;
    cout << "Book Added Successfully\n";
}

void viewBooks() {
    ifstream file("data/books.txt");

    int id, issued;
    string title, author;

    cout << "\n--- Book List ---\n";
    while (file >> id >> title >> author >> issued) {
        cout << "ID: " << id
             << " | Title: " << title
             << " | Author: " << author
             << " | Status: " << (issued ? "Issued" : "Available") << endl;
    }
}
