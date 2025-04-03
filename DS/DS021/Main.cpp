#include <iostream>
using namespace std;

class Student{
    private:
        double getAvg() const;
    public:
        string name;
        string sid;
        int *score;
        void print() const;
        Student(); 
        void inputScores();  // 점수 입력
        int getSum() const;  // 총합 구하기

};

Student::Student() {
    score = new int[3];  
}
void Student::inputScores(){
    cin >> score[0];
    cin >> score[1];
    cin >> score[2];
}
int Student::getSum() const{
    int total;
    total = score[0] + score[1] + score[2];

    return total;
}

double Student::getAvg() const{

    double aver;
    aver = (double) getSum() / 3.0;
            
    return aver;
}

void Student::print() const {
    printf("[%s] %s\nThe Average score is %.1f\n",sid.c_str(),name.c_str(),getAvg());
}

int main(){
    Student s;

    cin >> s.sid;
    cin.ignore();
    s.inputScores();
    cin.ignore();
    getline(cin,s.name);

    s.print();
    return 0;
}



//g++ -o program Main.cpp 