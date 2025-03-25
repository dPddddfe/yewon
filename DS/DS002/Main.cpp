#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double x1, y1;
    double x2, y2;
    double l=0;

    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;

    l = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));

    printf("%.1f\n", l);

    return 0;
}