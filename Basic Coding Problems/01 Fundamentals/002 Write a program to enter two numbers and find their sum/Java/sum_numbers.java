import java.util.Scanner;

public class sum_numbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        int firstNumber = scanner.nextInt();

        System.out.print("Enter the second number: ");
        int secondNumber = scanner.nextInt();

        int sum = firstNumber + secondNumber;

        System.out.println("The sum of the two numbers is: " + sum);
    }
}