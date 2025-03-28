/*
공백과 탭키가 포함된 문자열을 입력받아
1번에서 만든 ltrim()함수와 rtrim()함수를 이용하여
전체 문장 앞뒤의 공백과 탭키를 제거한 후
마지막 단어의 길이를 구하라


이때 입력받는 문장은 알파벳과 공백, 탭으로만 되어있다고 가정한다.

단, <iostream>, <string>만 사용하고, STL은 사용하지 말 것
구조체 2개 이상, 함수 2개 이상 제작하여 사용 할 것
함수의 파라미터로 Reference variable을 사용할 것

Hello World

          This to shall pass        
*/



#include <iostream>
#include <cstring>

using namespace std;

string ltrim(string s);
void rtrim(string& s);
int countword(string& s);

int main(){

    string sentence;
    string editsentence;

    getline(cin,sentence);

    editsentence = ltrim(sentence);
    rtrim(editsentence);

    int count = countword(editsentence);

    cout << count << endl;
    return 0;
}

string ltrim(string s){
    //문자열 앞의 공백을 제거
    size_t start = s.find_first_not_of(" \t");

    return s.substr(start);
}

void rtrim(string& s){
    //문자열 뒤의 공백을 제거
    int count = s.length();
    size_t start = s.find_last_not_of(" \t");
    s = s.substr(0, start + 1);
}

int countword(string& s){
    size_t last = s.find_last_not_of(" ");
    size_t start = s.find_last_of(" ",last);

    return last - start;
}