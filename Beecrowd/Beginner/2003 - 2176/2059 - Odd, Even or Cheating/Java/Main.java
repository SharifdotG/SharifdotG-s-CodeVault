import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int player1Choice, player1Numbers, player2Numbers, ifPlayer1Cheated, player1Accused;
        player1Choice = scanner.nextInt();
        player1Numbers = scanner.nextInt();
        player2Numbers = scanner.nextInt();
        ifPlayer1Cheated = scanner.nextInt();
        player1Accused = scanner.nextInt();

        if (ifPlayer1Cheated == 1 && player1Accused == 1) {
            System.out.println("Jogador 2 ganha!");
        } else if (ifPlayer1Cheated == 1 && player1Accused == 0) {
            System.out.println("Jogador 1 ganha!");
        } else if (ifPlayer1Cheated == 0 && player1Accused == 1) {
            System.out.println("Jogador 1 ganha!");
        } else {
            if (player1Choice == 1) {
                if ((player1Numbers + player2Numbers) % 2 == 0) {
                    System.out.println("Jogador 1 ganha!");
                } else {
                    System.out.println("Jogador 2 ganha!");
                }
            } else {
                if ((player1Numbers + player2Numbers) % 2 == 0) {
                    System.out.println("Jogador 2 ganha!");
                } else {
                    System.out.println("Jogador 1 ganha!");
                }
            }
        }
        
        scanner.close();
    }
}
