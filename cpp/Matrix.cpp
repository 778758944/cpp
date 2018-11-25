//
//  Matrix.cpp
//  cpp
//
//  Created by Tom Xing on 11/5/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#include "Matrix.hpp"

Matrix& Matrix::operator=(const Matrix &rhs) {
    cout << "overload =" << endl;
    if (this != &rhs) {
        _row = rhs._row;
        _col = rhs._col;
        _pmat = new double[_row * _col];
        for (int i = 0; i < _row * _col; i++) {
            _pmat[i] = rhs._pmat[i];
        }
    }
    
    return *this;
}
