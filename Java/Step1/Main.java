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
        BookCRUD manager = new BookCRUD();
        while(true){
            System.out.println("Menu> 1 Add 2 Edit 3 List 4 Delete O Exit");
            menu = s.nextInt();
            switch(menu) {
                case 1: manager. addBook(); break;
                case 2: manager. editBook(); break;
                case 3: manager. listBook(); break;
                case 4: manager. deleteBook(); break;
                default: quit = 1;
            }
            if(quit == 1) break;
        }
    }
}

class Book {
    private String name;    //책이름
    private String author;  //저자
    private int price;  //가격
    private int year;  //출간년도

    public Book(String name, String author, int price, int year) {
        this.name = name;
        this.author = author;
        this.price = price;
        this.year = year;
    }

    public Book(String name) {
        this.name = name;

    }

    public String getName() { return name; }
    public String getAuthor() { return author; }
    public int getPrice() { return price; }
    public int getYear() { return year; }

    public void setName(String name) { this.name = name; }
    public void setAuthor(String author) { this.author = author; }
    public void setPrice(int price) { this.price = price; }
    public void setYear(int year) { this.year = year; }

    @Override
    public String toString() {
        return String.format("[%s](%d) - %s $%d", name, year, author,price);
    }
}
