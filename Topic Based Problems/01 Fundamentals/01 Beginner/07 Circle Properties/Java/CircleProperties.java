/**
 * @file CircleProperties.java
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Circle Properties in Java
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

import java.util.Scanner;

public class CircleProperties {
    public static void main(String[] args) {
        double radius;

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter radius: ");
        radius = scanner.nextDouble();

        System.out.println("Diameter of circle is: " + (2 * radius));
        System.out.println("Circumference of circle is: " + (2 * Math.PI * radius));
        System.out.println("Area of circle is: " + (Math.PI * Math.pow(radius, 2)));

        scanner.close();
    }
}
