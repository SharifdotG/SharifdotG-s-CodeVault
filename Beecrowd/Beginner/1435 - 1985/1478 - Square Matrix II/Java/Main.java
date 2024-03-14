import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int arraySize;

        while ((arraySize = scanner.nextInt()) != 0) {
            int[][] matrix = new int[arraySize][arraySize];

            for (int i = 0; i < arraySize; i++) {
                for (int j = 0; j < arraySize; j++) {
                    matrix[i][j] = Math.abs(i - j) + 1;
                }
            }

            for (int i = 0; i < arraySize; i++) {
                for (int j = 0; j < arraySize - 1; j++) {
                    System.out.printf("%3d ", matrix[i][j]);
                }

                System.out.printf("%3d\n", matrix[i][arraySize - 1]);
            }

            System.out.println();
        }

        scanner.close();
    }
}
