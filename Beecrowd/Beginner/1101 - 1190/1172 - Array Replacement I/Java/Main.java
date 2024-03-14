import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] number = new int[10];

        for (int i = 0; i < 10; i++) {
            number[i] = scanner.nextInt();

            if (number[i] <= 0) {
                number[i] = 1;
            }
        }

        for (int i = 0; i < 10; i++) {
            System.out.println("X[" + i + "] = " + number[i]);
        }
        
        scanner.close();
    }
}
