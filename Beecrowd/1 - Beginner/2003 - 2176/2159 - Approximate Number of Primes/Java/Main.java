import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double number = scanner.nextDouble();

        System.out.printf("%.1f %.1f\n", number / Math.log(number), 1.25506 * (number / Math.log(number)));

        scanner.close();
    }
}
