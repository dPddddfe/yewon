package J003;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J003();
    }
    void J003(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        double m2_area;
        double pyung_area;

        m2_area = s.nextDouble();
        pyung_area = m2_area / 3.305;

        System.out.printf("%.1f\n",pyung_area);

        s.close();

    }
}