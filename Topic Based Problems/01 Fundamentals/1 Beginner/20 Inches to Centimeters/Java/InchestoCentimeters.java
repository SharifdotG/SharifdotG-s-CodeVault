import java.util.Scanner;

public class InchestoCentimeters {
    public static void main(String[] args) {
        double inches;

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the length in Inches: ");
        inches = scanner.nextDouble();

        System.out.printf("Length in Centimeters = %.2f%n", inches * 2.54);

        scanner.close();
    }
}
