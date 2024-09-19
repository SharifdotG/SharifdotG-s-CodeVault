import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int powerStrip1 = scanner.nextInt();
        int powerStrip2 = scanner.nextInt();
        int powerStrip3 = scanner.nextInt();
        int powerStrip4 = scanner.nextInt();

        System.out.println(powerStrip1 + powerStrip2 + powerStrip3 + powerStrip4 - 3);

        scanner.close();
    }
}
