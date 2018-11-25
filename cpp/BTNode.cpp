//
//  BTNode.cpp
//  cpp
//
//  Created by Tom Xing on 11/11/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#include "BTNode.hpp"
/*
template <typename valType>
void BTNode<valType>::insert_value(const valType &val) {
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
void BTNode<elemType>::lchild_leaf(BTNode * left, BTNode * subtree) {
    if (subtree -> _left) {
        subtree = subtree->_left;
    }
    subtree->_left = left;
}

template<typename elemType>
void BTNode<elemType>::remove_value(const elemType &val) {
    if (val == _val) {
        BTNode * left = _left;
        if (_right) {
            this = _right;
            BTNode<elemType> * newleft = _left;
            if (!_left) {
                _left = left;
            } else {
                lchild_leaf(left, _left);
            }
        } else {
            this = _left;
        }
    } else if (val < _val) {
        if (!_left) return;
        remove_value(_left);
    } else {
        if (!_right) return;
        remove_value(_right);
    }
}
 */
