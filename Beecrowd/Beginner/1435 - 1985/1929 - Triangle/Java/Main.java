import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        int d = scanner.nextInt();
        
        if (a < b + c && b < a + c && c < a + b) {
            System.out.println("S");
        } else if (a < b + d && b < a + d && d < a + b) {
            System.out.println("S");
        } else if (a < c + d && c < a + d && d < a + c) {
            System.out.println("S");
        } else if (b < c + d && c < b + d && d < b + c) {
            System.out.println("S");
        } else System.out.println("N");
        
        scanner.close();
    }
}
