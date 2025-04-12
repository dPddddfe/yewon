#include "stackInt.h"
#include <iostream>
using namespace std;

MyStackInt::MyStackInt(int size) { 
    S = new string[size]; // creating the size of the Stack in memory 
    this->size = size; 
    top = -1; // intially set top of the Stack as -1;
}

MyStackInt::~MyStackInt() {
    delete[] S; // free the memory 
}

void MyStackInt::push(const string& x) {
    if (isFull()) { 
        cout << "Stack Overflow!" << endl; 
    }
    else {  
        top++; // increment top 
        S[top] = x; // and push the element to Stack 
    }
}

string MyStackInt::pop() { 
    string x = ""; // initially setting x as -1 
    if (isEmpty()) { 
        cout << "Stack Underflow!" << endl; 
    }
    else {
        x = S[top]; // take out the element 
        top--; // and decreament the size of the Stack 
    }
}

bool MyStackInt::isFull() const { 
    if (top == size - 1) { 
        return 1;
    }
    return 0;
}

bool MyStackInt::isEmpty() const{
    if (top == -1) {
        return 1;
    }
    return 0;
}

void MyStackInt::print(){ 
    for (int i = top; i >= 0; i--) {
        cout << S[i] ;
        cout << endl;
    }
}
void MyStackInt::rprint(){
    cout << S[top] ;

    cout << endl;
}

string MyStackInt::stackTop() const {
    if (isEmpty()) {
        return "";
    }
    return S[top];
}

