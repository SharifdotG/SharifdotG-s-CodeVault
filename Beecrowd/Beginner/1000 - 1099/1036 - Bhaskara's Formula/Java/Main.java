import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double a, b, c;
        a = scanner.nextDouble();
        b = scanner.nextDouble();
        c = scanner.nextDouble();

        double delta = b * b - 4 * a * c;

        if (delta < 0 || a == 0) {
            System.out.println("Impossivel calcular");
        } else {
            double r1 = (-b + Math.sqrt(delta)) / (2 * a);
            double r2 = (-b - Math.sqrt(delta)) / (2 * a);
            System.out.printf("R1 = %.5f%n", r1);
            System.out.printf("R2 = %.5f%n", r2);
        }
        
        scanner.close();
    }
}