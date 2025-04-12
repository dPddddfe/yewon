package J035;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J035();
    }
    void J035(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        String birth;
        int ynum=0;
        int total=0;

        birth = s.next();

        String year = birth.substring(0, 4);
        String mon = birth.substring(4, 6);
        String day = birth.substring(6, 8);

        for(int i=0; i<year.length(); i++){
            ynum += Integer.parseInt(year.substring(i, i+1));
        }
        int m = Integer.parseInt(mon);
        int d = Integer.parseInt(day);

        total = ynum + m + d;

        System.out.printf("%d\n",total);
        s.close();
    }
}
