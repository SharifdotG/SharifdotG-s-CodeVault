import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int spentTime = scanner.nextInt();
        int averageSpeed = scanner.nextInt();

        double liters = spentTime * averageSpeed / 12.0;

        System.out.printf("%.3f%n", liters);

        scanner.close();
    }
}