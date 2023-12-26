import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int arraySize;

        while ((arraySize = scanner.nextInt()) != 0) {
            int[][] array = new int[arraySize][arraySize];

            for (int i = 0; i < arraySize; i++) {
                for (int j = 0; j < arraySize; j++) {
                    array[i][j] = Math.min(Math.min(i + 1, j + 1), Math.min(arraySize - i, arraySize - j));
                }
            }

            for (int i = 0; i < arraySize; i++) {
                for (int j = 0; j < arraySize; j++) {
                    System.out.printf("%3d", array[i][j]);
                    
                    if (j < arraySize - 1) {
                        System.out.print(" ");
                    }
                }

                System.out.println();
            }

            System.out.println();
        }

        scanner.close();
    }
}
