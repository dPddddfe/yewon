#include <iostream>
using namespace std;

struct Cafe{
    string cafename;
    int manunum;
    int* rist;
};

struct Menu{
    string manuname;
    int money;
};

void addCafe(Cafe &r1);
void addMenu(Menu &m1);
void displayManu(Cafe &r1);


int main(){

    Cafe* r1 = new Cafe;
    Menu* m1 = new Menu;

    addCafe(*r1);
    cin >> r1->manunum;
    for(int i =0; i<r1->manunum; i++){
        addMenu(*m1);
        r1->rist ++;
    }
    for(int i =0; i<r1->manunum; i++){
        displayManu(*r1);
        r1->rist ++;
    }
    return 0;
}

void addCafe(Cafe &r1){
    getline(cin,r1.cafename) ;
}
void addMenu(Menu &m1){
    cin >> m1.manuname >> m1.money;
}
void displayManu(Cafe &r1){
    printf("===== %s =====\n",r1.cafename);
    printf("%s %d",r1.manunum, )
}
