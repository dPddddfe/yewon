#include "stackIntList.h"
#include <iostream>
using namespace std;

int main() {
    MyStackIntList left; 
    MyStackIntList right;

    string str;
    
    while (true) {
        cin >> str;
        if (str == "q") {
            cout << "Bye!" << endl;
            break;
        }
        MyStackIntList left;
        MyStackIntList right;

        for (int i = 0; i < str.length(); i++) {
            char input = str[i];  // ★ 이거 추가

            if (input == '<') {
                if (!left.isEmpty()) {
                    right.push(left.pop());
                }
            }
            else if (input == '>') {
                if (!right.isEmpty()) {
                    left.push(right.pop());
                }
            }
            else {
                left.push(input);
            }
        }


        MyStackIntList print;
        MyStackIntList temp = left;

        while (!temp.isEmpty()) {
            print.push(temp.pop());
        }
        cout << "=> ";

        print.printAll(); // 커서 왼쪽 출력
        right.printAll(); // 커서 오른쪽 출력
        cout << endl;
    }

    return 0;
}
