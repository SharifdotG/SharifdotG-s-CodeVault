import java.util.Scanner;

public class Main {
    
    public static int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            int f = scanner.nextInt();
            int c = scanner.nextInt();
            
            System.out.println(gcd(f, c));
        }

        scanner.close();
    }
}
