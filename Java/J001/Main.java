package J001;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J001();
    }
    void J001(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        int height,weight;
        double bmi;

        height = s.nextInt();
        weight = s.nextInt();

        bmi = weight / ((height*0.01) * (height * 0.01));

        System.out.printf("%.1f\n",bmi);

        s.close();

    }
}