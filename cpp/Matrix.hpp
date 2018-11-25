//
//  Matrix.hpp
//  cpp
//
//  Created by Tom Xing on 11/5/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#ifndef Matrix_hpp
#define Matrix_hpp

#include <iostream>
using namespace std;

class Matrix {
public:
    Matrix(int row, int col): _row(row), _col(col) {
        // new means allocate memory on head and return the point
        _pmat = new double[row * col];
        
    }
    
    
    // copy constructor
    Matrix(const Matrix &rhs): _row(rhs._row), _col(rhs._col) {
        cout << "copy constructor called" << endl;
        int len = _row * _col;
        _pmat = new double[len];
        
        for (int  i = 0; i < len; i++) {
            _pmat[i] = rhs._pmat[i];
        }
    }
    
    Matrix& operator=(const Matrix &);
    
    // destructor
    ~Matrix() {
        // delete can recycle heap memory
        cout << "destructed called" << endl;
        delete [] _pmat;
    }
private:
    int _row, _col;
    double * _pmat;
};


#endif /* Matrix_hpp */
