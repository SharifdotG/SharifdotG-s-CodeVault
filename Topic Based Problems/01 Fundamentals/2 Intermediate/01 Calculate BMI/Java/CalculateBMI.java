import java.util.Scanner;

public class CalculateBMI {
    public static void main(String[] args) {
        double weight, height;

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your weight in kilogram: ");
        weight = scanner.nextDouble();

        System.out.print("Enter your height in meter: ");
        height = scanner.nextDouble();

        double bmi = weight / (height * height);

        System.out.printf("Your BMI is %.2f%n", bmi);
        
        scanner.close();
    }
}
