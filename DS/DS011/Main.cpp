#include <iostream>
using namespace std;


int main(){

    int count;
    int max_num =0;
    int total=0;

    cin >> count;

    int* num = new int[count];  // 동적으로 배열 할당


    //변수 설정
    for(int i=0; i<count; i++){
        cin >> num[i];

        if(num[i] > max_num) max_num = num[i];
        total += num[i];
    }
    

    printf("%d %d\n",total, max_num);

    return 0;
}