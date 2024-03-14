import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNext()) {
            int arraySize = scanner.nextInt();
            int[][] matrix = new int[arraySize][arraySize];

            for (int i = 0; i < arraySize; i++) {
                matrix[i][i] = 1;
                matrix[i][arraySize - i - 1] = 2;

                for (int j = 0; j < arraySize; j++) {
                    if (i != j && j != arraySize - i - 1) {
                        matrix[i][j] = 3;
                    }
                }
            }

            for (int i = 0; i < arraySize; i++) {
                for (int j = 0; j < arraySize; j++) {
                    System.out.print(matrix[i][j]);
                }

                System.out.println();
            }
        }

        scanner.close();
    }
}
