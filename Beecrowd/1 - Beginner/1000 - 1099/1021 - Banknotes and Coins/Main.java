import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double amount = scanner.nextDouble();

        int[] notes = {100, 50, 20, 10, 5, 2};
        int[] coins = {100, 50, 25, 10, 5, 1};

        System.out.println("NOTAS:");
        for (int i = 0; i < 6; i++) {
            int note = notes[i];
            int quantity = (int) (amount / note);
            amount -= quantity * note;
            System.out.printf("%d nota(s) de R$ %.2f%n", quantity, (double) note / 1.00);
        }

        amount *= 100;

        System.out.println("MOEDAS:");
        for (int i = 0; i < 6; i++) {
            int coin = coins[i];
            int quantity = (int) (amount / coin);
            amount -= quantity * coin;
            System.out.printf("%d moeda(s) de R$ %.2f%n", quantity, (double) coin / 100.0);
        }

        scanner.close();
    }
}