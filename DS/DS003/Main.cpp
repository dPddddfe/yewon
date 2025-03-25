#include <iostream>
using namespace std;

int main(){

    //변수 설정
    int month, day;
    int day_count=0;

    cin >> month;
    cin >> day;

    int month_day[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    for(int i=0; i< month-1; i++){
        day_count += month_day[i];
    }
    


    printf("%d\n",day_count + day);

    return 0;
}