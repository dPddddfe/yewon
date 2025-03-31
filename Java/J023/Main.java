package J023;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J023();
    }
    void J023(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        int count=0;
        int number=0;
        int totalsum=0;
        double average=0;


        count = s.nextInt();


        for(int i=0;i<count;i++){
            number = s.nextInt();
            totalsum += number;
        }

        average = (double) totalsum / (double) count;


        System.out.printf("%d %.1f\n",totalsum, average);
        s.close();

    }
}