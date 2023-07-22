import java.util.Scanner;

public class SumOfTwoNumbers {
    public static void main(String[] args) {
        int firstNumber, secondNumber, sum;

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        firstNumber = scanner.nextInt();

        System.out.print("Enter the second number: ");
        secondNumber = scanner.nextInt();

        sum = firstNumber + secondNumber;

        System.out.println("The sum of the two numbers is: " + sum);

        scanner.close();
    }
}