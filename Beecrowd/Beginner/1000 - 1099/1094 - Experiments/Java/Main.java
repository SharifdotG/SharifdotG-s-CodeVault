import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();
        int total = 0, totalCoelho = 0, totalRato = 0, totalSapo = 0;

        while (number-- > 0) {
            int amount = scanner.nextInt();
            char type = scanner.next().charAt(0);

            total += amount;

            if (type == 'C') totalCoelho += amount;
            else if (type == 'R') totalRato += amount;
            else if (type == 'S') totalSapo += amount;
        }

        System.out.printf("Total: %d cobaias\n", total);
        System.out.printf("Total de coelhos: %d\n", totalCoelho);
        System.out.printf("Total de ratos: %d\n", totalRato);
        System.out.printf("Total de sapos: %d\n", totalSapo);
        System.out.printf("Percentual de coelhos: %.2f %%\n", (double) totalCoelho / total * 100);
        System.out.printf("Percentual de ratos: %.2f %%\n", (double) totalRato / total * 100);
        System.out.printf("Percentual de sapos: %.2f %%\n", (double) totalSapo / total * 100);

        scanner.close();
    }
}
