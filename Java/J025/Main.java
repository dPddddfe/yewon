package J025;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J025();
    }
    void J025(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        int[] monthdays = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        int month, day;
        int day_count=0;

        month = s.nextInt();
        day = s.nextInt();

        for(int i=0; i< month-1; i++){
            day_count += monthdays[i];
        }
        
    
        if(month < 13 && monthdays[month-1] > day){
            System.out.printf("%d\n",day_count + day);
        }
        else{
            System.out.printf("Wrong date!\n");
        }

        s.close();

    }
}