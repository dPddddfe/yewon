// compile with debug output:
// g++ -DDEBUGMODE mvoid insertionsort(int *arr, int n){
//_debug.cpp -o sort_debug

#include <iostream>
using namespace std;

void print(int *arr, int n){
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i] << "] ";
    cout << endl;
}

void insertionSort(int *arr, int n){
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;

#ifdef DEBUGMODE
        print(arr, n);
#endif
    }
}

int main(){
    int count;
    cin >> count;

    int arr[count];
    for (int i = 0; i < count; i++) {
        cin >> arr[i];
    }

    print(arr, count);
    insertionSort(arr, count);

#ifndef DEBUGMODE
    print(arr, count);
#endif

    return 0;
}
