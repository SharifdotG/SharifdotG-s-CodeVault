import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();

        while (testCases-- > 0) {
            int radius1 = scanner.nextInt();
            int radius2 = scanner.nextInt();

            System.out.println(radius1 + radius2);
        }
        
        scanner.close();
    }
}
