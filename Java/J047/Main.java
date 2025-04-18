package J047;

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J046();
    }
    void J046(){

        Scanner s = new Scanner(System.in);

        String string1 = s.nextLine();
        String string2;

        // if(MyString.whichFirst(string1, string2) == 1){

        //     System.out.printf("1 %s\n",string1);
        // }
        // else if(MyString.whichFirst(string1, string2) == 2){
        //     System.out.printf("2 %s\n",string2);

        // }
        string2 = MyString.removeSpace(string1);

        System.out.printf("%s\n",string2);

        s.close();
    }
}
class MyString{

    public static int whichFirst(String str1, String str2){

        int win=0;

        if(str1.compareToIgnoreCase(str2) < 0) win = 1;
        else if(str2.compareToIgnoreCase(str1) < 0) win = 2;

        return win;
    }

    public static String removeSpace(String str){
        String newSting;
        newSting = str.replace(" ", "");

        return newSting;
    }


};

