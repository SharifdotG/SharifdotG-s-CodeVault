/**
 * @file RectanglePerimeter.java
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Rectangle Perimeter in Java
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

import java.util.Scanner;

public class RectanglePerimeter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int length, width;

        System.out.print("Enter length: ");
        length = scanner.nextInt();

        System.out.print("Enter width: ");
        width = scanner.nextInt();

        System.out.println("Perimeter of rectangle is: " + 2 * (length + width));

        scanner.close();
    }
}
