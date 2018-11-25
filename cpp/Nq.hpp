//
//  Nq.hpp
//  cpp
//
//  Created by Tom Xing on 11/8/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#ifndef Nq_hpp
#define Nq_hpp

#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;
class Nq {
public:
    // a class that defined a virtual function must have a virtual destuctor
    // for not invorke Nq destructor
    ~Nq() {
        // do nothing
    }
    const char* what_am_i() const {return typeid(*this).name();}
    // static member function
    static int max_elems() {return _max_elems;}
    // member function
    int elem(int pos) const;
    ostream& print(ostream &os = cout) const;
    int length() {return _length;}
    int beg_pos() {return _beg_pos;}
//     ostream& operator<<(ostream &os, const Nq &ns);
    
protected:
    const static int _max_elems = 1024;
    //virtual function equal to 0 means this class can not be instanced
    virtual void gen_elems(int pos) const = 0;
    bool check_integrity(int pos, int size) const;
    int _length;
    int _beg_pos;
    vector<int> &_relems;
    Nq(int length, int beg_pos, vector<int> &p): _length(length), _beg_pos(beg_pos), _relems(p) {
        //
    }
    
};

#endif /* Nq_hpp */
