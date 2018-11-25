//
//  BinaryTree.cpp
//  cpp
//
//  Created by Tom Xing on 11/11/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#include "BinaryTree.hpp"

/*

template <typename elemType>
inline BinaryTree<elemType>::BinaryTree(const BinaryTree &rhs) {
    copy(_root, rhs._root);
}
 
template <typename  elemType>
inline BinaryTree<elemType>::~BinaryTree(){
    clear();
}

template <typename elemType>
inline BinaryTree<elemType>&
BinaryTree<elemType>::operator=(const BinaryTree<elemType> &rhs) {
    copy(_root, rhs._root);
    return *this;
}

template <typename elemType>
inline void
BinaryTree<elemType>::insert(const elemType &elem) {
    if (!_root) {
        _root = new BTNode<elemType>(elem);
    } else {
        _root->insert_value(elem);
    }
}

template <typename elemType>
void BinaryTree<elemType>::remove(const elemType &elem) {
    if (elem == _root->_val) {
        remove_root();
    } else {
        
    }
}

template <typename elemType>
void BinaryTree<elemType>::remove_root() {
    BTNode<elemType> * tmp = _root;
    if (_root->_right) {
        _root = _root->_right;
        if (tmp->_left) {
            BTNode<elemType> left = tmp->_left;
            BTNode<elemType> newleft = _root->left;
            
            if (!newleft) {
                _root->_left = left;
            } else {
                BTNode<elemType>::lchild_leaf(newleft, left);
            }
        }
    } else {
        _root = _root->_left;
    }
    
    delete tmp;
}

template<typename elemType>
void BinaryTree<elemType>::clear(BTNode<elemType> *node) {
    if (node) {
        clear(node->left);
        clear(node->right);
        delete node;
    }
}
*/
