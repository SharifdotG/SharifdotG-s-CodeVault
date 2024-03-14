import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();

        while (testCases-- > 0) {
            int bonus = scanner.nextInt();

            int attackDabriel = scanner.nextInt();
            int defenseDabriel = scanner.nextInt();
            int levelDabriel = scanner.nextInt();

            int attackGuarte = scanner.nextInt();
            int defenseGuarte = scanner.nextInt();
            int levelGuarte = scanner.nextInt();

            double dabriel = (attackDabriel + defenseDabriel) / 2.0;
            if (levelDabriel % 2 == 0) {
                dabriel += bonus;
            }

            double guarte = (attackGuarte + defenseGuarte) / 2.0;
            if (levelGuarte % 2 == 0) {
                guarte += bonus;
            }

            if (dabriel > guarte) System.out.println("Dabriel");
            else if (guarte > dabriel) System.out.println("Guarte");
            else System.out.println("Empate");
        }

        scanner.close();
    }
}
