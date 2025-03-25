package J002;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J002();
    }
    void J002(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        double c_degree;
        double f_degree;

        c_degree = s.nextDouble();
        f_degree = c_degree * 1.8 + 32;

        System.out.printf("%.1f\n",f_degree);

        s.close();

    }
}