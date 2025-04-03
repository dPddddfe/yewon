/*
쇼핑몰에서 상품을 관리하기 위해 
클래스를 정의하고 상품추가 및 목록을 출력하세요
클래스 생성 후 코딩
함수 1개이상 생성
포인터 변수 사용

Product class(상품 1개의 정보를 다루는 클래스)
멤버 변수 : 상품명, 원래 가격(포인터), 할인율, 제조사 크기
멤버 메소드 : 상품 입력(상품명(공백포함), 가격, 할인률, 용량,제조사(공백 미포함)
상품출력, 할인율에 따른 판매가격 계산기

KIT KAT
2500 10 85g Kitkat

Sunkist Candy
3980 5 317g HAITAI

Chocolate mix bar
2700 0 34g MARS
*/

#include <iostream>
using namespace std;
void menuPrint(); //메뉴

class Product{
    private:
        string name; //상품명
        int* money; //가격
        int sale; //할인
        string size; //크기
        string company; //제조사

    public:
        Product();  // 생성자
        void Add();  //상품입력
        void ListPrint(); //목록 출력
        int Sale(); //할인율 계산기
};

Product::Product() {
    money = new int(0);
}

void menuPrint(){
    cout << "1. Add 2.List 3.Quit > ";

}

void Product::Add(){
    cin.ignore();
    getline(cin,name); //이름
    cin >> *money;   //가격
    cin >> sale; //할인
    cin >> size; //크기
    cin >> company; //제조사
}

void Product::ListPrint(){
    if(sale != 0) sale = sale * (-1);
    printf("%d (%d%%) %s %s %s\n",*money,sale,name.c_str(),size.c_str(), company.c_str());
}

int  Product::Sale(){

    return *money - (*money * sale / 100);

}


int main(){
    Product P[50];
    int count = 0;

    while (true) {
        menuPrint();
        int num;
        cin >> num;

        switch (num) {
            case 1:
                P[count].Add();
                count++;
                break;

            case 2:
                for (int i = 0; i < count; i++) {
                    P[i].ListPrint();
                }
                break;

            case 3:
                return 0;

            default:
                return 0;
        }
    }
}



//g++ -o program Main.cpp 