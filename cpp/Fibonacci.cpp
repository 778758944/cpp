//
//  Fibonacci.cpp
//  cpp
//
//  Created by Tom Xing on 11/10/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#include "Fibonacci.hpp"
// static member function must has a declear on program text file
vector<int> Fibonacci::_elems;


void
Fibonacci::gen_elems(int pos) const {
    if (_elems.empty()) {
        _elems.push_back(1);
        _elems.push_back(1);
    }
    
    if (_elems.size() < pos) {
        int ix = (int) _elems.size();
        int n_2 = _elems[ix - 2];
        int n_1 = _elems[ix - 1];
        for(; ix < pos; ix++) {
            int elem = n_2 + n_1;
            _elems.push_back(elem);
            n_2 = n_1;
            n_1 = elem;
        }
    }
}



