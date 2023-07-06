import java.util.Scanner;

public class divisible_by_5_and_11 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        if (number % 5 == 0 && number % 11 == 0) {
            System.out.println(number + " is divisible by 5 and 11.");
        } else {
            System.out.println(number + " is not divisible by 5 and 11.");
        }
    }
}