package J071;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main j071 = new Main();
        j071.run();
        }
    public void displayHelp(){

        System.out.println("Usage of commands");
        System.out.println("1. Add a new item ( add )");
        System.out.println("2. Delete an existing item ( del )");
        System.out.println("3. Update an item ( edit )");
        System.out.println("4. List all items ( Is )");
        System.out.println("5. sort the list by name ( Is name )");
        System.out.println("6. sort the list by name descending ( Is name desc)");
        System.out.println("7. sort the list by date ( Is date )");
        System.out.println("8. sort the list by date descending ( Is date desc )");
        System.out.println("9. show commands guidelines ( ? )");
        System.out.println("10. quit program ( exit )");

    }
    public void run(){
        Scanner sc = new Scanner(System.in);
        TodoCRUD manager = new TodoCRUD();
        boolean quit = false;
        do {
            System.out.print("> ");
            String line = sc.nextLine();
            String choice = line.split(" ")[0];
            switch (choice) {
                case "add":
                    manager.addItem();
                    break;
                case "del":
                    manager.deleteItem();
                    break;
                case "edit":
                    manager.updateItem();
                    break;
                case "ls":
                    if (line.contains("name"))
                        manager.sortByName();
                    if (line.contains("date"))
                        manager.sortByDate();
                    if (line.contains("desc"))
                        manager.reverseList();
                    manager.printAll();
                    break;
                case "?":
                    displayHelp();
                    break;
                case "exit":
                    quit = true;
                    break;
                default:
                    System.out.println("? for help.");
                    break;
            }
        } while (!quit);
    }
}