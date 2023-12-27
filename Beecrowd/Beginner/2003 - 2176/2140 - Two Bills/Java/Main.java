import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int buyPrice, sellPrice;

        while (scanner.hasNextInt()) {
            buyPrice = scanner.nextInt();
            sellPrice = scanner.nextInt();

            if (buyPrice == 0 && sellPrice == 0) break;

            int change = sellPrice - buyPrice;

            if (change == 7 || change == 12 || change == 22 ||
                change == 52 || change == 102 || change == 15 ||
                change == 25 || change == 55 || change == 105 ||
                change == 30 || change == 60 || change == 110 ||
                change == 70 || change == 120 || change == 150) {
                System.out.println("possible");
            } else System.out.println("impossible");
        }

        scanner.close();
    }
}
