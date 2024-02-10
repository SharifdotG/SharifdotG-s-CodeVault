import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x, y;

        while (true) {
            x = scanner.nextInt();
            y = scanner.nextInt();

            if (x == 0 || y == 0) break;

            if (x > 0 && y > 0) System.out.println("primeiro");
            else if (x < 0 && y > 0) System.out.println("segundo");
            else if (x < 0 && y < 0) System.out.println("terceiro");
            else System.out.println("quarto");
        }

        scanner.close();
    }
}
