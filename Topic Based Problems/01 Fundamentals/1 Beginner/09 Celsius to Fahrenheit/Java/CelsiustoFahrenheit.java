import java.util.Scanner;

public class CelsiustoFahrenheit {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        double celsius;

        System.out.print("Enter temperature in Celsius: ");
        celsius = scanner.nextDouble();

        System.out.printf("Temperature in Fahrenheit is: %.2f\n", (celsius * 9 / 5) + 32);

        scanner.close();
    }
}
