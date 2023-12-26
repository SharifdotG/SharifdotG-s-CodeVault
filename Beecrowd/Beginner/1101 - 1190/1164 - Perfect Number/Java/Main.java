import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();

        for (int i = 0; i < testCases; i++) {
            int number = scanner.nextInt();
            int sum = 0;

            for (int j = 1; j < number; j++) {
                if (number % j == 0) {
                    sum += j;
                }
            }

            if (sum == number) {
                System.out.println(number + " eh perfeito");
            } else System.out.println(number + " nao eh perfeito");
        }

        scanner.close();
    }
}
