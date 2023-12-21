import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();

        for (int i = 1; i <= 6; i++) {
            if (number % 2 != 0) System.out.println(number);
            else System.out.println(++number);

            number += 2;
        }

        scanner.close();
    }
}
