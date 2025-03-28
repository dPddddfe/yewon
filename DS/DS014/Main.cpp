/*
공백과 탭키가 포함된 문자열을 입력했을 떄
전체 문자열 앞이나 전체 문자열 뒤에 있는 공백이나 탭키를 제거하고
문자열만 출력하라
문자열 앞의 공백을 제거하는 ltrim(),
문자열 뒤의 공백을 제거하는 rtrim() 함수를 직접 제작하여 완성하라

단, STL은 사용하지 말 것.
함수 2개 이상 제작하여 사용할 것

<string> header file을 포함하고
find_last_not_of() 함수와
find_last_not_off() 함수를 활용하라

Hello World

*/


#include <iostream>
#include <string>

using namespace std;

void ltrim(string* s); 
void rtrim(string* s); 

int main(){

    string* sentence;

    scanf("%s",sentence);

    sentence = ltrim(s);
    cin >> r1->manunum;

    r1->rist = new string[r1->manunum];
    
    for(int i =0; i<r1->manunum; i++){
        addMenu(*m1);
        r1->rist[i] = m1->manuname + " " + to_string(m1->money);
    }
    
    displayManu(*r1);
    return 0;
}

void ltrim(string* s){
    //문자열 앞의 공백을 제거
}

void rtrim(string* s){
    //문자열 뒤의 공백을 제거
}