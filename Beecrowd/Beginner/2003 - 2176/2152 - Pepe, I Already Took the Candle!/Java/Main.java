import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();
        scanner.nextLine();

        while (testCases-- > 0) {
            int hour = scanner.nextInt();
            int minute = scanner.nextInt();
            int event = scanner.nextInt();
            scanner.nextLine();

            if (hour < 10) {
                System.out.print("0" + hour);
            } else {
                System.out.print(hour);
            }

            System.out.print(":");

            if (minute < 10) {
                System.out.print("0" + minute);
            } else {
                System.out.print(minute);
            }

            if (event == 1) {
                System.out.println(" - A porta abriu!");
            } else {
                System.out.println(" - A porta fechou!");
            }
        }

        scanner.close();
    }
}
