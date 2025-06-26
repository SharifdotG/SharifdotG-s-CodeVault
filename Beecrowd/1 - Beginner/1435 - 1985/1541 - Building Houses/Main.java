import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int size1, size2, maxAllowed;

        while ((size1 = scanner.nextInt()) != 0) {
            size2 = scanner.nextInt();
            maxAllowed = scanner.nextInt();

            int area = size1 * size2;
            int side = (int) Math.sqrt((area * 100) / maxAllowed);

            System.out.println(side);
        }

        scanner.close();
    }
}
