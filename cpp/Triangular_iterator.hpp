//
//  Triangular_iterator.hpp
//  cpp
//
//  Created by Tom Xing on 11/6/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#ifndef Triangular_iterator_hpp
#define Triangular_iterator_hpp

#include <stdio.h>
class Triangular_iterator {
public:
    Triangular_iterator(int index): _index(index - 1){};
    // overload operator
    bool operator==(const Triangular_iterator &) const;
    bool operator!=(const Triangular_iterator &) const;
    // derefrence
    int operator*() const;
    // prefix
    int& operator++();
    // postfix
    int operator++(int);
    
    
private:
    void check_intergrity() const;
    int _index;
};

#endif /* Triangular_iterator_hpp */
