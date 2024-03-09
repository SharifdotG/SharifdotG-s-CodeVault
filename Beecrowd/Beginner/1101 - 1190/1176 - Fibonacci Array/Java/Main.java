import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();

        long[] fibonacci = new long[61];

        fibonacci[0] = 0;
        fibonacci[1] = 1;

        for (int i = 2; i <= 60; i++) {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }

        while (number-- > 0) {
            int index = scanner.nextInt();
            System.out.println("Fib(" + index + ") = " + fibonacci[index]);
        }

        scanner.close();
    }
}
