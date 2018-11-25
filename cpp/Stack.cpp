//
//  Stack.cpp
//  cpp
//
//  Created by Tom Xing on 11/5/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#include "Stack.hpp"

//:: double colon means the scope of the class before it;
bool
Stack::pop(string &elem) {
    if (empty()) {
        return false;
    }
    
    elem = _stack.back();
    _stack.pop_back();
    return true;
}

bool
Stack::peek(string &elem) {
    if (_stack.empty()) {
        return false;
    }
    
    elem = _stack.back();
    return true;
}


bool
Stack::push(const string &elem) {
    if (full()) {
        return false;
    }
    
    _stack.push_back(elem);
    return true;
}


