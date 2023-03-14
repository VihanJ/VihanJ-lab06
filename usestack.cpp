// usestack.cpp - for CS 24 lab practice using stacks
// Vihan Jayaraman, 3/13

#include "intstack.h"
#include <iostream>
using namespace std;

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(10);
    s.push(20);
    s.push(10);
    s.push(20);
    s.push(10);
    s.push(20);

    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
