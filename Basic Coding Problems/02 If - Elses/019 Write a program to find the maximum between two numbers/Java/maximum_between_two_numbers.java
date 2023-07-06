import java.util.Scanner;

public class maximum_between_two_numbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter two numbers: ");
        int firstNumber = scanner.nextInt();
        int secondNumber = scanner.nextInt();

        int maxNumber;

        if (firstNumber > secondNumber) {
            maxNumber = firstNumber;
        } else {
            maxNumber = secondNumber;
        }

        System.out.println("The maximum number is: " + maxNumber);
    }
}