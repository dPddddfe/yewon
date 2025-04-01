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

};
double Student::getAvg() const{
    int kor,eng,math;
    int total;
    double aver;

    cin >> kor;
    cin >> eng;
    cin >> math;

    total = kor + eng + math;
    aver = (double) total / 3.0;
            
    return aver;
}

int main(){
    Student s;
    double aver;
    int kor,eng,math;
    
    cin >> s.sid;
    aver = s.getAvg();
    getline(cin,s.name);

    printf("[%s] %s\nThe Average score is %.1f%",s.sid.c_str(),s.name.c_str(),aver);

    return 0;
}



//g++ -o program Main.cpp 