import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int arraySize;

        while ((arraySize = scanner.nextInt()) != 0) {
            int[][] matrix = new int[arraySize][arraySize];

            for (int i = 0; i < arraySize; i++) {
                for (int j = 0; j < arraySize; j++) {
                    matrix[i][j] = (int) Math.pow(2, i + j);
                }
            }

            int max_width = (int) (Math.log10(matrix[arraySize - 1][arraySize - 1]) + 1);

            for (int i = 0; i < arraySize; i++) {
                for (int j = 0; j < arraySize - 1; j++) {
                    System.out.printf("%" + max_width + "d ", matrix[i][j]);
                }
                
                System.out.printf("%" + max_width + "d\n", matrix[i][arraySize - 1]);
            }

            System.out.println();
        }

        scanner.close();
    }
}
