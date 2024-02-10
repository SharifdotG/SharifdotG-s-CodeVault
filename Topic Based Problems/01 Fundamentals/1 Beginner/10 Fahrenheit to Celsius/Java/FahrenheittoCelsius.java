import java.util.Scanner;

public class FahrenheittoCelsius {
    public static void main(String[] args) {
        double fahrenheit;

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter temperature in Fahrenheit: ");
        fahrenheit = scanner.nextDouble();
        scanner.close();

        System.out.printf("Temperature in Celsius is: %.2f\n", (fahrenheit - 32) * 5 / 9);
    }
}
