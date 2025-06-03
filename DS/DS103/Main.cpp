#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> scores(N);
    for (int i = 0; i < N; i++) {
        cin >> scores[i];
    }

    sort(scores.begin(), scores.end(), greater<int>());

    cout << scores[K - 1] << endl;

    return 0;
}
