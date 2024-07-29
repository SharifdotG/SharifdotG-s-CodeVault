import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int even = 0;

        for (int i = 0; i < 5; i++) {
            int number = scanner.nextInt();

            if (number % 2 == 0) even++;
        }

        System.out.println(even + " valores pares");

        scanner.close();
    }
}
