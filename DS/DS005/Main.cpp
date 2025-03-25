#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

    //변수 설정
    string alphabet;
    getline(cin,alphabet);

    int count[26] = {0};
    int blanks = 0;
    
    for(char ch : alphabet){
        if(isalpha(ch)){
            count[toupper(ch) - 'A']++;
        } else {
            blanks ++;
        }
    }
    cout << "blanks : " << blanks << endl;
    for(int i =0; i<26; i++){
        if(count[i] >0){
            cout << char('A' + i) << " : "<<count[i] << endl;
        }
    }
    

    return 0;
}