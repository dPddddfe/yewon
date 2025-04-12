#include "stackInt.h"
#include <iostream>
using namespace std;

MyStackInt::MyStackInt(int size) { 
    S = new int[size]; // creating the size of the Stack in memory 
    this->size = size; 
    top = -1; // intially set top of the Stack as -1;
}

MyStackInt::~MyStackInt() {
    delete[] S; // free the memory 
}

void MyStackInt::push(int x) {
    if (isFull()) { 
        cout << "Stack Overflow!" << endl; 
    }
    else {  
        top++; // increment top 
        S[top] = x; // and push the element to Stack 
    }
}

int MyStackInt::pop() { 
    int x = -1; // initially setting x as -1 
    if (isEmpty()) { 
        cout << "Stack Underflow!" << endl; 
    }
    else {
        x = S[top]; // take out the element 
        top--; // and decreament the size of the Stack 
    }
    return x;
}

int MyStackInt::isFull() { 
    if (top == size - 1) { 
        return 1;
    }
    return 0;
}

int MyStackInt::isEmpty() {
    if (top == -1) {
        return 1;
    }
    return 0;
}

void MyStackInt::print() { 
    for (int i = top; i >= 0; i--) {
        cout << S[i] ;
        cout << endl;
    }
}

int MyStackInt::stackTop() {
    if (isEmpty()) {
        return -1;
    }
    return S[top];
}
