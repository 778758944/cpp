//
//  Stack.hpp
//  cpp
//
//  Created by Tom Xing on 11/5/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp
#include <string>
#include <iostream>
#include <vector>
#include <set>
// class definition should be in header file
using namespace std;


class Stack {
public:
    bool push(const string &);
    bool pop(string &elem);
    bool peek(string &elem);
    bool empty();
    bool full();
    // define inside means size is an inline function
    unsigned long size() {return _stack.size();}
private:
    vector<string> _stack;
};

// define member function outside
inline bool
Stack::empty() {
    return _stack.empty();
}

inline bool
Stack::full() {
    return _stack.size() == _stack.max_size();
}

#endif /* Stack_hpp */
