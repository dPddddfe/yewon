package J024;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J024();
    }
    void J024(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        int[] numbers = new int[10];
        int first=0;
        int second=0;
        int second_max_index=0;


        for(int i=0;i<10;i++){
            numbers[i] = s.nextInt();
        }

        for(int i=0;i<10;i++){
            if(numbers[i] > first){
                second = first;
                if(second == first) second_max_index = i;
                first = numbers[i];
            }

            else if(numbers[i] < first && second < numbers[i]){
                second = numbers[i];
                second_max_index = i;
            }
        }

        System.out.printf("[%d] %d\n",second_max_index, second);
        s.close();

    }
}