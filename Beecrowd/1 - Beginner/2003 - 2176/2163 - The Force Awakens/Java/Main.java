import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int rows = scanner.nextInt();
        int columns = scanner.nextInt();

        int[][] matrix = new int[rows][columns];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        int count = 0;

        for (int i = 1; i < rows - 1; i++) {
            for (int j = 1; j < columns - 1; j++) {
                if (matrix[i][j] == 42 && matrix[i - 1][j - 1] == 7 &&
                    matrix[i - 1][j] == 7 && matrix[i - 1][j + 1] == 7 &&
                    matrix[i][j - 1] == 7 && matrix[i][j + 1] == 7 &&
                    matrix[i + 1][j - 1] == 7 && matrix[i + 1][j] == 7 &&
                    matrix[i + 1][j + 1] == 7) {
                    System.out.println((i + 1) + " " + (j + 1));
                    count++;
                }
            }
        }

        if (count == 0) {
            System.out.println("0 0");
        }

        scanner.close();
    }
}
