import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number;

        while ((number = scanner.nextInt()) != 0) {
            int sum = 0;

            if (number % 2 == 0) {
                for (int i = 0; i < 5; i++) {
                    sum += number;
                    number += 2;
                }
            } else {
                number++;

                for (int i = 0; i < 5; i++) {
                    sum += number;
                    number += 2;
                }
            }

            System.out.println(sum);
        }

        scanner.close();
    }
}
