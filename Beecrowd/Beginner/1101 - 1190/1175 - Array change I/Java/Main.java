import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] number = new int[20];

        for (int i = 0; i < 20; i++) {
            number[i] = scanner.nextInt();
        }

        for (int i = 0; i < 20; i++) {
            System.out.println("N[" + i + "] = " + number[19 - i]);
        }
        
        scanner.close();
    }
}
