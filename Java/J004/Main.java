package J004;

import static java.lang.Math.*;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J004();
    }
    void J004(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        double x1, y1;
        double x2, y2;
        double l=0;

        x1 = s.nextDouble();
        y1 = s.nextDouble();
        x2 = s.nextDouble();
        y2 = s.nextDouble();
        l = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));

        System.out.printf("%.1f\n",l);

        s.close();

    }
}