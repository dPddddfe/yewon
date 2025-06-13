이  문제를 풀 때 이 코드를 사용하되, 디버그 안써도 되면 빼고, 문제 풀어줘

#include <iostream>
#include <vector>
using namespace std;
#define _DEBUG
#define MAX 20

vector<int> heap;

void printHeap(const vector<int>& heap) {
    cout << "==> Heap : ";
    for (int v : heap) cout << v << " ";
    cout << endl;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}


void insertKey(int value) {
    
    if (heap.size() >= MAX) {
        cout << "\n[Overflow] Heap is full. Could not insertKey\n";
        return;
    }
    
   //insert operation

#ifdef _DEBUG
    printHeap(heap);
#endif
}

// heapify-down
void maxHeapify(int i) {
    // maxHeapify operation


    
}

void deleteKey() {
    int size = heap.size();
    if (size == 0) {
        cout << "\nCould not deleteKey (Heap is empty)\n";
        return;
    }

#ifdef _DEBUG
    cout << "=> Delete " << heap[0] << endl;
#endif

    // maxHeapify operation


#ifdef _DEBUG
    printHeap(heap);
#endif
}

int main() {
    int menu;
    while (1) {
        cout << "1.Array to minHeap 2.insert 3. delete 4.print 0.quit > ";
        cin >> menu;

        if(menu = 0){
            cout << "Bye!" << endl;
            return 0;
        }
        else if (menu == 1) {
            int value;
            cout << "new value? ";
            cin >> value;
            insertKey(value);
        }
        else if (menu == 2) {
            deleteKey();
        }
        else if (menu == 3) {
            printHeap(heap);
        }
        else break;
    }

    cout << "Bye!" << endl;
    return 0;
}