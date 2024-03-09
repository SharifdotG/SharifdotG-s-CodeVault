import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int b = scanner.nextInt();

        int quotient = a / b;
        int remainder = a % b;

        if (remainder < 0) {
            remainder += Math.abs(b);
            quotient = (a - remainder) / b;
        }

        System.out.println(quotient + " " + remainder);

        scanner.close();
    }
}
