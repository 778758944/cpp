//
//  BTNode.hpp
//  cpp
//
//  Created by Tom Xing on 11/11/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#ifndef BTNode_hpp
#define BTNode_hpp

#include <iostream>
using namespace std;

template <typename Type>
class BinaryTree;

template <typename valType>
class BTNode {
public:
    friend class BinaryTree<valType>;
    BTNode(const valType &val): _val(val) {
        _cnt = 1;
        _left = _right = 0;
    }
    
    void insert_value(const valType &val);
    void remove_value(const valType &val, BTNode *&prev);
    void preOrder(ostream &os, BTNode * node) {
        if (node) {
            os << node->_val << " ";
            preOrder(os, node->_left);
            preOrder(os, node->_right);
        }
    }
    static void lchild_leaf(BTNode * left, BTNode * subtree);
private:
    valType _val;
    BTNode * _left;
    BTNode * _right;
    int _cnt;
};


// need to define template member function in header file;


template <typename valType>
inline void BTNode<valType>::insert_value(const valType &val) {
    if (val == _val) {
        _cnt++;
    } else if (val < _val) {
        if (!_left) {
            _left = new BTNode(val);
        } else {
            _left->insert_value(val);
        }
    } else {
        if (!_right) {
            _right = new BTNode(val);
        } else {
            _right -> insert_value(val);
        }
    }
}

template<typename elemType>
inline void BTNode<elemType>::lchild_leaf(BTNode * left, BTNode * subtree) {
    if (subtree -> _left) {
        subtree = subtree->_left;
    }
    subtree->_left = left;
}

template<typename elemType>
inline void BTNode<elemType>::remove_value(const elemType &val, BTNode *&prev) {
    // prev is a refrence to pointer
    if (val < _val) {
        if (!_left) return;
        _left->remove_value(val, _left);
    } else if (val > _val) {
        if (!_right) return;
        _right->remove_value(val, _right);
    } else {
        if (_right) {
            prev = _right;
            if (!prev->_left) {
                prev->_left = _left;
            } else {
                BTNode<elemType>::lchild_leaf(_left, prev->_left);
            }
        } else {
            prev = _left;
        }
        delete this;
    }
}




#endif /* BTNode_hpp */
