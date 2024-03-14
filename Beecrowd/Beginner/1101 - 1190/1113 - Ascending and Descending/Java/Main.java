import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int value1, value2;

        while (true) {
            value1 = scanner.nextInt();
            value2 = scanner.nextInt();

            if (value1 == value2) break;

            if (value1 > value2) {
                System.out.println("Decrescente");
            } else System.out.println("Crescente");
        }

        scanner.close();
    }
}
