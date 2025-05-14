// compile for debugging:
// g++ -DDEBUGMODE bubblesort_debug.cpp -o sort_debug

#include <iostream>
using namespace std;

void print(int *arr, int n) {
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i] << "] ";
    cout << endl;
}

void Ascbubblesort(int *arr, int n) {
#ifdef DEBUGMODE
    cout << "=== ascending order ===" << endl;
#endif
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
#ifdef DEBUGMODE
        print(arr, n);
#endif
    }
}

void Descbubblesort(int *arr, int n) {
#ifdef DEBUGMODE
    cout << "=== descending order ===" << endl;
#endif
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
#ifdef DEBUGMODE
        print(arr, n);
#endif
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    int copy[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        copy[i] = arr[i];
    }

#ifndef DEBUGMODE
    cout << "=== ascending order ===" << endl;
#endif
    Ascbubblesort(arr, n);

#ifndef DEBUGMODE
    print(arr, n);
    cout << "=== descending order ===" << endl;
#endif
    Descbubblesort(copy, n);

#ifndef DEBUGMODE
    print(copy, n);
#endif

    return 0;
}
