#include "stackIntList.h"
#include <iostream>
using namespace std;



int main() {

    Node* node;
    MyStackIntList myStack;
    int count=0;

    
    string str;


    while (!myStack.isFull())
    {
            cin >> str;
            if(str == "push"){
                int num = 0;
                cin >> num;
                myStack.push(num);
                count++;
            }
            else if(str == "pop"){
                myStack.pop();
                count--;
            }
            else if(str == "print"){
                myStack.printAll();
            }
            else if(str == "clear"){
                for(int i=0; i<count; i ++){
                    myStack.pop();
                }
                count=0;

            }
            else if(str == "q"){
                cout << "Bye!" << endl;
                break;
            }
        
    }
    if(myStack.isFull()){
        myStack.printAll();
    }

    return 0;
}