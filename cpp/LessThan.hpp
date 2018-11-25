//
//  LessThan.hpp
//  cpp
//
//  Created by Tom Xing on 11/17/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#ifndef LessThan_hpp
#define LessThan_hpp

#include <iostream>

class LessThan {
public:
    LessThan(int val): _val(val) {}
    int comp_val() {return _val;}
    void comp_val(int val) {_val = val;}
    bool operator() (int val);
private:
    int _val;
};

inline bool
LessThan::operator() (int val) {return val < _val;}

#endif /* LessThan_hpp */
