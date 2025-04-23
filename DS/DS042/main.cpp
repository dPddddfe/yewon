/*
교수님의 tip)
- 41번은 테스트 하는 수준인데 42번은 그 스택을 그대로 쓰는데
계산기를 만들기. postfix 만들기

문제를 숫자와 기호만 들어가는게 아니라 #은 숫자, = 은 팝해서 내용을 찍어라
문제는 =를 했는데 내용이 2,3개 있으면 수식이 잘못 된것이다.
이걸 처리하는 계산기이다.
파일 읽어야한다. 전체 다 읽을떄 까지
한 줄 씩 끝내기.

느낌)
여러 줄이 있으면 하나하나 읽으면서.
swich가 나으려나..? 이따 알고리즘 생각해보자

[알고리즘]
파일에서 계산식 읽기
그 식의 결과를 화면에 출력하기
계산식에 포함되는 문자 
: #(정수), +, -, *, /, =(결과), 공백, 이외의  문자: EXpression error출력

1. 계산에 사용되는 숫자와 결과는 정수형으로 처리한다. -> stoi(str,시작 인덱스)
2. 숫자 앞에는 반드시 #을 넣도록 한다
3. 모든 계산식 끝에는 =를 넣어서 결과를 계산하게 한다
4. 모든 숫자와 연산자는 공백으로 구분한다
5. 계산기에서 처리할 연산자는 곱셈(*), 나눗셈(/), 덧셈(+), 뺄셈(-)이다
6. 나눗셈에서 나누는 숫자가 0일 경우 : "Division by 0" 출력
7. 연산자에 비해서 숫자가 많은 경우 : "Too many operands" 출력
8. 계산식에 이상한 문자가 있는 경우에는 "Expression error" 출력
9. 입력 데이터는 파일 통해 읽기. 
10. 각 라인씩 각 계산식으로 stack을 통해 처리. 
11.결과는 화면에 출력


*/

#include "stackIntList.h"
#include <iostream>
using namespace std;



int main() {

    Node* node;
    MyStackIntList myStack;
    int count=0;

    
    string str;


    while (!myStack.isFull())
    {
            cin >> str;
            if(str == "push"){
                int num = 0;
                cin >> num;
                myStack.push(num);
                count++;
            }
            else if(str == "pop"){
                myStack.pop();
                count--;
            }
            else if(str == "print"){
                myStack.printAll();
            }
            else if(str == "clear"){
                for(int i=0; i<count; i ++){
                    myStack.pop();
                }
                count=0;

            }
            else if(str == "q"){
                cout << "Bye!" << endl;
                break;
            }
        
    }
    if(myStack.isFull()){
        myStack.printAll();
    }

    return 0;
}