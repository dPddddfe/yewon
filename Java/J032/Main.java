package J032;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J032();
    }
    void J032(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        String str;
        String reverse = "";

        str = s.nextLine();

        for(int i = str.length()-1; i>= 0; i--){
            reverse = reverse + str.charAt(i);
        }
        System.out.printf("%s\n",reverse);
        s.close();
    }
}
