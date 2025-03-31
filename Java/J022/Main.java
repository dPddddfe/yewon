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

        m2_area = s.nextDouble();
        pyung_area = m2_area / 3.305;

        if(pyung_area >= 50) System.out.printf("%.1f\nhuge\n",pyung_area);
        else if(pyung_area >= 30) System.out.printf("%.1f\nlarge\n",pyung_area);
        else if(pyung_area >= 15) System.out.printf("%.1f\nnormal\n",pyung_area);
        else if(pyung_area < 15) System.out.printf("%.1f\nsmall\n",pyung_area);


        s.close();

    }
}