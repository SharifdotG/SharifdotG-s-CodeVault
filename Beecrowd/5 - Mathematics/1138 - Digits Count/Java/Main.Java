import java.util.Scanner;

public class Main {

    public static long digits(int n, int d) {
        long count = 0, pow = 1, rem = 0;

        while (n != 0) {
            int x = n % 10;
            n /= 10;

            if (x > d) {
                count += (n + 1) * pow;
            } else {
                count += n * pow;
            }

            if (x == d) {
                count += rem + 1;
            }

            if (d == 0) {
                count -= pow;
            }

            rem += x * pow;
            pow *= 10;
        }

        return count;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            if (a == 0 && b == 0) {
                break;
            }

            for (int i = 0; i < 10; i++) {
                System.out.print(digits(b, i) - digits(a - 1, i));

                if (i < 9) {
                    System.out.print(" ");
                }
            }

            System.out.println();
        }

        scanner.close();
    }
}
