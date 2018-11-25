//
//  Book.hpp
//  cpp
//
//  Created by Tom Xing on 11/8/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include "./LibMat.hpp"
#include <string>

class Book : public LibMat {
public:
    Book(const string &title, const string &author): _title(title), _author(author) {
        cout << "Book: Book(" << title << "," << author << ") constructor" << endl;
    }
    ~Book() {
        cout << "Book::~Book destructor" << endl;
    }
    
    virtual void print() const {
        cout << "Book: print --- I am a book\n"
        << "title = " << _title << '\n'
        << "author = " << _author << endl;
    }
    
    const string& title() const {return _title;}
    const string& author() const {return _author;}
protected:
    string _title;
    string _author;
};

#endif /* Book_hpp */
