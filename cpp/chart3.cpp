//
//  chart3.cpp
//  cpp
//
//  Created by Tom Xing on 11/4/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//

#include "chart3.hpp"
#include <vector>
#include <list>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;

void readOut() {
    istream_iterator<string> is(cin);
    istream_iterator<string> eof;
    
    vector<string> text;
    
    copy(is, eof, back_inserter(text));
    
    ostream_iterator<string> os(cout, " ");
    
    copy(text.begin(), text.end(), os);
}

int main() {
    set<int> s1;
    set<int> s2;
    
    vector<int> v1;
    vector<int> v2;
    
    v1.push_back(2);
    v2 = v1;
    
    s1.insert(1);
    s2 = s1;
    
    if (s1 == s2) {
        cout << "s1 == s2" << endl;
    } else {
        cout << "s1 != s2" << endl;
    }
    
    cout << v2[0] << endl;
    
    // init with size and value
    vector<int> v3(5, 3);
    
    cout << v3[1] << endl;
    
    // list modify
    int arr[] = {5, 6};
    list<int> l1;
    l1.push_back(1);
    l1.push_front(2);
//    l1.pop_back();
//    l1.pop_front();
    //[2, 1]
    list<int>::iterator it = l1.begin();
    // insert singal element
//    l1.insert(it, 3);
    // insert arr;
    l1.insert(it, arr, arr + 2);
    l1.erase(l1.begin());
    cout << l1.front() << endl;
    cout << l1.back() << endl;
    
    // is vector ascending No!!!!!
    vector<int> v5;
    
    v5.push_back(2);
    v5.push_back(1);
    v5.push_back(3);
    
    sort(v5.begin(), v5.end());
    
    cout << v5[0] << endl;
    cout << v5[1] << endl;
    cout << v5[2] << endl;
    
    bool isExit = binary_search(v5.begin(), v5.end(), 5);
    if (isExit) {
        cout << "founded" << endl;
    }
    
    vector<int>::iterator max = max_element(v5.begin(), v5.end());
    cout << "max in v5 = " << *max << endl;
    
    // map
    map<string, int> m1;
    m1["age"] = 10;
    m1["money"] = 100;
    map<string, int>::iterator m1_it = m1.begin(),
    m1_end = m1.end();
    
    for(; m1_it != m1_end; ++m1_it) {
        cout << m1_it->first << " = " << m1_it->second << endl;
    }
    
    cout << m1["tt"] << endl;
    // key occurrence
    cout << m1.count("sdsds") << endl;
    
    
    set<int> se1;
    se1.insert(1);
    se1.insert(2);
    
    cout << se1.count(2) << endl;
    
    
    vector<int> v6;
    vector<int> v7;
    
    v6.push_back(1);
    v6.push_back(2);
    
    v7.push_back(1);
    v7.push_back(2);
    
    if (v6 == v7) {
        cout << "yes" << endl;
    }
    /*
    string word;
    vector<string> v8;
    
    while (cin >> word) {
        if (word == "0") {
            break;
        }
        v8.push_back(word);
    }
    
    for(int i = 0; i < v8.size(); ++i) {
        cout << v8[i] << endl;
    }
     */
    
    readOut();
    
    
    
    return 0;
    
}
