import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            double x = scanner.nextDouble();

            int days = 0;
            while (x > 1) {
                x /= 2;
                days++;
            }

            System.out.println(days + " dias");
        }

        scanner.close();
    }
}
