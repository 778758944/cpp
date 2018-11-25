//
//  Triangular.cpp
//  cpp
//
//  Created by Tom Xing on 11/5/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#include "Triangular.hpp"
#include <algorithm>

Triangular::Triangular(int length, int pos): _name("hello") {
    cout << "initial" << endl;
    _length = length > 0 ? length : 1;
    _beg_pos = pos > 0 ? pos : 1;
    for (int i = 0; i < length; ++i) {
        _elem.push_back(i);
    }
}

const vector<int> &
Triangular::getElem() const {
    cout << "const called" << endl;
    return _elem;
}


vector<int> &
Triangular::getElem() {
    cout << "non-const called" << endl;
    return _elem;
}

Triangular &
Triangular::copy(Triangular &rhs) {
    _length = rhs._length;
    _beg_pos = rhs._beg_pos;
    _next = rhs._next;
    
    return * this;
}

// static data member must has a definition in program text file
vector<int> Triangular::_elem;

bool
Triangular::is_elem(const int &num) {
    if (_elem.empty()) {
        return false;
    }
    
    vector<int>::iterator pos;
    pos = find(_elem.begin(), _elem.end(), num);
    
    if (pos == _elem.end()) return false;
    
    return true;
}
