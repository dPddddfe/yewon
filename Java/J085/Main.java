import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("data.txt"));

        int upper = 0;
        int lower = 0;
        int spaces = 0;

        while (sc.hasNextLine()) {
            String line = sc.nextLine();

            for (int i = 0; i < line.length(); i++) {
                char ch = line.charAt(i);
                if (Character.isUpperCase(ch)) {
                    upper++;
                } else if (Character.isLowerCase(ch)) {
                    lower++;
                } else if (ch == ' ') {
                    spaces++;
                }
            }
        }

        System.out.println("A~Z - " + upper);
        System.out.println("a~z - " + lower);
        System.out.println("spaces - " + spaces);
    }
}
