package J031;

import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J031();
    }
    void J031(){

        Scanner s = new Scanner(System.in);

        //변수 설정
        String userid;
        String password;
        String name;

        userid = s.next();
        password = s.next();
        name = s.next();
        if(password.length() < 3 ){
            System.out.printf("Error! password is too short.\n");
        }
        else{
            int last = password.length();
            String new_password = password.substring(0,2);

    
            System.out.printf("User Id: %s\n",userid);

            System.out.printf("Password: %s",new_password);
            for(int i = 2; i<last; i++){
                System.out.printf("*");
            }
            System.out.printf("\nUser Name: %s\n",name);
            s.close();
        }

    }
}
