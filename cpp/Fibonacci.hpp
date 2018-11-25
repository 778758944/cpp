//
//  Fibonacci.hpp
//  cpp
//
//  Created by Tom Xing on 11/10/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#ifndef Fibonacci_hpp
#define Fibonacci_hpp

#include <iostream>
#include <vector>
#include "./Nq.hpp"

class Fibonacci : public Nq {
public:
    Fibonacci(int len = 1, int beg_pos = 1): Nq(len, beg_pos, _elems) {
        
    }
    
    void sayHi() {
        cout << "I am Fibonacci" << endl;
    }
    // Need to declare members unique to Fibnacci
    // virtual const string what_am_i() const {return "Fibonacci";}
    
protected:
    static vector<int> _elems;
    // Need to declare members unique to Fibnacci
    virtual void gen_elems(int pos) const;
};

#endif /* Fibonacci_hpp */
