#include "stackInt.h"
#include <iostream>
using namespace std;

class MyStack{
public:
    int maxsize;
    int top;
    char *list;

    void initialize();
    bool isEmpty() const;
    bool isFull() const;
    void push(const char&);
    char pop();
    MyStack(int = 10);
    ~MyStack();
    void print();

    //여기까지 치기만 함

};

MyStack::MyStack(int size) {
    maxsize = size;
    top = -1;
    list = new char[maxsize];
}
MyStack::~MyStack() {
    delete[] list;
}

int main() {


    int count=0;
    //스택 수 받기
    cin >> count;
    
    MyStackInt myStack(count);

    string str;


    while (!myStack.isFull())
    {
            cin >> str;
            if(str == "push"){
                int num = 0;
                cin >> num;
                myStack.push(num);
            }
            else if(str == "pop"){
                myStack.pop();
            }
            else if(str == "print"){
                myStack.print();
                break;
            }
    }
    if(myStack.isFull()){
        myStack.print();
    }



    return 0;
}