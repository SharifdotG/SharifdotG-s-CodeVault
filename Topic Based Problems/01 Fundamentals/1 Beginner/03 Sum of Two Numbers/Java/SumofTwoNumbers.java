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
 