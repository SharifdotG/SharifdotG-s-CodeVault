import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double number = scanner.nextDouble();

        for (int i = 0; i < 100; i++) {
            System.out.printf("N[%d] = %.4f%n", i, number);
            
            number /= 2;
        }

        scanner.close();
    }
}
