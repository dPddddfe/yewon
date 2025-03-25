#include <iostream>
using namespace std;

struct st_score{
    int kor, eng, math;
    int total;
    double average;
};

int main(){
    st_score s;

    cin >> s.kor;
    cin >> s.eng;
    cin >> s.math;

    s.total = s.kor + s.eng + s.math;
    s.average = (double)s.total / 3.0;

    printf("%d %.1f\n",s.total,s.average);

    //kor
    cout << "Korean - ";
    if(s.kor>70) {
        cout<<"Pass"<<endl;
    }else {
        cout<<"Fail"<<endl;
    }

    //eng
    cout << "English - ";
    if(s.eng>70) {
        cout<<"Pass"<<endl;
    }else {
        cout<<"Fail"<<endl;
    }

    //math
    cout << "Math - ";
    if(s.math>70) {
        cout<<"Pass"<<endl;
    }else {
        cout<<"Fail"<<endl;
    }

    return 0;
}