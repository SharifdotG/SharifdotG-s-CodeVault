import java.util.Scanner;

public class maximum_between_two_numbers_2 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter two numbers: ");
        int firstNumber = scanner.nextInt();
        int secondNumber = scanner.nextInt();

        int maxNumber = Math.max(firstNumber, secondNumber);

        System.out.println("The maximum number is: " + maxNumber);
    }
}