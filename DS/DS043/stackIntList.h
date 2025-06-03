#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

class MyStackIntList {
private: 
    int size;       // size of the stack
    Node* top;      // top element

public:
    MyStackIntList();    // constructor to make the stack 
    ~MyStackIntList();   // Destructor to remove from memory 
    void push(char x);   // push function for inserting an element at the top of stack
    int pop();          // pop function for deleting the topmost element
    int isFull();       // check either the stack is full or not
    int isEmpty();      // check either stack is empty or not
    void printAll();     // function for displaying the stack 
    int stackTop();     // top function for checking the topmost element present in the stack 
    void printAllre();
}

