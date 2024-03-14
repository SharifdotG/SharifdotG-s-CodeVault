import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNext()) {
            int arraySize = scanner.nextInt();
            int[][] matrix = new int[arraySize][arraySize];

            for (int i = 0; i < arraySize; i++) {
                for (int j = 0; j < arraySize; j++) {
                    matrix[i][j] = 0;
                }
            }

            for (int i = 0; i < arraySize; i++) {
                matrix[i][i] = 2;
                matrix[i][arraySize - i - 1] = 3;
            }

            int middle = arraySize / 3;

            for (int i = middle; i < arraySize - middle; i++) {
                for (int j = middle; j < arraySize - middle; j++) {
                    matrix[i][j] = 1;
                }
            }

            matrix[arraySize / 2][arraySize / 2] = 4;

            for (int i = 0; i < arraySize; i++) {
                for (int j = 0; j < arraySize; j++) {
                    System.out.print(matrix[i][j]);
                }

                System.out.println();
            }

            System.out.println();
        }

        scanner.close();
    }
}
