import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();

        while (number-- > 0) {
            int value = scanner.nextInt();
            boolean isPrime = true;

            for (int j = 2; j < value; j++) {
                if (value % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) System.out.println(value + " eh primo");
            else System.out.println(value + " nao eh primo");
        }
        
        scanner.close();
    }
}
