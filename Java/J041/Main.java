package J041;

import java.util.Scanner;
import java.util.Random;

public class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J041();
    }
    void J041(){

        Scanner s = new Scanner(System.in);

        Lotto lotto = new Lotto();

        
        lotto.printNumbers();

        s.close();
    }
}
class Lotto{
    int[] number = new int[6];;

    public Lotto(){
        Random ran = new Random();

        for(int i=0; i<6; i++){
            number[i]= ran.nextInt(45)+1;
            remakeAuto(i);
        }

    }
    public void printNumbers(){

        System.out.printf("Lotto Number : ");

        for(int i =0; i<6; i++){
            System.out.printf("%d ", number[i]);
    
        }
        System.out.printf("\n");
    }
    public void remakeAuto(int n){
        for(int j =0; j<n;j++){
            Random ran = new Random();
            if(number[j]==number[n]){
                number[n]= ran.nextInt();
            }
        }
    }


};

