import java.util.Scanner;

public class PowerCalculation {
    public static void main(String[] args) {
        double base, exponent;

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter base: ");
        base = scanner.nextDouble();

        System.out.print("Enter exponent: ");
        exponent = scanner.nextDouble();

        System.out.printf("Power of %.2f to the %.2f is: %.2f\n", base, exponent, Math.pow(base, exponent));

        scanner.close();
    }
}
