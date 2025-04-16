#include "stackInt.h"
#include <iostream>
#include <fstream>
using namespace std;

class CouponStack {
public:
    int maxsize;
    int top;
    string *list;

    void initialize();
    bool isEmpty() const;
    bool isFull() const;
    void push(const string&);
    string pop();
    CouponStack(int = 10);
    ~CouponStack();
    void display() const;
    void print();
    void rprint();
};

CouponStack::CouponStack(int size) {
    maxsize = size;
    top = -1;
    list = new string[maxsize];
}

CouponStack::~CouponStack() {
    delete[] list;
}

int main() {
    int count=0;
    //스택 수 받기
    cin >> count;
    
    MyStackInt myStack(count);

    string str;
    int score[100];
    int scorecount=0;

    while (!myStack.isFull())
    {
            string name = "";
            cin >> str;
            if(str == "q"){
                break;
            }
            else if(str == "+"){
                cin >> score[scorecount];
                getline(cin,name);
                myStack.push(name);
                scorecount++;
            }
            else if(str == "-"){
                scorecount--;
                cout << score[scorecount] << "등 - ";
                myStack.rprint();
                myStack.pop();
            }
    }
    if(myStack.isFull()){
        myStack.print();
    }

    return 0;
}
