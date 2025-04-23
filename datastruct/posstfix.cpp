#include <iostream>
#include <string>
using namespace std;

#define SIZE 100
#define EOS '#'  // Expression End Symbol

// 연산자 스택 클래스 정의
class op_stack {
    char s[SIZE];
    int top;
public:
    op_stack() { top = 0; }

    void push(char x) { s[top++] = x; }

    char pop() { return s[--top]; }

    bool empty() { return top == 0; }

    char top_element() { return s[top - 1]; }
};

// 피연산자 판별 함수
bool is_operand(char ch) {
    if (ch == '(' || ch == ')' || ch == '+' || ch == '-' ||
        ch == '*' || ch == '/' || ch == '%')
        return false;
    else
        return true;
}

// 연산자 우선순위 반환
int get_precedence(char op) {
    if (op == '(' || op == EOS) return 0;
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/' || op == '%') return 2;
    return -1;
}

// 메인 함수
int main() {
    string input, output;
    op_stack stack1;

    cout << "Input an infix expression to convert: ";
    cin >> input;

    input += EOS;          // 끝 표시 추가
    stack1.push(EOS);      // 스택 초기화

    for (int i = 0; i < input.size(); i++) {
        if (is_operand(input[i])) {
            output += input[i];  // 피연산자 그대로 출력
        }
        else if (input[i] == ')') {
            while (stack1.top_element() != '(') {
                output += stack1.pop();
            }
            stack1.pop();  // 여는 괄호 제거
        }
        else {
            while (get_precedence(stack1.top_element()) >= get_precedence(input[i])) {
                output += stack1.pop();
            }
            stack1.push(input[i]);
        }
    }

    // 남은 연산자 모두 출력
    while (stack1.top_element() != EOS) {
        output += stack1.pop();
    }

    cout << "Postfix expression: " << output << endl;
    return 0;
}
