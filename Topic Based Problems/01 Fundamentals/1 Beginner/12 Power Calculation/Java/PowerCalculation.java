/**
 * @file PowerCalculation.java
 * @brief Power Calculation in Java
 * @version 1.0
 * @date 2023-09-24
 * 
 * This program calculates the power of a base to an exponent in Java.
 * 
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 */

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
