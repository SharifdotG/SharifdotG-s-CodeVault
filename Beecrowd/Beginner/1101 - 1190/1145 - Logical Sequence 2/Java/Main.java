import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int y = scanner.nextInt();

        for (int i = 1; i <= y; i++) {
            System.out.print(i);
            
            if (i % x == 0) System.out.println();
            else System.out.print(" ");
        }

        scanner.close();
    }
}
