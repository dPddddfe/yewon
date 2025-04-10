package J033;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J033();
    }
    void J033(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        int count;
        String name;
        String longest = "";
        String shortest = null;

        count = s.nextInt();
        s.nextLine();

        for(int i = 0; i<count; i++){
            name = s.nextLine();

            if(longest.length() < name.length()){
                longest = name;
            }
            if(shortest == null || shortest.length() > name.length()){
                shortest = name;
            }
        }
        System.out.printf("Longest: %s\n",longest);
        System.out.printf("Shortest: %s\n",shortest);
        s.close();
    }
}
