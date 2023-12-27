import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int cameras = scanner.nextInt();

        int[][] grid = new int[cameras + 1][cameras + 1];

        for (int i = 0; i < cameras + 1; i++) {
            for (int j = 0; j < cameras + 1; j++) {
                grid[i][j] = scanner.nextInt();
            }
        }

        for (int i = 0; i < cameras; i++) {
            for (int j = 0; j < cameras; j++) {
                if (grid[i][j] + grid[i][j + 1] + grid[i + 1][j] + grid[i + 1][j + 1] >= 2) {
                    System.out.print("S");
                } else System.out.print("U");
            }

            System.out.println();
        }

        scanner.close();
    }
}
