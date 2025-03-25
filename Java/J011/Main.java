package J011;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J011();
    }
    void J011(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        int height,weight;
        double bmi;

        height = s.nextInt();
        weight = s.nextInt();

        bmi = weight / ((height*0.01) * (height * 0.01));

        if(bmi >=25 ) System.out.printf("Yes\n");
        else System.out.printf("No\n");

        s.close();

    }
}