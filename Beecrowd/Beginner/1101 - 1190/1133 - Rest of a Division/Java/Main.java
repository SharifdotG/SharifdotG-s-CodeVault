import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int value1 = scanner.nextInt();
        int value2 = scanner.nextInt();

        if (value1 > value2) {
            int temp = value1;
            value1 = value2;
            value2 = temp;
        }

        for (int i = value1 + 1; i < value2; i++) {
            if (i % 5 == 2 || i % 5 == 3) {
                System.out.println(i);
            }
        }

        scanner.close();
    }
}
