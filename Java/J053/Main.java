package J053;

import java.util.Scanner;

public class Main {

    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J053();
    }
    void J053(){

        Scanner s = new Scanner(System.in);
        Score score = new Score(5);

        int num = s.nextInt();

        score.getScore();
        score.printScore(num);

    }
}
class Score{

    Scanner s = new Scanner(System.in);

    int Scount; //학생 인원수
    char[] grade;
    int[][] jumsu; //점수를 저장하는 2차원 배열
    double[] sum_student; //학생별 총점
    double[] average_student; //학생 평균

    public Score(int count){ //생성자
        Scount = count;
        grade = new char[Scount];
        jumsu = new int[Scount][3];
        sum_student = new double[Scount];
        average_student = new double[Scount];

    }

    public void getScore(){//점수 입력 및 총점과 평균 계산
        for(int i=0; i<Scount; i++){
            for(int j=0; j<3; j++){
                jumsu[i][j] = s.nextInt();
                sum_student[i]+= jumsu[i][j];
            }
            average_student[i] = sum_student[i] / 3.0;
            if(average_student[i] >= 90) grade[i] = 'A';
            else if(average_student[i] >=80) grade[i] = 'B';
            else if(average_student[i] >=70) grade[i] = 'C';
            else if(average_student[i] >=60) grade[i] = 'D';
            else grade[i] = 'F';
        }
    }
    public void printScore(){

        for(int i=0; i<5; i++){
            System.out.printf("Student(%d)'s Score : ",i+1);
            for(int j=0; j<3; j++){
                System.out.printf("%d ", jumsu[i][j]);
            }

            System.out.printf("Sum : %.1f\n",sum_student[i]);
            System.out.printf("Average : %.1f\n",average_student[i]);
            System.out.printf("Grade : %s\n",grade[i]);
            System.out.printf("\n");

        }
    }
    public void printScore(int num){
        if(num < 0 || num >= Scount){
            System.out.println("Invalid student number.");
            return;
        }
    
        System.out.printf("Student(%d)'s Score : ", num);
        int couNum = num -1;
        for(int j = 0; j < 3; j++){
            System.out.printf("%d ", jumsu[couNum][j]);
        }
    
        System.out.printf("Sum : %.1f\n", sum_student[couNum]);
        System.out.printf("Average : %.1f\n", average_student[couNum]);
        System.out.printf("Grade : %s\n", grade[couNum]);
        System.out.printf("\n");
    }
    

 

};

