//https://www.codewhoop.com/queue/queue-using-linked-list.html
#include <iostream>
using namespace std;

// Structure of Node.
struct Node
{
int data;

Node *link;
};

Node *front = NULL;
Node *rear = NULL;

//Function to check if queue is empty or not
bool isempty()
{
 if(front == NULL && rear == NULL)
 return true;
 else
 return false;
}

//function to enter elements in queue
void enqueue ( int value )
{
 Node *ptr = new Node();
 ptr->data= value;
 ptr->link = NULL;

 //If inserting the first element/node
 if( front == NULL )
 {
  front = ptr;
  rear = ptr;
 }
 else
 {
  rear ->link = ptr;
  rear = ptr;
 }
}

int isfull() { 
    if (rear == front - 1) { 
        return 1;
    }
    return 0;
}
//function to delete/remove element from queue
int dequeue() {
  if (isempty()) {
    cout << "Queue is empty\n";
    return 0;
  }

  int value = front->data;
  Node* temp = front;

  if (front == rear) {
    front = rear = NULL;
  } else {
    front = front->link;
  }

  delete temp;
  return value;
}


//function to show the element at front
void showfront( )
{
 if( isempty())
 cout<<"Queue is empty\n";
 else
 cout<<"element at front is:"<<front->data;
}
void showrear( )
{
 if( isfull() != 0)
    cout<<"Queue is full\n";
 else
    cout<<"element at rear is:"<<rear->data;
}

//function to display queue
void displayQueue()
{
 if (isempty())
  cout<<"Queue is empty\n";
 else
 {
  Node *ptr = front;
  while( ptr !=NULL)
  {
   cout<<ptr->data<<" ";
   ptr= ptr->link;
  }
 }
}

//Main Function
int main()
{
 int choice, flag=1, num;
    cin>>choice;
    enqueue(1);
    enqueue(1);
    cout << "1st : 1" << endl;
    cout << "2nd : 1" << endl;
 for(int i =1; i<=choice; i++)
 {
    int num1 = dequeue();
    int num2 = front -> data;
    int result = num1 + num2;
    enqueue(result);

    if(i == 3) cout << i << "rd : " << num1 << endl;
    if(i > 3) cout << i << "th : " << num1 << endl;
    num = num1;

 }
    cout << "=> fibonacci(" << choice <<") : "<< num;


 return 0;
}