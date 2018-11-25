//
//  chart5.cpp
//  cpp
//
//  Created by Tom Xing on 11/8/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#include "chart5.hpp"
#include "./LibMat.hpp"
#include "./Book.hpp"
#include "./AudioBook.hpp"
#include "./Fibonacci.hpp"
#include <iostream>
#include <typeinfo>


void print(const LibMat &mat) {
    cout << "in global about to mat.print" << endl;
    mat.print();
}

ostream& operator<<(ostream &os, const Nq &ns) {
    return ns.print(os);
}


int main() {
//    LibMat mat;
//    Book b("JavaScript", "Jack");
//    AudioBook ab("JavaScript", "Jack", "Messi");
//    print(ab);
//    cout << ab.narrator() << endl;
//    cout << ab.title() << endl;
    
    Fibonacci fib;
    cout << "fib: begin at element 1 for 1 element: " << fib << endl;
    
    Fibonacci fib2(16);
    cout << "fib2: begin at 1 and 16: " << fib2 << endl;
    
    Fibonacci fib3(8, 12);
    cout << "fib3: begin at 12 and 8: " << fib3 << endl;
    
    cout << fib.what_am_i() << endl;
    cout << fib.elem(5) << endl;
    
    Nq *ps = &fib;
    
    if (typeid(*ps) == typeid(Fibonacci)) {
        cout << "yes" << endl;
        // type transform
        Fibonacci * pf = static_cast<Fibonacci *>(ps);
        pf->sayHi();
        
    }
    // type transform with check;
    if (Book *pf = dynamic_cast<Book *>(ps)) {
//        pf->sayHi();
        cout << "yes" << endl;
    } else {
        cout << "can not transform" << endl;
    }
    
    
    return 0;
}
