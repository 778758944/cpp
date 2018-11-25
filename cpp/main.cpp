//
//  main.m
//  cpp
//
//  Created by Tom Xing on 11/2/18.
//  Copyright © 2018 Tom Xing. All rights reserved.
//
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int add(int a, int b) {
    if (a < b) {
        return a + b;
    }
    return a - b;
}

struct Tt {
    int age;
};
// remeber how to use refer;
void addToVector(int num, vector<int> &v) {
    vector<int> av;
    av.push_back(1);
    cout << av[0] << endl;
    v.push_back(num);
    cout << v[0] << endl;
    // change the original value;
    v = av;
}
// pointer can do the same thing;
void addToVector(int num, vector<int> * v) {
    vector<int> av;
    av.push_back(2);
    v->push_back(num);
    cout << (*v)[0] << endl;
    // has nothing to do with the original
    v = &av;
}

int main() {
    struct Tt * p;
    p = NULL;
    int arr[add(2, 2)];
    arr[2] = 3;
    cout << arr[2] << endl;
    cout << "hello, world" << endl;
    
    vector<int> tv;
    addToVector(23, &tv);
    
    cout << tv[0] << endl;
    
    ifstream infile("/Users/tomxing/Documents/cpp/cpp/test");
    ofstream ofile("/Users/tomxing/Documents/cpp/cpp/test", ios_base::app);
    
    if (infile) {
        string name;
        infile >> name;
        cout << name << endl;
    } else {
        cout << "no file" << endl;
    }
    if (ofile) {
        // endl will flush buffer and insert \n
        ofile << "Who need Ronaldo" << endl;
    }
    
}
