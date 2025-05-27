import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

public class Main {
    public static void main(String[] args) {
        String fileName = "data.txt"; // 입력 파일 이름
        Scanner inputStream = null;

        try {
            inputStream = new Scanner(new File(fileName));
        } catch (FileNotFoundException e) {
            System.out.println("Error opening the file " + fileName);
            System.exit(0);
        }

        int count = 0;
        int bmicount = 0;

        while (inputStream.hasNextInt()) {
            int cm = inputStream.nextInt();  // cm 단위
            int kg = inputStream.nextInt();  // kg 단위

            double m = cm / 100.0; // m 단위 변환
            double bmi = kg / (m * m);

            count++;
            if (bmi >= 25.0) {
                bmicount++;
            }
        }

        inputStream.close();

        // 비율 계산
        int per = (int) Math.round((100.0 * bmicount) / count);

        // 출력
        System.out.println("All " + count + " persons.");
        System.out.println("Total overweight persons: " + bmicount + " (" + per + "%)");
    }
}
