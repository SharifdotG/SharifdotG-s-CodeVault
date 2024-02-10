import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();
        int in = 0, out = 0;

        for (int i = 0; i < number; i++) {
            int value = scanner.nextInt();

            if (value >= 10 && value <= 20) in++;
            else out++;
        }

        System.out.println(in + " in");
        System.out.println(out + " out");
        
        scanner.close(); // Closing the Scanner object
    }
}
