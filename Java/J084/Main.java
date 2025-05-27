import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("name.txt"));

        int count = 0;
        String longest = "";
        String shortest = null;

        while (sc.hasNextLine()) {
            String line = sc.nextLine().trim();
            if (line.isEmpty()) continue; // 빈 줄 무시

            count++;

            if (shortest == null || line.length() < shortest.length()) {
                shortest = line;
            }

            if (line.length() > longest.length()) {
                longest = line;
            }
        }

        System.out.println("Count : " + count);
        System.out.println("Longest name : " + longest);
        System.out.println("Shortest name : " + shortest);
    }
}
