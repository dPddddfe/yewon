package J063;

import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Main Pstudio = new Main();
        Pstudio.run();
    }
    public void run() {
        int menu, quit=0;
        Scanner s = new Scanner(System.in);
        TodoCRUD manager = new TodoCRUD();
        while(true){
            System.out.println("Menu> 1 Add 2 Edit 3 List 4 Delete O Exit");
            menu = s.nextInt();
            switch(menu) {
                case 1: manager. addTodo(); break;
                case 2: manager. editTodo(); break;
                case 3: manager. listTodo(); break;
                case 4: manager. deleteTodo(); break;
                default: quit = 1;
            }
            if(quit == 1) break;
        }
    }
}

class Todo {
    private String title;    //책이름
    private String content;  //저자
    private String deadline;  //가격
    private String category;  //출간년도

    public Todo(String title, String content, String deadline, String category) {
        this.title = title;
        this.content = content;
        this.deadline = deadline;
        this.category = category;
    }

    public Todo(String title) {
        this.title = title;

    }

    public String getTitle() { return title; }
    public String getContent() { return content; }
    public String getDeadline() { return deadline; }
    public String getCategory() { return category; }

    public void setTitle(String title) { this.title = title; }
    public void setContent(String content) { this.content = content; }
    public void setDeadline(String deadline) { this.deadline = deadline; }
    public void setCategory(String category) { this.category = category; }

    @Override
    public String toString() {
        return String.format("[%s]%s - %s {~%s}",category,  title,content,deadline);
    }
}
