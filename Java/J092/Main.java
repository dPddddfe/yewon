import java.text.SimpleDateFormat;
import java.util.*;
import java.util.concurrent.TimeUnit;

public class Main {
    static HashMap<String, Car> park = new HashMap<>();
    static Scanner sc = new Scanner(System.in);
    static SimpleDateFormat time = new SimpleDateFormat("yyyyMMdd HHmm");

    public static void main(String[] args) {
        while (true) {
            System.out.print("\n1) enter, 2) exit, 3) list, 4) quit > ");
            int menu = sc.nextInt();

            switch (menu) {
                case 1:
                    enter();
                    break;
                case 2:
                    exit();
                    break;
                case 3:
                    list();
                    break;
                case 4:
                    return;
                default:
                    System.out.println("retry !!");
            }
        }
    }

    static void enter() {
        System.out.print("Enter number, type > ");
        String number = sc.next();
        String type = sc.next();
        Date now = new Date();
        park.put(number, new Car(number, type, now));
    }

    static void exit() {
        if (park.isEmpty()) {
            System.out.println("no car");
            return;
        }

        List<String> keys = new ArrayList<>(park.keySet());

        System.out.print("Enter car number to exit > ");
        sc.nextLine();
        String find = sc.nextLine();
        boolean re = false;
        for (String key : keys) {
            if (find.equals(key)) {
                re = true;
                break;
            }
        }
        if (!re) {
            System.out.println("retry!!");
            return;
        }

        String number = find;
        Car car = park.get(number);
        Date now = new Date();
        long durationMin = TimeUnit.MILLISECONDS.toMinutes(now.getTime() - car.inTime.getTime());
        long fee = 0;

        if (durationMin >= 10) {
            fee = ((durationMin - 1) / 10 + 1) * 500;
        }

        System.out.printf("%s %s %dmin, Parking fee %d (current time %s)\n",
                car.number, car.type, durationMin, fee, time.format(now));
        park.remove(number);
    }

    static void list() {
        if (park.isEmpty()) {
            System.out.println("no car");
            return;
        }

        System.out.println("============================================");
        System.out.println("num          type          time");


        int idx = 1;
        for (Car car : park.values()) {
            System.out.printf("[%d] %s %10s %20s\n", idx++, car.number, car.type, time.format(car.inTime));
        }
    }
}

class Car {
    String number;
    String type;
    Date inTime;

    public Car(String number, String type, Date inTime) {
        this.number = number;
        this.type = type;
        this.inTime = inTime;
    }
}