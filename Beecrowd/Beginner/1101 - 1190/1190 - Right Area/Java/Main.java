import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char operation;
        double[][] matrix = new double[12][12];
        double sum = 0;

        operation = scanner.next().charAt(0);

        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                matrix[i][j] = scanner.nextDouble();

                if (j > i && j > 11 - i) {
                    sum += matrix[i][j];
                }
            }
        }

        if (operation == 'S') System.out.printf("%.1f\n", sum);
        else System.out.printf("%.1f\n", sum / 30);

        scanner.close();
    }
}
