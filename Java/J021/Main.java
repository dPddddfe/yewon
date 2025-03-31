package J021;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J021();
    }
    void J021(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        int height,weight;
        double bmi;
        int people=0;
        int bmicount=0;

        people = s.nextInt();

        for(int i =0; i<people; i++){
            height = s.nextInt();
            weight = s.nextInt();

            bmi = weight / ((height*0.01) * (height * 0.01));

            if(bmi > 25) bmicount ++;
        }

        System.out.printf("%d\n",bmicount);

        s.close();

    }
}