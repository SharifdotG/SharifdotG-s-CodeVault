import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextLong()) {
            long a = scanner.nextLong();
            long b = scanner.nextLong();
            long sum = 0;

            for (int i = 0; i < 2; i++) {
                long n = (i == 0) ? a : b;
                long fact = 1;

                for (int j = 1; j <= n; j++) {
                    fact *= j;
                }

                sum += fact;
            }

            System.out.println(sum);
        }

        scanner.close();
    }
}
