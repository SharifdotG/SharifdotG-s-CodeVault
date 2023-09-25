/**
 * @file FahrenheittoCelsius.java
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Fahrenheit to Celsius in Java
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

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
