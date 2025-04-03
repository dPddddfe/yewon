/*
졸업 영어성적을 제출하기 위해
- 학생 이름
- L/C(Listening Somprehension),
- R/C(Reading Reading Comprehension)
점수를 받아
총점과 각 영역별로 350 이상이면
Pass, 아니면 Fail로 표시하라

각 영역점수는 0+495 사이의 점수를 입력받아야 하며,
그 외 점수를 입력하는 경우에는 범위 안에 있는
점수를 입력 받을 때까지 다시 입력받아야 한다.

별도의 클래스를 제작하여 해결할 것
함수 1개이상 제작

클래스 구성요소
- 멤버 변수 : 학생 이름, Lc점수, Rc 점수
- 멤머 메소드 : 기본 생성자, 입력받는 생성자,
멤버변수 parameter가 있는 생성자, 점수 0~495점수 유효성 체크 함수,
출력 메소드, pass/fail메소드 등
*/

#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int LCscore;
        int RCscore;

        void inputScores();  // 입력받는 생성자
        void print() const; //출력메소드
        void rightScore(); //점수 유효성 체크
        int getSum() const;  // 총합 구하기
        string P_F(int score) const; //합격 불합격 메소드

};

void Student::inputScores(){
    getline(cin,name);
    cout << "LC>";
    cin >> LCscore;
    cout << "RC>";
    cin >> RCscore;

}

int Student::getSum() const{
    int total;
    total = LCscore + RCscore;

    return total;
}

void Student::rightScore(){

    inputScores();
    while(LCscore < 0 || LCscore > 495) {
        cout << "LC>";
        cin >> LCscore;
    }

    while (RCscore < 0 || RCscore > 495) {
        cout << "RC>";
        cin >> RCscore;
    }

}

string Student::P_F(int score) const{
    string word;
    if(score >= 350) word = "Pass";
    else word = "Fail";

    return word;
}

void Student::print() const {
    printf("[%s]\nLC - %d %s\nRC - %d %s\nTotal - %d\n",name.c_str(),LCscore,P_F(LCscore).c_str(),RCscore,P_F(RCscore).c_str(),getSum());
}

int main(){
    Student s;

    s.rightScore();

    s.print();
    return 0;
}



//g++ -o program Main.cpp 