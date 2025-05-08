package J061;
import java.util.ArrayList;
import java.util.Scanner;

public class WordCRUD {
    ArrayList<Word> list;

    public WordCRUD() {
        list = new ArrayList<Word>();
    }
    public void addWord(){
        String english, korean;
        int level;
        Scanner s = new Scanner (System. in) ;
        System.out.print("English > ");
        english = s.next();
        s.nextLine();
        System.out .print ("Korean > ");
        korean = s.nextLine();
        System.out.print("Level (1-3) > ");
        level = s.nextInt();
        Word new_word = new Word(english, korean, level);
        list.add(new_word);
    }
    

    public void editWord() {
        Scanner s = new Scanner (System. in) ;

        listWord();
        System.out.print("edit number of word : ");
        int index = s.nextInt() - 1;
        s.nextLine();

        if (index < 0 || index >= list.size()) {
            System.out.print("retry !!\n");
            return;
        }

        Word word = list.get(index);

        System.out.print("new mean : ");
        String korean = s.nextLine();

        word.setKorean(korean);
        System.out.print("Complete ! \n");
    }

    public void listWord(){
        for (int i=0; i<list.size(); i++)
            System.out.printf("%-3d %s\n", i + 1, list.get(i).toString());
    }
    public void deleteWord(){
        Scanner s = new Scanner (System. in) ;
        listWord();
        System.out.print("delete number of word : ");
        int index = s.nextInt() - 1;

        if (index < 0 || index >= list.size()) {
            System.out.print("retry !!\n");
            return;
        }

        list.remove(index);
        System.out.print("Complete ! \n");
    }
}