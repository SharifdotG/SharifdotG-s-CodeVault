/**
 * @file KilometerstoMiles.java
 * @author SharifdotG
 * @brief Kilometers to Miles in Java
 * @version 1.0
 * @date 2023-09-24
 * 
 * Copyright (c) 2023
 */

import java.util.Scanner;

public class KilometerstoMiles {
    public static void main(String[] args) {
        double kilometers;
        
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the distance in Kilometers: ");
        kilometers = scanner.nextDouble();
        scanner.close();

        System.out.printf("Distance in Miles = %.2f%n", kilometers * 0.621371);
    }
}
