#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];

    // A 오름차순, B 내림차순 정렬
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());

    // 최대 k번 교환
    for (int i = 0; i < k; i++) {
        if (A[i] < B[i]) swap(A[i], B[i]);
        else break; // 더 이상 교환할 이유 없음
    }

    // 결과 출력
    int sum = 0;
    for (int i = 0; i < n; i++) sum += A[i];
    cout << k << " " << sum << endl;

    return 0;
}
