package J052;

import java.util.Scanner;
import java.util.Random;

public class Main {
    public static void main(String[] args){
        Main pStdio = new Main();
        pStdio.J052();
    }
    void J052(){

        Scanner s = new Scanner(System.in);
        Score score = new Score(5);


        int lenght, amount;
        lenght = s.nextInt();
        amount = s.nextInt();

        score.make(lenght, amount);

    }
}
class Score{

    Scanner s = new Scanner(System.in);

    int count; //학생 인원수
    int[][] jumsu; //점수를 저장하는 2차원 배열
    int[] sum_student; //학생별 총점
    double[] average_student; //학생별 평균

    public Score(int count){ //생성자
        count = 0;
    }

    public void getScore(){//점수 입력 및 총점과 평균 계산
        for(int i=0; i<count; i++){
            for(int j=0; j<3; j++){
                jumsu[i][j] = s.nextInt();
                sum_student[i]+= jumsu[i][j];
            }
            average_student[i] = Double.sum_student[i] / 3.0;
        }
    }
    public void printScore(){

        for(int i=0; i<5; i++){
            System.out.printf("Student(%d)'s Score : ",i+1);
            for(int j=0; j<3; j++){
                System.out.printf("%d ", jumsu[i][j]);
            }
            System.out.printf("\nStudent(%d)'s Sum : %d",i+1);

            System.out.printf("\n");

        }
    }

 

};

