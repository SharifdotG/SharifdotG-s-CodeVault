import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        double[] number = new double[100];
        Scanner scanner = new Scanner(System.in);

        for (int i = 0; i < 100; i++) {
            number[i] = scanner.nextDouble();

            if (number[i] <= 10) {
                System.out.printf("A[%d] = %.1f%n", i, number[i]);
            }
        }

        scanner.close();
    }
}
