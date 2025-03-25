package J014;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J014();
    }
    void J014(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        int income; //연봉(원단위)
        double tax; //소득세(원단위)

        income  = s.nextInt();
    
    
        //kor
        if(income>=80000000) tax = (double)income * (37/100.0);
        else if(income >= 40000000) tax = (double)income * (28/100.0);
        else if(income >= 10000000) tax = (double)income * (19/100.0);
        else tax = (double)income * (9.5/100.0);



        System.out.printf("%d\n",(int)tax);
    

        s.close();

    }
}