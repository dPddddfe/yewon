package J071;
import java.util.*;

public class TodoCRUD implements iCRUD{
    private ArrayList<TodoItem> list;
    public TodoCRUD() {
        this.list = new ArrayList<TodoItem>();
    }

    @Override
    public int addItem() {
        String title, desc;
        Scanner sc = new Scanner(System.in);

        System.out.print("Add a Todo item\n" + "Enter the title: ");

        title = sc.nextLine().trim();;
        if (isDuplicated(title)) {
            System.out.println("Title can't be duplicated.");
            return 1;
        }

        System.out.print("Enter the detail: ");
        desc = sc.nextLine().trim();;

        TodoItem t = new TodoItem(title, desc);
        this.list.add(t);
        System.out.print("item added.\n");
        return 0;
    }

    @Override
    public int updateItem() {

        String title, desc;
        Scanner sc = new Scanner(System.in);

        System.out.print("Edit a Todo item\n" + "Enter the title of the item to edit : ");

        title = sc.nextLine().trim();

        int index = -1;
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i).getTitle().equals(title)) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            System.out.println("Not found.");
            return 1;
        }
        System.out.println(this.list.get(index));

        System.out.print("Enter the detail: ");
        desc = sc.nextLine().trim();

        TodoItem t = this.list.get(index); 
        t.setDetail(desc);
        

        System.out.print("item updated.\n");
        return 0;

    }
    @Override
    public int deleteItem() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the title of the item to delete: ");
        String title = sc.nextLine().trim();

        int index = -1;
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i).getTitle().equals(title)) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            System.out.println("Not found.");
            return 1;
        }

        list.remove(index);
        System.out.println("item deleted.");
        return 0;

    }

    boolean isDuplicated (String title){
        for (TodoItem item : this.list) {
            if (title.equals(item.getTitle())) {
                return true;
            }
        }
        return false;
    }
    public int printAll() {
        Scanner sc = new Scanner(System.in);

        System.out.println("Total " + this.list.size() + " items");
        for (TodoItem item : this.list) {
            System.out.println(item.toString());
        }
        return 0;
    }
    public void sortByName() {
        Collections.sort(this.list, new TodoitemNameComparator());
    }
    public void sortByDate() {
        Collections.sort(this.list,new TodoitemDateComparator());
    }
    public void reverseList() {
        Collections.reverse(this.list);
    }
}
class TodoitemNameComparator implements Comparator<TodoItem> {

    @Override
    public int compare(TodoItem o1, TodoItem o2) {
    return o1.getTitle().compareTo(o2.getTitle());
    }
}
class TodoitemDateComparator implements Comparator<TodoItem> {
    @Override
    public int compare(TodoItem o1, TodoItem o2) {
    return o1.getDetail().compareTo(o2.getDetail());
    }
}