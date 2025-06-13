#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* start = nullptr;
Node* last = nullptr;

// 노드 swap
void swapNode(Node* x, Node* y) {
    int temp = x->data;
    x->data = y->data;
    y->data = temp;
}

// 노드 생성
Node* createNode(int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = nullptr;
    return newNode;
}

// 리스트 뒤에 노드 추가
void addLast(int y) {
    Node* newNode = createNode(y);
    if (start == nullptr) {
        start = last = newNode;
    } else {
        last->next = newNode;
        last = newNode;
    }
}

// 연결 리스트 출력
void printLinked() {
    Node* temp = start;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// 리스트 초기화
void clearLinked() {
    Node* temp;
    while (start != nullptr) {
        temp = start;
        start = start->next;
        delete temp;
    }
    last = nullptr;
}

// 사용자 입력 받기
void init(int size) {
    int number;
    clearLinked();
    cout << "Enter numbers: ";
    for (int i = 0; i < size; ++i) {
        cin >> number;
        addLast(number);
    }
}

// selection sort on linked list
void selectionLinked() {
    Node* key = start;
    while (key != nullptr) {
        Node* temp = key->next;
        while (temp != nullptr) {
            if (key->data > temp->data) swapNode(key, temp);
            temp = temp->next;
        }
        key = key->next;
    }
}

int main() {
    int n;
    while (true) {
        cout << "\nHow many numbers do you want to sort? (0 to exit): ";
        cin >> n;
        if (n == 0) break;

        init(n);
        selectionLinked();
        cout << "Sorted list: ";
        printLinked();
    }

    clearLinked();
    return 0;
}
