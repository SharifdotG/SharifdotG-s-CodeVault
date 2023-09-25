/**
 * @file SwapTwoNumbersUsingFunction.java
 * @author SharifdotG
 * @brief Swap Two Numbers in Java using a function
 * @version 1.0
 * @date 2023-09-24
 */

import java.util.Scanner;

public class SwapTwoNumbersUsingFunction {
    public static void swap(int[] arr) {
        int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] numbers = new int[2];

        System.out.print("Enter first number: ");
        numbers[0] = scanner.nextInt();

        System.out.print("Enter second number: ");
        numbers[1] = scanner.nextInt();

        System.out.println("Before swapping: ");
        System.out.println("First number: " + numbers[0]);
        System.out.println("Second number: " + numbers[1]);

        swap(numbers);

        System.out.println("After swapping: ");
        System.out.println("First number: " + numbers[0]);
        System.out.println("Second number: " + numbers[1]);

        scanner.close();
    }
}
