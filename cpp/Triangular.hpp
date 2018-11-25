//
//  Triangular.hpp
//  cpp
//
//  Created by Tom Xing on 11/5/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#ifndef Triangular_hpp
#define Triangular_hpp

#include <iostream>
#include <string>
#include <vector>
#include "./Triangular_iterator.hpp"

using namespace std;

class Triangular {
    // firend make Triangular_iterator access private of the Triangular
    friend class Triangular_iterator;
public:
    /*
    Triangular() {
        // provide default 
        cout << "initial with no param" << endl;
    };
    Triangular(int length) {
        cout << "initial with lenght: " << length << endl;
        _length = length;
    };
    Triangular(int length, int pos) {
        cout << "initial with length: " << length << " and pos: " << pos << endl;
        _beg_pos = pos;
        _length = length;
        
    };
     */
    
    typedef Triangular_iterator iterator;
    
    Triangular(int length = 1, int pos = 1);
    // mark member as an const function
    int getLength() const {
        return _length;
    };
    
    string getName() {
        return _name;
    }
    
    void next_reset() const {
        _next = 0;
    }
    
    // iterator
    const Triangular_iterator begin() const {
        return Triangular_iterator(_beg_pos);
    }
    
    const Triangular_iterator end() const {
        return Triangular_iterator(_beg_pos + _length);
    }
    
    // const member function must return const refrence
    const vector<int>& getElem() const;
    
    vector<int>& getElem();
    
    Triangular& copy(Triangular &rhs);
    // static member function
    static bool is_elem(const int&);
//    static vector<int> _elem;
//    static const int _max_elems = 100;
    
private:
    // mutable means the value changed will not impact the const-ness of the object
    int _length;
    int _beg_pos;
    mutable int _next;
    string _name;
    static vector<int> _elem;
    static const int _max_elems = 100;
};

#endif /* Triangular_hpp */
