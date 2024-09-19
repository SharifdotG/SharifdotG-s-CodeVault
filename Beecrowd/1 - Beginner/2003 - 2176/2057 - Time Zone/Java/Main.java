import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int timeOfDeparture = scanner.nextInt();
        int travelTime = scanner.nextInt();
        int timeZone = scanner.nextInt();

        int result = timeOfDeparture + travelTime + timeZone;

        if (result < 0) result += 24;
        else if (result >= 24) {
            result -= 24;
        }

        System.out.println(result);

        scanner.close();
    }
}
