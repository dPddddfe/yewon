package J063;
import java.util.ArrayList;
import java.util.Scanner;

public class TodoCRUD {
    ArrayList<Todo> list;

    public TodoCRUD() {
        list = new ArrayList<Todo>();
    }
    public void addTodo(){
        String title, content ,category, deadline;
        Scanner s = new Scanner (System. in) ;
        System.out.print("title > ");
        title = s.next();
        s.nextLine();
        System.out .print ("content > ");
        content = s.nextLine();
        System.out.print("deadline > ");
        deadline = s.nextLine();
        System.out.print("category > ");
        category = s.nextLine();
        Todo new_todo = new Todo(title, content, deadline, category);
        list.add(new_todo);
    }
    

    public void editTodo() {
        Scanner s = new Scanner (System. in) ;

        listTodo();
        System.out.print("edit number of todo : ");
        int index = s.nextInt() - 1;
        s.nextLine();

        if (index < 0 || index >= list.size()) {
            System.out.print("retry !!\n");
            return;
        }

        Todo todo = list.get(index);

        System.out.print("new title : ");
        String title = s.nextLine();
        System.out.print("new content : ");
        String content = s.nextLine();
        System.out.print("new deadline : ");
        String deadline = s.nextLine();
        System.out.print("new category : ");
        String category = s.nextLine();


        todo.setTitle(title);
        todo.setContent(content);
        todo.setDeadline(deadline);
        todo.setCategory(category);
        
        System.out.print("Complete ! \n");
    }

    public void listTodo(){
        for (int i=0; i<list.size(); i++)
            System.out.printf("%-3d %s\n", i + 1, list.get(i).toString());
    }
    public void deleteTodo(){
        Scanner s = new Scanner (System. in) ;
        listTodo();
        System.out.print("delete number of todo : ");
        int index = s.nextInt() - 1;

        if (index < 0 || index >= list.size()) {
            System.out.print("retry !!\n");
            return;
        }

        list.remove(index);
        System.out.print("Complete ! \n");
    }
}