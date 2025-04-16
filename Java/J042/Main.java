package J042;

import java.util.Scanner;
import java.util.Random;

public class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J042();
    }
    void J042(){

        Scanner s = new Scanner(System.in);

        Lotto lotto = new Lotto();

        
        lotto.printNumbers();
        lotto.remake();

        s.close();
    }
}
class Lotto{
    int[] rannumber = new int[6];
    int[] usernumber = new int[6];
    Scanner s = new Scanner(System.in);

    public Lotto(){
        Random ran = new Random();

        for(int i=0; i<6; i++){
            rannumber[i]= ran.nextInt(45)+1;
            remakeAuto(i);
        }

    }
    public void printNumbers(){

        System.out.printf("Lotto Number : ");

        for(int i =0; i<6; i++){
            System.out.printf("%d ", rannumber[i]);
    
        }
        System.out.printf("\n");
    }
    public void remakeAuto(int n){

        Random ran = new Random();
        boolean TF;

        do {
            TF = false;
            for (int j = 0; j < n; j++) {
                if (rannumber[j] == rannumber[n]) {
                    rannumber[n] = ran.nextInt(45) + 1;
                    TF = true;
                    break;
                }
            }
        } while (TF);
    }
    public void remake(){

        System.out.printf("Input Your Number : ");

        for(int i=0; i<6; i++){
            usernumber[i] = s.nextInt();
        }

        System.out.printf("Your Number : ");

        for(int i=0; i<6; i++){
            System.out.printf("%d ", usernumber[i]);
        }
        System.out.printf("\n");

    }


};

