package J015;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J015();
    }
    void J015(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        int num1, num2,num3;
        int max_num=0, min_num=0;

        num1  = s.nextInt();
        num2  = s.nextInt();
        num3  = s.nextInt();
    
        
        if(num1 >=num2 && num1 >= num3 && num2<=num3) {
            max_num = num1;
            min_num = num2;
        }
        if(num1 >= num2 && num1 >= num3 && num2>=num3) {
            max_num = num1;
            min_num = num3;
        }
        else if(num2 >= num1 && num2 >= num3 && num1<=num3) {
            max_num = num2;
            min_num = num1;
        }
        else if(num2 >= num1 && num2 >= num3 && num1>=num3) {
            max_num = num2;
            min_num = num1;
        }
        else if(num3 >= num1 && num3 >= num2 && num2<=num1) {
            max_num = num3;
            min_num = num2;
        }
        else if(num3 >= num1 && num3 >= num2 && num2>=num1) {
            max_num = num3;
            min_num = num1;
        }

        System.out.printf("%d %d\n",max_num,min_num);
    

        s.close();

    }
}