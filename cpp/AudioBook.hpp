//
//  AudioBook.hpp
//  cpp
//
//  Created by Tom Xing on 11/8/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#ifndef AudioBook_hpp
#define AudioBook_hpp

#include <stdio.h>
#include "./Book.hpp"
class AudioBook : public Book{
public:
    AudioBook(const string &title, const string &author, const string &narrator): Book(title, author), _narrator(narrator) {
        cout << "AudioBook:AudioBook(" << title << author << narrator << ") constructor" <<endl;
    }
    
    ~AudioBook() {
        cout << "AudioBook::~AudioBook destructor" << endl;
    }
    
    virtual void print() const {
        cout << "AudioBook::print --- I am an AudioBook\n"
        << "My title is:" << _title << '\n'
        << "My author is:" << _author << '\n'
        << "my narrator is:" << _narrator << endl;
    }
    
    const string& narrator() const {
        return _narrator;
    }
protected:
    string _narrator;
};

#endif /* AudioBook_hpp */
