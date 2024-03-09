import java.util.Scanner;

public class ArithmeticOperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int firstNumber, secondNumber;

        System.out.print("Enter first number: ");
        firstNumber = scanner.nextInt();

        System.out.print("Enter second number: ");
        secondNumber = scanner.nextInt();

        System.out.println("Sum of " + firstNumber + " and " + secondNumber + " is: " + (firstNumber + secondNumber));
        System.out.println("Difference of " + firstNumber + " and " + secondNumber + " is: " + (firstNumber - secondNumber));
        System.out.println("Product of " + firstNumber + " and " + secondNumber + " is: " + (firstNumber * secondNumber));

        if (secondNumber != 0) {
            System.out.println("Quotient of " + firstNumber + " and " + secondNumber + " is: " + (firstNumber / (double)secondNumber));
        } else {
            System.out.println("Cannot divide by zero.");
        }

        scanner.close();
    }
}
