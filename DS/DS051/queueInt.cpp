#include "queueInt.h"
#include <iostream>
using namespace std;

MyQueueInt::MyQueueInt(int size) { 
	front = rear = -1;
	this->size = size;		
	Q = new int[size];					//Memory is allocated for the Queue in the HEAP
}

MyQueueInt::~MyQueueInt() {
    delete[] Q; // free the memory 
}

void MyQueueInt::enqueue(int x) {
    if (isFull()) { 
        cout << "Queue is Overflow!" << endl; 
    }
    else {  
		rear++; // increament the rear and then insert the value in the queue
		Q[rear] = x; // insertion of the element.
    }
}

int MyQueueInt::dequeue() { 
    int x = -1; // initially setting x as -1 
    if (isEmpty()) { 
		cout << "Queue is Empty!" << endl;
    }
	else
	{
		front++; // increment the front and take out the element 
		x = Q[front];
	}
	return x; // return the deleted value 
}

int MyQueueInt::isFull() { 
    if (rear == size - 1) { 
        return 1;
    }
    return 0;
}

int MyQueueInt::isEmpty() {
    if (front == rear) {
        return 1;
    }
    return 0;
}

void MyQueueInt::display() { 
    cout << "Queue : ";
    for (int i = front + 1; i <= rear; i++) {
        cout << Q[i] << " | ";
    }
    cout << endl;
}

