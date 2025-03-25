#include <iostream>
#include <string>
#include <cctype>
using namespace std;

struct st_score{
    string title;
    int takenum;
    int get_score;
    string grade;
};


int main(){

    st_score s[3];
    double GPA;
    int total;
    double gradescore[3];
    double GPAtotal;

    //변수 설정
    for(int i=0; i<3; i++){
        cin >> s[i].title;
        cin >> s[i].takenum;
        cin >> s[i].get_score;


        if(s[i].get_score >= 95) gradescore[i] = 4.5;
        else if(s[i].get_score >= 90) gradescore[i] = 4.0;
        else if(s[i].get_score >= 85) gradescore[i] = 3.5;
        else if(s[i].get_score >= 80) gradescore[i] = 3.0;
        else if(s[i].get_score >= 75) gradescore[i] = 2.5;
        else if(s[i].get_score >= 70) gradescore[i] = 2.0;
        else if(s[i].get_score >= 65) gradescore[i] = 1.5;
        else if(s[i].get_score >= 60) gradescore[i] = 1.0;
        else if(s[i].get_score <= 60) gradescore[i] = 0;
        else printf("error");

        if(s[i].get_score >= 95) s[i].grade = "A+";
        else if(s[i].get_score >= 90) s[i].grade = "A0";
        else if(s[i].get_score >= 85) s[i].grade = "B+";
        else if(s[i].get_score >= 80) s[i].grade = "B0";
        else if(s[i].get_score >= 75) s[i].grade = "C+";
        else if(s[i].get_score >= 70) s[i].grade = "C0";
        else if(s[i].get_score >= 65) s[i].grade = "D+";
        else if(s[i].get_score >= 60) s[i].grade = "D0";
        else if(s[i].get_score <= 60) s[i].grade = "F";
        else printf("error");
    }
    

    for(int i = 0; i<3; i++){

        total += s[i].takenum;
        GPAtotal += ( s[i].takenum * gradescore[i]);

    }
    for(int i = 0; i<3; i++){

        GPA = GPAtotal / total;
        printf("%s(%d) %s %.1f\n",s[i].title.c_str(), s[i].takenum, s[i].grade.c_str(),gradescore[i]);
    }

    printf("Total Credits %d, GPA %.2f",total, GPA);


    

    return 0;
}