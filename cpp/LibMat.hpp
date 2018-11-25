//
//  LibMat.hpp
//  cpp
//
//  Created by Tom Xing on 11/8/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#ifndef LibMat_hpp
#define LibMat_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class LibMat {
public:
    LibMat() {
        cout << "LibMat::LibMat() default constructor" << endl;
    }
    
    ~LibMat() {
        cout << "LibMat::~LibMat() defalut destructor" << endl;
    }
    // dynamic binding
    virtual void print() const {
        cout << "LibMat::print --- i am a LibMat object" << endl;
    }
};

#endif /* LibMat_hpp */
