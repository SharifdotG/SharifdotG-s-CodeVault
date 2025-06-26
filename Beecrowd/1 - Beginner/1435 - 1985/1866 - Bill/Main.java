import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();

        while (testCases-- > 0) {
            int number = scanner.nextInt();

            if (number % 2 == 0) {
                System.out.println(0);
            } else System.out.println(1);
        }

        scanner.close();
    }
}
