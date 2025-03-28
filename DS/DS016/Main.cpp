#include <iostream>
#include <string>

using namespace std;

char* prefix(char* sen1, char* sen2, char* sen3);

int main() {


    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    char* sen1 = new char[str1.length() + 1];
    char* sen2 = new char[str2.length() + 1];
    char* sen3 = new char[str3.length() + 1];



    strcpy(sen1, str1.c_str());
    strcpy(sen2, str2.c_str());
    strcpy(sen3, str3.c_str());


    char* result = prefix(sen1, sen2, sen3);
    
    cout << result << endl;

    delete[] sen1;
    delete[] sen2;
    delete[] sen3;
    delete[] result;

    return 0;
}

char* prefix(char* sen1, char* sen2, char* sen3) {
    int i = 0;

    while (sen1[i] != '\0' && sen2[i] != '\0' && sen3[i] != '\0') {
        if (sen1[i] == sen2[i] && sen2[i] == sen3[i]) {
            i++;
        } else {
            break;
        }
    }

    if (i == 0) {
        char* x = new char[2];
        x[0] = '?';
        x[1] = '\0';
        return x;
    }

    char* x = new char[i + 1];
    strncpy(x, sen1, i);
    x[i] = '\0';

    return x;
}
 