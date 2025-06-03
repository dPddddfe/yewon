package Step1;
import java.util.ArrayList;
import java.util.Scanner;

public class BookCRUD {
    ArrayList<Book> list;

    public BookCRUD() {
        list = new ArrayList<Book>();
    }
    public void addBook(){
        String name, author;
        int price, year;
        Scanner s = new Scanner (System. in) ;
        System.out.print("name > ");
        name = s.next();
        s.nextLine();
        System.out .print ("author > ");
        author = s.nextLine();
        System.out.print("price > ");
        price = s.nextInt();
        System.out.print("year > ");
        year = s.nextInt();
        Book new_book = new Book(name, author, price, year);
        list.add(new_book);
    }
    

    public void editBook() {
        Scanner s = new Scanner (System. in) ;

        listBook();
        System.out.print("edit number of Book : ");
        int index = s.nextInt() - 1;
        s.nextLine();

        if (index < 0 || index >= list.size()) {
            System.out.print("retry !!\n");
            return;
        }

        Book book = list.get(index);

        System.out.print("new name : ");
        String name = s.nextLine();
        System.out.print("new author : ");
        String author = s.nextLine();
        System.out.print("new price : ");
        int price = s.nextInt();
        System.out.print("new year : ");
        int year = s.nextInt();


        book.setName(name);
        book.setAuthor(author);
        book.setPrice(price);
        book.setYear(year);
        
        System.out.print("Complete ! \n");
    }

    public void listBook(){
        for (int i=0; i<list.size(); i++)
            System.out.printf("%-3d %s\n", i + 1, list.get(i).toString());
    }
    public void deleteBook(){
        Scanner s = new Scanner (System. in) ;
        listBook();
        System.out.print("delete number of Book : ");
        int index = s.nextInt() - 1;

        if (index < 0 || index >= list.size()) {
            System.out.print("retry !!\n");
            return;
        }

        list.remove(index);
        System.out.print("Complete ! \n");
    }
}