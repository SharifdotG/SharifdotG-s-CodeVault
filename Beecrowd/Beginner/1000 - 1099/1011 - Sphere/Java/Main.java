import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double radius = scanner.nextDouble();

        double volume = (4.0 / 3) * 3.14159 * radius * radius * radius;

        System.out.printf("VOLUME = %.3f\n", volume);

        scanner.close();
    }
}
