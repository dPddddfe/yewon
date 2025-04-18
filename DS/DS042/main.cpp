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