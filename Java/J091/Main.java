import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        // 파일에서 스캐너로 입력
        Scanner sc = new Scanner(new File("data.txt"));

        // 학생별 점수를 저장할 HashMap
        HashMap<String, List<Integer>> map = new HashMap<>();

        // 전체 과목 합계
        int totalKor = 0, totalEng = 0, totalMat = 0;

        while (sc.hasNext()) {
            String name = sc.next();
            if (name.equals("q")) break;

            int kor = sc.nextInt();
            int eng = sc.nextInt();
            int mat = sc.nextInt();

            // 값 저장
            List<Integer> scores = new ArrayList<>();
            scores.add(kor);
            scores.add(eng);
            scores.add(mat);
            map.put(name, scores);

            // 과목 총합 누적
            totalKor += kor;
            totalEng += eng;
            totalMat += mat;

            // 개인 평균 계산
            int total = kor + eng + mat;
            double avg = total / 3.0;

        }

        // 과목별 총합 및 평균 출력
        int studentCount = map.size();
        System.out.println("Subject Totals and Averages:");
        System.out.println("Korean : " + totalKor + ", avg: " + (totalKor * 1.0 / studentCount));
        System.out.println("English: " + totalEng + ", avg: " + (totalEng * 1.0 / studentCount));
        System.out.println("Math   : " + totalMat + ", avg: " + (totalMat * 1.0 / studentCount));

        // 학생별 점수 출력
        System.out.println("\nStudent Scores:");
        for (String name : map.keySet()) {
            List<Integer> scores = map.get(name);
            int total = scores.get(0) + scores.get(1) + scores.get(2);
            double avg = total / 3.0;
            System.out.printf("%s: total = %d, averages = %.1f%n", name, total, avg);
        }

    }
}
