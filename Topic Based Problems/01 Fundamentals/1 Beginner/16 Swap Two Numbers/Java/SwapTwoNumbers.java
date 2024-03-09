import java.util.Scanner;

public class SwapTwoNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int firstNumber = scanner.nextInt();

        System.out.print("Enter second number: ");
        int secondNumber = scanner.nextInt();

        System.out.println("Before swapping: ");
        System.out.println("First number: " + firstNumber);
        System.out.println("Second number: " + secondNumber);

        firstNumber = firstNumber + secondNumber;
        secondNumber = firstNumber - secondNumber;
        firstNumber = firstNumber - secondNumber;

        System.out.println("After swapping: ");
        System.out.println("First number: " + firstNumber);
        System.out.println("Second number: " + secondNumber);

        scanner.close();
    }
}
