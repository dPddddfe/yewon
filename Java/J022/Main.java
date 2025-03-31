package J022;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J022();
    }
    void J022(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        double m2_area;
        double pyung_area;
        int count1=0;
        int count2=0;
        int count3=0;
        int count4=0;

        for(int i=0;i<10;i++){

            m2_area = s.nextDouble();
            pyung_area = m2_area / 3.305;

            if(pyung_area >= 50) count4++;
            else if(pyung_area >= 30) count3++;
            else if(pyung_area >= 15) count2++;
            else if(pyung_area < 15) count1++;
        }


        System.out.printf("small - %d\n",count1);
        System.out.printf("normal - %d\n",count2);
        System.out.printf("large - %d\n",count3);
        System.out.printf("huge - %d\n",count4);



        s.close();

    }
}