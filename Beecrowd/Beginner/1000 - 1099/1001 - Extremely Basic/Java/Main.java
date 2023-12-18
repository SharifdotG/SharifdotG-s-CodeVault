import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int a, b;
        Scanner scanner = new Scanner(System.in);
        a = scanner.nextInt();
        b = scanner.nextInt();
        scanner.close();

        int sum = a + b;

        System.out.println("X = " + sum);

        scanner.close();
    }
}
