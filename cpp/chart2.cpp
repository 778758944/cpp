//
//  chart2.cpp
//  cpp
//
//  Created by Tom Xing on 11/3/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#include "chart2.hpp"
#include <limits>
#include <iostream>
#include <vector>
#include <fstream>
#define filePath "/Users/tomxing/Documents/cpp/cpp/chart2.txt"

using namespace std;

// another reason to use refrence is avoid copy
void displayVector(const vector<int> &v, ostream &out = cout);
void swap(int &a, int &b);
void bubble(vector<int> &arr);

template <typename elemType>
void display_message(const vector<elemType> &);

void changeNum(int &a) {
    a = 10;
}
// default initialize to 0
int ga;

vector<int> getVc() {
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    
    return a;
}

// return arr by heap memory
int * getArr() {
    // alloc heap memory
    int * p = new int[1];
    *p = 21;
    
    return p;
}

void log1(int a) {
    cout << a + 1 << endl;
}

void log2(int b) {
    cout << b + 2 << endl;
}



int main() {
    // need to initialized before use
//    int gb;
    int max_int = numeric_limits<int>::max();
    int min_int = numeric_limits<int>::min();
    
    cout << "max int: " << max_int << endl;
    cout << "min int: " << min_int << endl;
    
    int a = 2;
    changeNum(a);
    
    cout << a << endl;
    
    int arr[8] = {3, 1, 7, 9, 10, 23, 5, 6};
    vector<int> vc(arr, arr + 8);
    
    int ival = 100;
    int jval = 102;
    int &ref = ival;
    // reference must be initialized
//    int &ref2;
    int * p = &ref;
    
    // reference can not be reassign;
    ref = jval;
    ref = 103;
    // pointer can be reassign
    p = &jval;
    *p = 105;
    
    cout << "ival =" << ival << endl << "jval = " << jval << endl;
    
    vector<int> aa;
    aa = getVc();
    
    cout << aa[0] << endl;
    
    cout<< ga << endl;
//    cout << gb << endl;
    
    int * parr;
    parr = getArr();
    
    cout << parr[0] << endl;
    
    display_message(aa);
    
    // func pointer
    void (* log_p[])(int) = {
        log1,
        log2,
    };
    
    log_p[0](5);
    log_p[1](5);
    
    cout << "--------sort--------" << endl;
    ofstream out(filePath);
    displayVector(vc, out);
    bubble(vc);
    cout << "after bubble" << endl;
    displayVector(vc, out);
    return 0;
    
}


void displayVector(const vector<int> &arr, ostream &sout) {
    unsigned long size = arr.size();
    for (unsigned long i = 0; i < size; i++) {
        sout << arr[i] << endl;
    }
    
    
}


void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubble(vector<int> &arr) {
    unsigned long size = arr.size();
    
    for (int x = (int) size-1; x >= 0; x--) {
        for (int y = x-1; y >= 0; y--) {
            if (arr[x] < arr[y]) {
                swap(arr[x], arr[y]);
            }
        }
    }
}

template <typename elemType>
void display_message(const vector<elemType> &v) {
    unsigned long size = v.size();
    for (int i = 0; i < size; i++) {
        cout << v[i] << endl;
    }
}
