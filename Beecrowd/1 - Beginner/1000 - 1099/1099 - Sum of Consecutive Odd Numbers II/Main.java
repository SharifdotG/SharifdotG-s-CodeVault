import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();

        while (testCases-- > 0) {
            int number1 = scanner.nextInt();
            int number2 = scanner.nextInt();

            int sum = 0;

            if (number1 > number2) {
                for (int j = number2 + 1; j < number1; j++) {
                    if (j % 2 != 0) {
                        sum += j;
                    }
                }
            } else {
                for (int j = number1 + 1; j < number2; j++) {
                    if (j % 2 != 0) {
                        sum += j;
                    }
                }
            }

            System.out.println(sum);
        }

        scanner.close();
    }
}
