import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            int x = scanner.nextInt();
            System.out.println((long)(Math.pow(2, x) / 12000) + " kg");
        }

        scanner.close();
    }
}
