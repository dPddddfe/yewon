#include <iostream>
using namespace std;

#define SIZE 100


class stack{

public:
    int stack[SIZE];
    int top =0;

    void push(int x);
    int pop();
    bool full();
    bool empty();

};

int main(){

    stack s;

    s.push(3);
    int n = s.pop();

    cout << n << endl;

    return 0;
}

void stack::push(int x){
    stack[top] = x;
    top++;
}

int stack::pop(){
    top--;
    return (stack[top]);
}

bool stack::full(){
    return top == SIZE;
}
bool stack::empty(){
    return (top == 0);
}
