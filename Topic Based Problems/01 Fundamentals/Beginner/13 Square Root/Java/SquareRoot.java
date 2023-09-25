/**
 * @file SquareRoot.java
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Square Root in Java
 * @version 1.0
 * @date 2023-09-24
 * 
 * Copyright (c) 2023
 * 
 */

import java.util.Scanner;

public class SquareRoot {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double number;

        System.out.print("Enter number: ");
        number = scanner.nextDouble();

        System.out.printf("Square root of %.2f is: %.2f%n", number, Math.sqrt(number));

        scanner.close();
    }
}
