package J034;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J034();
    }
    void J034(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        String[] usernames = {"kim","lee","park","hong","choi"};
        String[] passwords = {"1111","1234","3456","3535","7777"};

        String name;
        String pass;
        int check=0;
        
        name = s.next();
        pass = s.next();

        for(int i = 0; i<5; i++){

            if(usernames[i].equals(name)){
                if(passwords[i].equals(pass)){
                    System.out.printf("Login OK!\n");
                    check=1;
                    break;
                }
                else if(usernames[i].equals(name) && !passwords[i].equals(pass)){
                    System.out.printf("Incorrect password!\n");
                    check=1;
                    break;
                }
            }
        }
        if(check == 0){
            System.out.printf("No user!\n");
        }
        s.close();
    }
}
