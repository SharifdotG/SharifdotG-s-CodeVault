import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();
        scanner.nextLine();

        for (int i = 0; i < testCases; i++) {
            String player1 = scanner.next();
            String player2 = scanner.next();

            if (player1.equals("ataque") && player2.equals("pedra"))
                System.out.println("Jogador 1 venceu");
            else if (player1.equals("pedra") && player2.equals("ataque"))
                System.out.println("Jogador 2 venceu");
            else if (player1.equals("pedra") && player2.equals("papel"))
                System.out.println("Jogador 1 venceu");
            else if (player1.equals("papel") && player2.equals("pedra"))
                System.out.println("Jogador 2 venceu");
            else if (player1.equals("papel") && player2.equals("ataque"))
                System.out.println("Jogador 2 venceu");
            else if (player1.equals("ataque") && player2.equals("papel"))
                System.out.println("Jogador 1 venceu");
            else if (player1.equals("papel") && player2.equals("papel"))
                System.out.println("Ambos venceram");
            else if (player1.equals("pedra") && player2.equals("pedra"))
                System.out.println("Sem ganhador");
            else if (player1.equals("ataque") && player2.equals("ataque"))
                System.out.println("Aniquilacao mutua");
        }

        scanner.close();
    }
}
