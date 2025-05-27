import java.util.*;
import java.io.*;

public class Main {
    static class Score {
        String name;
        int kor, eng, mat, sum;
        double avg;

        Score(String name, int kor, int eng, int mat) {
            this.name = name;
            this.kor = kor;
            this.eng = eng;
            this.mat = mat;
            this.sum = kor + eng + mat;
            this.avg = sum / 3.0;
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("data.txt"));
        ArrayList<Score> list = new ArrayList<>();

        while (sc.hasNext()) {
            String name = sc.next();
            int kor = sc.nextInt();
            int eng = sc.nextInt();
            int mat = sc.nextInt();
            list.add(new Score(name, kor, eng, mat));
        }

        int totalKor = 0, totalEng = 0, totalMat = 0;
        Score top = list.get(0);

        for (Score s : list) {
            totalKor += s.kor;
            totalEng += s.eng;
            totalMat += s.mat;
            if (s.avg > top.avg) top = s;
        }

        System.out.println("Subject Totals and Averages:");
        System.out.println("Korean: " + totalKor + ", avg: " + totalKor / list.size());
        System.out.println("English: " + totalEng + ", avg: " + totalEng / list.size());
        System.out.println("Math: " + totalMat + ", avg: " + totalMat / list.size());

        System.out.println("\nStudent Scores:");
        for (Score s : list) {
            System.out.println(s.name + ": " + s.sum + ", " + String.format("%.2f", s.avg));
        }

        System.out.println("\nTop student: " + top.name + ", avg=" + String.format("%.2f", top.avg));
    }
}
