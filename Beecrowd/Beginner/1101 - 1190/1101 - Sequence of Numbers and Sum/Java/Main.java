import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number1, number2;

        while ((number1 = scanner.nextInt()) > 0 && (number2 = scanner.nextInt()) > 0) {
            int sum = 0;

            if (number1 > number2) {
                int temp = number1;
                number1 = number2;
                number2 = temp;
            }

            for (int i = number1; i <= number2; i++) {
                System.out.print(i + " ");
                sum += i;
            }

            System.out.println("Sum=" + sum);
        }

        scanner.close();
    }
}
