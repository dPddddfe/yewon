package J013;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J013();
    }
    void J013(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        int kor, eng, math;
        int total;
        double average;

        kor  = s.nextInt();
        eng  = s.nextInt();
        math = s.nextInt();

        total = kor +eng + math;
        average = (double)total / 3.0;
    
        System.out.printf("%d %.1f\n",total,average);
    
        //kor
        System.out.printf("Korean - ");
        if(kor>70) {
            System.out.printf("Pass\n");
        }else {
            System.out.printf("Fail\n");
        }
    
        //eng
        System.out.printf("English - ");
        if(eng>70) {
            System.out.printf("Pass\n");
        }else {
            System.out.printf("Fail\n");
        }
    
        //math
        System.out.printf("Math - ");
        if(math>70) {
            System.out.printf("Pass\n");
        }else {
            System.out.printf("Fail\n");
        }
    

        s.close();

    }
}