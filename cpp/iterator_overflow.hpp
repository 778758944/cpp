//
//  iterator_overflow.hpp
//  cpp
//
//  Created by Tom Xing on 11/12/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#ifndef iterator_overflow_hpp
#define iterator_overflow_hpp

#include <iostream>

class iterator_overflow {
public:
    iterator_overflow(int index, int max_size): _index(index), _max_size(max_size) {}
    int index() {return _index;}
    int max_size() {return _max_size;}
    void what_happened(std::ostream &os = std::cout) {
        os << _index << " beyond the max: " << _max_size << '\n';
    }
private:
    int _index;
    int _max_size;
};

#endif /* iterator_overflow_hpp */
