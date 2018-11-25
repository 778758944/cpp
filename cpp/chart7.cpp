//
//  chart7.cpp
//  cpp
//
//  Created by Tom Xing on 11/12/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#include "chart7.hpp"
#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include "./Fibonacci.hpp"
#include "./iterator_overflow.hpp"
#include "./LessThan.hpp"
using namespace std;
/*
vector<int> filter(const vector<int> &vec, int val, less<int> &lt) {
    vector<int> result;
    vector<int>::const_iterator iter = vec.begin();
    vector<int>::const_iterator end = vec.end();
    
    while ((iter = find_if(iter, end, bind2nd(lt, val))) != end) {
        result.push_back(*iter);
        ++iter;
    }
    
    return result;
}
*/

template <typename InputIterator, typename OutputIterator, typename ElemType, typename Comp>
OutputIterator filter(InputIterator first, InputIterator end, OutputIterator at, const ElemType &val, Comp pred) {
    while ((first = find_if(first, end, bind2nd(pred, val))) != end) {
        cout << *first << endl;
        *at++ = *first++;
    }
    
    return at;
}



ostream& operator<<(ostream &os, const Nq &nq) {
    return nq.print(os);
}


int main() {
    Fibonacci fib(5, 1);
//    cout << fib << endl;
//    cout << fib.elem(1025) << endl;
//    cout << fib.elem(1025) << endl;
    try {
        fib.elem(1025);
    } catch(iterator_overflow &err) {
        cout << "error" << endl;
    }
    
    vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);
    
    for (auto &i : v) {
        cout << i << endl;
    }
    
    sort(v.begin(), v.end(), greater<int>());
    
    vector<int> v2(3);
    
    filter(v.begin(), v.end(), v2.begin(), 1, less<int>());
    
    LessThan lt(2);
    
//    cout << lt(8) << endl;
    vector<int>::iterator it = find_if(v.begin(), v.end(), lt);
    cout << *it << endl;
    
    // what is function object? just a class implement overload operator "()"
    
    
    
    
    
    
    
    
    
    
}


