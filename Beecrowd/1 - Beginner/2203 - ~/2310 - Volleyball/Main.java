import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int players = scanner.nextInt();
        scanner.nextLine();
        
        int totalServes = 0, totalBlocks = 0, totalAttacks = 0;
        int totalServesOpponent = 0, totalBlocksOpponent = 0, totalAttacksOpponent = 0;

        while (players-- > 0) {
            String name = scanner.next();

            int serves = scanner.nextInt();
            int blocks = scanner.nextInt();
            int attacks = scanner.nextInt();

            int servesOpponent = scanner.nextInt();
            int blocksOpponent = scanner.nextInt();
            int attacksOpponent = scanner.nextInt();

            totalServes += serves;
            totalBlocks += blocks;
            totalAttacks += attacks;

            totalServesOpponent += servesOpponent;
            totalBlocksOpponent += blocksOpponent;
            totalAttacksOpponent += attacksOpponent;
        }

        System.out.printf("Pontos de Saque: %.2f %%.\n", (double) totalServesOpponent / totalServes * 100);
        System.out.printf("Pontos de Bloqueio: %.2f %%.\n", (double) totalBlocksOpponent / totalBlocks * 100);
        System.out.printf("Pontos de Ataque: %.2f %%.\n", (double) totalAttacksOpponent / totalAttacks * 100);

        scanner.close();
    }
}
