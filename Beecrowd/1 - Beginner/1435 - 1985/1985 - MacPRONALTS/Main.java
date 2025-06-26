import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int products = scanner.nextInt();

        int[] product = new int[products];
        int[] quantity = new int[products];

        for (int i = 0; i < products; i++) {
            product[i] = scanner.nextInt();
            quantity[i] = scanner.nextInt();
        }

        double total = 0;

        for (int i = 0; i < products; i++) {
            if (product[i] == 1001) {
                total += 1.50 * quantity[i];
            } else if (product[i] == 1002) {
                total += 2.50 * quantity[i];
            } else if (product[i] == 1003) {
                total += 3.50 * quantity[i];
            } else if (product[i] == 1004) {
                total += 4.50 * quantity[i];
            } else if (product[i] == 1005) {
                total += 5.50 * quantity[i];
            }
        }

        System.out.printf("%.2f\n", total);

        scanner.close();
    }
}
