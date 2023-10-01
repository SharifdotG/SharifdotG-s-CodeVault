/**
 * @file SumofTwoNumbers.java
 * @author SharifdotG (sharifmdyousuf007@gmail.com)
 * @brief Sum of Two Numbers in Java
 * @version 1.0
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

import java.util.Scanner;

public class SumofTwoNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        System.out.print("Enter first number: ");
        int firstNumber = scanner.nextInt();
 
        System.out.print("Enter second number: ");
        int secondNumber = scanner.nextInt();
 
        System.out.println("Sum of " + firstNumber + " and " + secondNumber + " is: " + (firstNumber + secondNumber));
 
        scanner.close();
    }
}
 