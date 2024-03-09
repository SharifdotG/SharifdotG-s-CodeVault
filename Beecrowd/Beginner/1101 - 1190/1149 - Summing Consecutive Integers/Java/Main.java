import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int numbers = scanner.nextInt();
        int sum = 0;

        while (numbers <= 0) {
            numbers = scanner.nextInt();
        }

        for (int i = 0; i < numbers; i++) {
            sum += a + i;
        }

        System.out.println(sum);

        scanner.close();
    }
}
