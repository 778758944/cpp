//
//  BinaryTree.hpp
//  cpp
//
//  Created by Tom Xing on 11/11/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include <iostream>
#include "./BTNode.hpp"
using namespace std;

template <typename elemType>
class BinaryTree {
public:
    // friend ostream& operator<<(ostream&, const BinaryTree<elemType>&);
    BinaryTree(): _root(0) {};
    BinaryTree(const BinaryTree&);
    ~BinaryTree() {
        clear();
    };
    BinaryTree& operator=(const BinaryTree&);
    
    bool empty() {return _root == 0;}
    void insert(const elemType&);
    void remove(const elemType&);
    void remove_root();
    void clear() {
        if (_root) {
            clear(_root);
            _root = 0;
        }
    }
    
    ostream& print(ostream &os = cout) const {
        _root->preOrder(os, _root);
        return os;
    }
private:
    BTNode<elemType> * _root;
    void copy(BTNode<elemType> * tar, BTNode<elemType> * src) {
        
    };
    void clear(BTNode<elemType> * node);
};


template <typename elemType>
inline BinaryTree<elemType>::BinaryTree(const BinaryTree &rhs) {
    copy(_root, rhs._root);
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
inline void BinaryTree<elemType>::remove(const elemType &elem) {
    if (elem == _root->_val) {
        remove_root();
    } else {
        _root->remove_value(elem, _root);
    }
}

template <typename elemType>
inline void BinaryTree<elemType>::remove_root() {
    BTNode<elemType> * tmp = _root;
    if (_root->_right) {
        _root = _root->_right;
        if (tmp->_left) {
            BTNode<elemType> * left = tmp->_left;
            BTNode<elemType> * newleft = _root->_left;
            
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
inline void BinaryTree<elemType>::clear(BTNode<elemType> *node) {
    if (node) {
        clear(node->_left);
        clear(node->_right);
        delete node;
    }
}

//override output
template<typename elemType>
inline ostream& operator<<(ostream &os, const BinaryTree<elemType> &tree) {
    return tree.print(os);
}
#endif /* BinaryTree_hpp */
