import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int height = scanner.nextInt();
        int pipes = scanner.nextInt();

        int previousPipe = scanner.nextInt();
        boolean isPossible = true;

        for (int i = 1; i < pipes; i++) {
            int currentPipe = scanner.nextInt();

            if (Math.abs(currentPipe - previousPipe) > height) {
                isPossible = false;
                break;
            }

            previousPipe = currentPipe;
        }

        if (isPossible) System.out.println("YOU WIN");
        else System.out.println("GAME OVER");

        scanner.close();
    }
}
