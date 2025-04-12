#include <iostream>
using namespace std;

class MyStackInt {
private: 
    int size;   // size of the Stack
    int top;    // index of top element
    int* S;     // Stack Pointer (int array) 
public:
    MyStackInt(int size);    // constructor to make the Stack with size 
    ~MyStackInt();           // Destructor to remove from memory 
    void push(int x);   // push function for inserting an element at the top of Stack
    int pop();          // pop function for deleting the topmost element
    int isFull();       // check either the Stack is full or not
    int isEmpty();      // check either Stack is empty or not
    void print();     // function for displaying the Stack 
    int stackTop();     // top function for checking the topmost element present in the Stack 
};

