//
//  chart6.cpp
//  cpp
//
//  Created by Tom Xing on 11/11/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#include "chart6.hpp"
#include <iostream>
#include <string>
#include "./BinaryTree.hpp"

using namespace std;
/*
template<typename elemType>
inline ostream& operator<<(ostream &os, const BinaryTree<elemType> &tree) {
    return tree.print(os);
}
 */

int main() {
    cout << "hello" << endl;
    BinaryTree<string> bi;
    
    bi.insert("Piglet");
    bi.insert("Eeyore");
    
    
//    bi.remove("Eeyore");
    
    cout << bi << endl;
//    bi.empty();
    
    return 0;
}
