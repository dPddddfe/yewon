#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    priority_queue<int> Heap;

    int n=0;
    int count=0;


    cin >> n >> count;
    int nums[n];

    for(int i=0; i<n; i++){
        cin >> nums[i];
        Heap.push(nums[i]);
    }

    for(int i=0; i<count -1; i++){
        Heap.pop();
    }

    cout << Heap.top() << endl;

    return 0;
}
