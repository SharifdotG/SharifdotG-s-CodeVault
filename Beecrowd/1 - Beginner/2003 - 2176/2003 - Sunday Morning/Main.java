import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNext()) {
            String time = scanner.nextLine();
            String[] timeArray = time.split(":");
            int hour = Integer.parseInt(timeArray[0]);
            int minute = Integer.parseInt(timeArray[1]);

            int delay = 0;

            if (hour >= 7) {
                delay = (hour - 7) * 60 + minute;
            }

            System.out.println("Atraso maximo: " + delay);
        }

        scanner.close();
    }
}
