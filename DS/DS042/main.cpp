#include "stackIntList.h"
#include <iostream>
#include <fstream>
using namespace std;


int main() {
    Node* node;
    bool exp_error;
    string operand;

    MyStackIntList* mylist = new MyStackIntList();
    ifstream file;
    file.open("data.txt");

    while (!file.eof()) {
        mylist->initialize();
        exp_error = false;

        while (file >> operand) {
            exp_error = false;
            cout << operand << " ";

            if (operand.find("#") != string::npos) {
                try {
                    int number = stoi(operand.substr(1));
                    mylist->push(number);
                } catch (...) {
                    cout << "\n => Expression error !!!" << endl;
                    exp_error = true;
                    break;
                }
            }
            else if (operand == "+") {
                if (mylist->getNodeCnt() > 1) {
                    int result = mylist->pop() + mylist->pop();
                    mylist->push(result);
                }
                else {
                    cout << "\n => Expression error!!!" << endl;
                    exp_error = true;
                    break;
                }
            }
            else if (operand == "-") {
                if (mylist->getNodeCnt() > 1) {
                    int b = mylist->pop();
                    int a = mylist->pop();
                    mylist->push(a - b);
                }
                else {
                    cout << "\n => Expression error !!!" << endl;
                    exp_error = true;
                    break;
                }
            }
            else if (operand == "*") {
                if (mylist->getNodeCnt() > 1) {
                    int result = mylist->pop() * mylist->pop();
                    mylist->push(result);
                }
                else {
                    cout << "\n => Expression error !!!" << endl;
                    exp_error = true;
                    break;
                }
            }
            else if (operand == "/") {
                if (mylist->getNodeCnt() > 1) {
                    int b = mylist->pop();
                    int a = mylist->pop();
                    if (b == 0) {
                        cout << "\n => Division by 0" << endl;
                        exp_error = true;
                        break;
                    }
                    mylist->push(a / b);
                }
                else {
                    cout << "\n => Expression error !!!" << endl;
                    exp_error = true;
                    break;
                }
            }
            else if (operand == "=") {
                if (mylist->getNodeCnt() == 1) {
                    int result = mylist->pop();
                    cout << result << endl;
                }
                else if (mylist->getNodeCnt() > 1) {
                    cout << "\n => Too many operands !!!" << endl;
                    break;
                }
                else {
                    cout << "\n => Expression error !!!" << endl;
                    break;
                }
                break; // 한 줄 끝났으면 멈춤
            }
            else {
                cout << "\n => Expression error !!!" << endl;
                exp_error = true;
                break;
            }
        }

        // 줄 바꿈 처리
        if (!exp_error) cout << endl;

        // 파일에 남아있는 줄바꿈 문자 consume
        while (file.peek() == '\n' || file.peek() == '\r') {
            file.get();
        }
    }

    file.close();
    delete mylist;
    return 0;
}
