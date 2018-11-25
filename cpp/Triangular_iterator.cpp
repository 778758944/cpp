//
//  Triangular_iterator.cpp
//  cpp
//
//  Created by Tom Xing on 11/6/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#include "./Triangular_iterator.hpp"
#include "./Triangular.hpp"

inline bool Triangular_iterator::operator==(const Triangular_iterator &rhs) const {
    return _index == rhs._index;
}

inline bool
Triangular_iterator::operator!=(const Triangular_iterator &rhs) const {
    // this will call operator ==
    return !(*this == rhs);
}

inline void
Triangular_iterator::check_intergrity() const {
    if (_index > Triangular::_max_elems) {
        
    }
    
    if (_index > Triangular::_elem.size()) {
        
    }
}

inline int
Triangular_iterator::operator*() const {
    check_intergrity();
    return Triangular::_elem[_index - 1];
}

inline int&
Triangular_iterator::operator++() {
    ++_index;
    check_intergrity();
    return Triangular::_elem[_index];
}

inline int
Triangular_iterator::operator++(int a) {
    check_intergrity();
    return Triangular::_elem[_index++];
}



