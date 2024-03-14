import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();

        for (int i = 0; i < number; i++) {
            double a = scanner.nextDouble();
            double b = scanner.nextDouble();
            double c = scanner.nextDouble();

            double average = (a * 2 + b * 3 + c * 5) / 10;

            System.out.printf("%.1f\n", average);
        }

        scanner.close();
    }
}
