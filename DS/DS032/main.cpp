#include "stackInt.h"
#include <iostream>
#include <fstream>
using namespace std;

class MyStack{
public:
    int maxsize;
    int top;
    string *list;

    void initialize();
    bool isEmpty() const;
    bool isFull() const;
    void push(const string&);
    string pop();
    MyStack(int = 10);
    ~MyStack();
    void print() const;
    void print();


};

MyStack::MyStack(int size) {
    maxsize = size;
    top = -1;
    list = new string[maxsize];
}
MyStack::~MyStack() {
    delete[] list;
}

int main() {

    
    MyStackInt myStack(100);
    ifstream F("student.txt");

    double GPA;
    string name;
    double TopGPA=0.0;


    while (F>>GPA>>name)
    {
        if (GPA >= TopGPA) {
            if (GPA > TopGPA) { 
                myStack = MyStackInt(100);
                TopGPA = GPA;
            }
            myStack.push(name);
        }
    }
    cout << "Top GPA = " << TopGPA << endl;
    myStack.print();


    return 0;
}