#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;

    while (true) {
        cin >> s;

        if (s == "q") {
            cout << "Bye!" << endl;
            break;
        }

        stack<char> left, right;

        for (int i = 0; i<s.length(); i++) {
            char ch = s[i];
            if (ch == '<') {
                if (!left.empty()) {
                    right.push(left.top());
                    left.pop();
                }
            } else if (ch == '>') {
                if (!right.empty()) {
                    left.push(right.top());
                    right.pop();
                }
            } else {
                left.push(ch);
            }
        }

        stack<char> temp;
        while (!left.empty()) {
            temp.push(left.top());
            left.pop();
        }

        cout << "=> ";
        while (!temp.empty()) {
            cout << temp.top();
            temp.pop();
        }
        while (!right.empty()) {
            cout << right.top();
            right.pop();
        }
        cout << endl;
    }

    return 0;
}
