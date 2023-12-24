import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();

        while (number-- > 0) {
            int value = scanner.nextInt();

            if (value == 0) System.out.println("NULL");
            else if (value % 2 == 0) {
                if (value > 0) System.out.println("EVEN POSITIVE");
                else System.out.println("EVEN NEGATIVE");
            } else {
                if (value > 0) System.out.println("ODD POSITIVE");
                else System.out.println("ODD NEGATIVE");
            }
        }
        
        scanner.close();
    }
}
