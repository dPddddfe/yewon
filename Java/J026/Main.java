package J026;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J026();
    }
    void J026(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        int number;
        int max_num=0, min_num=100;
        int count;

        count = s.nextInt();

        for(int i=0;i<count;i++){
            number = s.nextInt();
            if(number > max_num){
                max_num = number;
            }
            if(number < min_num){
                min_num = number;
            }
        }

        System.out.printf("가장 큰 수 %d\n가장 작은 수 %d\n",max_num, min_num);
        s.close();

    }
}