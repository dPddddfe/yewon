import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
public class Main {
    public static void main (String [] args){
        String fileName = "data.txt";
        Scanner inputStream = null;
        System.out.println ("The file " + fileName +"\ncontains the following lines:\n");
        try{
            inputStream = new Scanner (new File (fileName));
        }catch (FileNotFoundException e){
            System.out.println ("Error opening the file " +fileName);System.exit (0);
        }
        int max_num = 0;
        int min_num = 100000;
        while (inputStream.hasNextInt ()){
            int num = inputStream.nextInt();
            if(num > max_num){
                max_num = num;
            }
            if(num < min_num){
                min_num = num;
            }
        }
        System.out.printf ("Maximum number: %d\n", max_num);
        System.out.printf ("Minimum number: %d\n", min_num);
        inputStream.close ();
    }
}