#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> vinput;
    vector<string> voutput;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        vinput.push_back(word);
    }

    // 중복 제거: 하나씩 비교해서 voutput에 없는 것만 넣기
    for (int i = 0; i < vinput.size(); i++) {
        if (find(voutput.begin(), voutput.end(), vinput[i]) == voutput.end()) {
            voutput.push_back(vinput[i]);
        }
    }
    sort(voutput.begin(), voutput.end(), [](const string &a, const string &b) {
        if (a.length() == b.length()) return a < b;
        return a.length() < b.length();
    });

    for (int i = 0; i < voutput.size(); i++) {
        cout << voutput[i] << '\n';
    }

    return 0;
}
