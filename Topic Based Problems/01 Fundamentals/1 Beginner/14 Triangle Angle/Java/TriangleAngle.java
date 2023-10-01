/**
 * @file TriangleAngle.java
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Triangle Angle in Java
 * @version 1.0
 * @date 2023-09-24
 * 
 * Copyright (c) 2023
 */

import java.util.Scanner;

public class TriangleAngle {
    public static void main(String[] args) {
        int firstAngle, secondAngle, thirdAngle;

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter first angle: ");
        firstAngle = scanner.nextInt();

        System.out.print("Enter second angle: ");
        secondAngle = scanner.nextInt();

        thirdAngle = 180 - (firstAngle + secondAngle);

        System.out.println("Third angle is: " + thirdAngle);

        scanner.close();
    }
}
