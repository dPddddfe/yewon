// compile for debugging:
// g++ -DDEBUGMODE quicksort_debug.cpp -o sort_debug

#include <iostream>
using namespace std;

void print(int *arr, int n) {
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i] << "] ";
    cout << endl;
}

int partition(int *arr, int low, int high, int n) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);

#ifdef DEBUGMODE
    print(arr, n);
#endif

    return i + 1;
}

void quickSort(int *arr, int low, int high, int n) {
    if (low < high) {
        int pi = partition(arr, low, high, n);
        quickSort(arr, low, pi - 1, n);
        quickSort(arr, pi + 1, high, n);
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    print(arr, n);

    quickSort(arr, 0, n - 1, n);

#ifndef DEBUGMODE
    print(arr, n);
#endif

    return 0;
}
