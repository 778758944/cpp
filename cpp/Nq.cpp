//
//  Nq.cpp
//  cpp
//
//  Created by Tom Xing on 11/8/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#include "Nq.hpp"
#include "./iterator_overflow.hpp"

bool
Nq::check_integrity(int pos, int size) const {
    if (pos <= 0 || pos > _max_elems) {
        throw iterator_overflow(pos, _max_elems);
    }
    
    if (pos > size) {
        gen_elems(pos);
    }
    
    return true;
}

int
Nq::elem(int pos) const {
    int size = (int) _relems.size();
    if (!check_integrity(pos, size)) {
        return 0;
    }
    
    return _relems[pos - 1];
}

ostream&
Nq::print(ostream &os) const {
    int begin = _beg_pos - 1;
    int end = begin + _length;
    int size = (int) _relems.size();
    
    if (!check_integrity(end, size)) {
        end = size;
    }
    
    for(; begin < end; begin++) {
        os << _relems[begin] << " ";
    }
    
    
    return os;
}

/*
ostream& operator<<(ostream &os, const Nq &nq) {
    return nq.print(os);
}
 */
