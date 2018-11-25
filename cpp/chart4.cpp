//
//  chart4.cpp
//  cpp
//
//  Created by Tom Xing on 11/5/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#include "chart4.hpp"
#include "./Triangular.hpp"
#include "./Matrix.hpp"
#include <set>
#include "./Triangular_iterator.hpp"
#include "./num_sequence.hpp"

// test set
void testSet() {
    set<int> s1;
    set<int> s2;
    
    s1.insert(2);
    s2.insert(1);
    
    s1.insert(1);
    s2.insert(2);
    
    if (s1 == s2) {
        cout << "equal" << endl;
    } else {
        cout << "not equal" << endl;
    }
}

void testConst(const Triangular &t) {
    int len  = t.getLength();
    cout << "len = " << len << endl;
    t.next_reset();
//    const vector<int> &v = t.getElem();
    // v.push_back(1);
}

void testNonConst(Triangular &t) {
    vector<int> &v = t.getElem();
    v.push_back(1);
}

class Person {
public:
    Person(int age): _age(age){};
    // const means member function will not change the object
    bool operator==(const Person &) const;
    int _age;
};
    
inline bool Person::operator==(const Person &rhs) const {
    if (_age == rhs._age) {
        return true;
    }
    
    return false;
}
    
    


int main() {
    Triangular t1;
    Triangular t2(3);
    Triangular t3(3, 2);
    Triangular t6 = 5;
    cout << "t1.getName: " << t1.getName() << endl;
    cout << "t2.getName: " << t2.getName() << endl;
    
    
    cout << "t6 = " << t6.getLength() << endl;
    // class can be assign, default memberwise initialize
    Triangular t7 = t6;
    cout << "t7 = " << t7.getLength() << endl;
    
    // this syntax define an function which has no param and return Triangular;
//    Triangular t5();
    
    Matrix mat(3, 3);
    Matrix mat2 = mat;
    
//    testSet();
    // const mutable
//    testConst(t1);
//    testNonConst(t1);
    
    Triangular &copyt = t1.copy(t3);
    cout << copyt.getLength() << endl;
    
    
//    testNonConst(t2);
    // call static member function
    bool isElem = Triangular::is_elem(1);
    
    if (isElem) {
        cout << "in" << endl;
    }
    
    const Triangular::iterator it = t3.begin();
    const Triangular::iterator end = t3.end();
    
    /*
    while(it != end) {
        cout << *it << endl;
        ++it;
    }
     */
    /*
    if (it != end) {
        cout << "error" << endl;
    }
     */
    
    Triangular_iterator it1(1);
    Triangular_iterator it2(2);
    
    Person p1(3);
    Person p2(3);
    
    if (p1 == p2) {
        cout << "same age" <<endl;
    }
    
    num_sequence ns;
    
    ns.setFn(2);
    ns.printNum();
    int (num_sequence::*p)();
    
    p = ns._ptm;
    
//    (ns.*_ptm)();
    
    
    
    return 0;
}
