#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& arr) {
    for (int x : arr)
        cout << "[" << x << "] ";
    cout << endl;
}


// Selection Sort
void selectionSort(vector<int>& arr) {
    cout << "==== selection sort ====" << endl;
    print(arr);
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_i = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_i])
                min_i = j;
        }
        if (i != min_i)
            swap(arr[i], arr[min_i]);
        print(arr);
    }
}

// Insertion Sort
void insertionSort(vector<int>& arr) {
    cout << "==== insertion sort ====" << endl;
    print(arr);
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        print(arr);
    }
}

// Bubble Sort
void bubbleSort(vector<int>& arr) {
    cout << "==== bubble sort ====" << endl;
    print(arr);
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
        print(arr);
    }
}

// Quick Sort
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high], i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot)
            swap(arr[++i], arr[j]);
    }
    swap(arr[i + 1], arr[high]);
    print(arr);
    return i + 1;
}
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Merge Sort
void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> leftVec(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightVec(arr.begin() + mid + 1, arr.begin() + right + 1);
    int i = 0, j = 0, k = left;
    while (i < leftVec.size() && j < rightVec.size()) {
        arr[k++] = (leftVec[i] <= rightVec[j]) ? leftVec[i++] : rightVec[j++];
    }
    while (i < leftVec.size()) arr[k++] = leftVec[i++];
    while (j < rightVec.size()) arr[k++] = rightVec[j++];
    print(arr);
}
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int choice;
    while (true) {
        cout << "1.selection 2.insertion 3.bubble 4.quick 5.merge 6.exit > ";
        cin >> choice;
        if (choice == 6) {
            cout << "bye!" << endl;
            break;
        }

        int count;
        cout << "Enter count: ";
        cin >> count;
        vector<int> arr(count);
        cout << "Enter numbers : ";
        for (int i = 0; i < count; i++) cin >> arr[i];

        switch (choice) {
            case 1: selectionSort(arr); break;
            case 2: insertionSort(arr); break;
            case 3: bubbleSort(arr); break;
            case 4:
                cout << "==== quick sort ====" << endl;
                print(arr);
                quickSort(arr, 0, count - 1);
                break;
            case 5:
                cout << "==== merge sort ====" << endl;
                print(arr);
                mergeSort(arr, 0, count - 1);
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    }
    return 0;
}
