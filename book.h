// book.h
#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool issued;

    Book() {}
    Book(int i, string t, string a, bool is) {
        id = i;
        title = t;
        author = a;
        issued = is;
    }
};

#endif
