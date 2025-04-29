#include <iostream>
#include <string>
using namespace std;

#define SIZE 100 //사이즈 정의
#define EOS '#'  // Expression End Symbol, 끝 확인 문자

// 연산자 스택 클래스 정의
class op_stack {
    char s[SIZE]; //배열 생성
    int top; //top노드
public:
    op_stack() { top = 0; } //생성자

    void push(char x) { s[top++] = x; } //stack에 넣기

    char pop() { return s[--top]; }  //stack에서 꺼내기

    bool empty() { return top == 0; } //null인지 확인

    char top_element() { return s[top - 1]; } //다음 top이 무엇인지 확인
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
        else if (input[i] == ')') { //input이 )이라면
            while (stack1.top_element() != '(') { //(이 아닐 때까지 반복
                output += stack1.pop(); //stack에서 꺼내어 아웃풋에 넣기
            }
            stack1.pop();  // 여는 괄호 제거
        }
        else {//operater라면
            while (get_precedence(stack1.top_element()) >= get_precedence(input[i])) { //자신보다 높은 연산자를 pop한다
                output += stack1.pop(); //pop하여 output에 추가
            }
            stack1.push(input[i]); //본인 넣기
        }
    }

    //input 계산 끝
    //남은 연산자 모두 출력
    while (stack1.top_element() != EOS) {//EOS가 나올 때 까지 pop
        output += stack1.pop();
    }

    cout << "Postfix expression: " << output << endl;
    return 0;
}
