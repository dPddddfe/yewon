#include "queueInt.h"
#include <iostream>
using namespace std;

int main() {

    int num;
    cin >> num;
    
    MyQueueInt myQueue(num);
    
    while(true){
        string command;
        cin >> command;

        if(command == "de"){
            cout << "=====Dequeue x " <<num << "=====" <<endl;
            myQueue.dequeue();
        }
    }

    int A[] = { 1, 3, 5, 7, 9 };
    MyQueueInt myQueue(sizeof(A) / sizeof(A[0]));

    myQueue.display();
    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        myQueue.enqueue(A[i]);
    }
    myQueue.enqueue(100);

    cout << "index : ";
    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        cout << myQueue.dequeue() << " ";
    }
    cout << endl;

    myQueue.dequeue();
    myQueue.display();


    return 0;
}