package J062;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main Pstudio = new Main();
        Pstudio.run();
    }
    public void run() {
        int menu, quit=0;
        Scanner s = new Scanner(System.in);
        WordCRUD manager = new WordCRUD();
        while(true){
            System.out.println("Menu> 1 Add 2 Edit 3 List 4 Delete O Exit");
            menu = s.nextInt();
            switch(menu) {
                case 1: manager. addWord(); break;
                case 2: manager. editWord(); break;
                case 3: manager. listWord(); break;
                case 4: manager. deleteWord(); break;
                default: quit = 1;
            }
            if(quit == 1) break;
        }
    }
}

class Word {
    private String english;
    private String korean;
    private int level;

    public Word(String english, String korean, int level) {
        this.english = english;
        this.korean = korean;
        this.level = level;
    }

    public String getEnglish() { return english; }
    public String getKorean() { return korean; }
    public int getLevel() { return level; }

    public void setEnglish(String english) { this.english = english; }
    public void setKorean(String korean) { this.korean = korean; }
    public void setLevel(int level) { this.level = level; }

    @Override
    public String toString() {
        return String.format("(%d) %s : %s", level, english, korean);
    }
}
