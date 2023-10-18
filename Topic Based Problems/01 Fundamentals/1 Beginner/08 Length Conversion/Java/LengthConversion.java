import java.util.Scanner;

public class LengthConversion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double meter;

        System.out.print("Enter meter: ");
        meter = scanner.nextDouble();

        System.out.println("Centimeter: " + (meter * 100));
        System.out.println("Kilometer: " + (meter / 1000));
        System.out.println("Mile: " + (meter / 1609.34));
        System.out.println("Foot: " + (meter * 3.28084));
        System.out.println("Inch: " + (meter * 39.3701));

        scanner.close();
    }
}
