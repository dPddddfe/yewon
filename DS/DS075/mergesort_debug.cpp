// compile for debugging:
// g++ -DDEBUGMODE mergesort_debug.cpp -o sort_debug

#include <iostream>
using namespace std;

void print(int *arr, int n){
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i] << "] ";
    cout << endl;
}

void merge(int *arr, int left, int mid, int right, int n) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

#ifdef DEBUGMODE
    print(arr, n);
#endif
}

void mergeSort(int *arr, int left, int right, int n) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid, n);
        mergeSort(arr, mid + 1, right, n);
        merge(arr, left, mid, right, n);
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    print(arr, n);
    mergeSort(arr, 0, n - 1, n);

#ifndef DEBUGMODE
    print(arr, n);
#endif

    return 0;
}
