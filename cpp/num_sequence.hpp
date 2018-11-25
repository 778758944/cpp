//
//  num_sequence.hpp
//  cpp
//
//  Created by Tom Xing on 11/8/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#ifndef num_sequence_hpp
#define num_sequence_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

class num_sequence {
public:
//    typedef int (num_sequence::*PtrType)();
    int getNum1();
    int getNum2();
    void setFn(int i) {
        if (i == 1) {
            // member pointer assign
            _ptm = &num_sequence::getNum1;
        } else {
            _ptm = &num_sequence::getNum2;
        }
    }
    
    void printNum() {
        // member pointer call
        int a = (this->*_ptm)();
        cout << a << endl;
    }
    int (num_sequence::*_ptm)();
private:
    static vector<vector<int> > seq;
};

#endif /* num_sequence_hpp */
