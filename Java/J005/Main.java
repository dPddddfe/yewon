package J005;


import static java.lang.Math.*;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J005();
    }
    void J005(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        int month, day;
        int day_count=0;

        month = s.nextInt();
        day = s.nextInt();


        int month_day[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

        for(int i=0; i< month-1; i++){
            day_count += month_day[i];
        }
    


        System.out.printf("%d\n",day_count + day);

        s.close();

    }
}