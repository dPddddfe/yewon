package J051;

import java.util.Scanner;
import java.util.Random;

public class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J051();
    }
    void J051(){

        Scanner s = new Scanner(System.in);
        MakePW makePW = new MakePW();


        int lenght, amount;
        lenght = s.nextInt();
        amount = s.nextInt();

        makePW.make(lenght, amount);

    }
}
class MakePW{
    Random ran = new Random();
    int PW;

    public MakePW(){
        PW = 0;
    }

    public void make(int lenght){

        for(int i=0; i<lenght; i++){
            PW = ran.nextInt(9);
            System.out.printf("%d ", PW);
        }
    }

    public void make(int lenght, int amount){

        for(int i=0; i<amount; i++){
            for(int j=0; j<lenght; j++){
                PW = ran.nextInt(9);
                System.out.printf("%d ", PW);
            }
            System.out.printf("\n");

        }
    }

 

};

