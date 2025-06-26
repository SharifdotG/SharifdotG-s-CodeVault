import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int speed = scanner.nextInt();

        int[] rpm = new int[speed];
        for (int i = 0; i < speed; i++) {
            rpm[i] = scanner.nextInt();
        }

        for (int i = 0; i < speed - 1; i++) {
            if (rpm[i] > rpm[i + 1]) {
                System.out.println(i + 2);
                scanner.close();

                return;
            }
        }

        System.out.println(0);
        
        scanner.close();
    }
}
