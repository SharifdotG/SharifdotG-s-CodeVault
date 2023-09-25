/**
 * @file LengthConversion.java
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Length Conversion in Java
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

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
