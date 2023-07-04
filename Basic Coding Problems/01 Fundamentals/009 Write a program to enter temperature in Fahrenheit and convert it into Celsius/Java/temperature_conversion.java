import java.util.Scanner;

public class temperature_conversion {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the temperature in Fahrenheit: ");
        float fahrenheit = scanner.nextFloat();

        float celsius = (fahrenheit - 32) * 5 / 9;

        System.out.println("The temperature in Celsius is: " + celsius);
    }
}