import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();

        while (number-- > 0) {
            int value1 = scanner.nextInt();
            int value2 = scanner.nextInt();

            if (value2 == 0) System.out.println("divisao impossivel");
            else System.out.printf("%.1f\n", (double) value1 / value2);
        }

        scanner.close();
    }
}
