import java.util.Scanner;

public class PoundstoKilograms {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double pounds;

        System.out.print("Enter the weight in Pounds: ");
        pounds = scanner.nextDouble();

        System.out.printf("Weight in Kilograms = %.2f\n", pounds * 0.453592);

        scanner.close();
    }
}
