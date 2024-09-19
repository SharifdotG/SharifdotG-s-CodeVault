import java.util.Scanner;

public class SwapTwoNumbersUsingTemp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int firstNumber, secondNumber, temp;

        System.out.print("Enter first number: ");
        firstNumber = scanner.nextInt();

        System.out.print("Enter second number: ");
        secondNumber = scanner.nextInt();

        System.out.println("Before swapping: ");
        System.out.println("First number: " + firstNumber);
        System.out.println("Second number: " + secondNumber);

        temp = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temp;

        System.out.println("After swapping: ");
        System.out.println("First number: " + firstNumber);
        System.out.println("Second number: " + secondNumber);

        scanner.close();
    }
}
