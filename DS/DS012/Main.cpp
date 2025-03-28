#include <iostream>
using namespace std;

struct st_score{
    string title;
    int money;
    string made;

};

int main(){

    st_score s1,s2;

    cin >> s1.title >> s1.money >>s1.made;
    cin >> s2.title >> s2.money>>s2.made;


    //변수 설정
    if(s1.title == s2.title && s1.money == s2.money && s1.made == s2.made ){
        printf("%s is equal\n",s1.title.c_str());
    }
    else printf("%s and %s is not equal\n", s1.title.c_str(), s2.title.c_str());

    return 0;
}