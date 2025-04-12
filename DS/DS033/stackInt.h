#include <iostream>
using namespace std;

class MyStackInt {
private: 
    int size;   // size of the Stack
    int top;    // index of top element
    string* S;     // Stack Pointer (int array) 
public:
    MyStackInt(int size);    // constructor to make the Stack with size 
    ~MyStackInt();           // Destructor to remove from memory 
    void push(const string& x);   // push function for inserting an element at the top of Stack
    string pop();          // pop function for deleting the topmost element
    bool isFull() const;       // check either the Stack is full or not
    bool isEmpty() const;      // check either Stack is empty or not
    void print();   // function for displaying the Stack 
    void rprint();
    string stackTop() const;     // top function for checking the topmost element present in the Stack 
};

