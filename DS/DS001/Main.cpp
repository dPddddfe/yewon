#include <iostream>
using namespace std;

int main(){

    //변수 설정
    int height,weight;
    double bmi;

    cin >> height;
    cin >> weight;

    bmi = weight / ((height*0.01) * (height * 0.01));

    if(bmi >= 25) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}