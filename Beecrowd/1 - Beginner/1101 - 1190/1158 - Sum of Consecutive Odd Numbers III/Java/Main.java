import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();

        for (int i = 0; i < number; i++) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();

            if (x % 2 == 0) x++;

            int sum = 0;

            for (int j = 0; j < y; j++) {
                sum += x;
                x += 2;
            }

            System.out.println(sum);
        }

        scanner.close();
    }
}
