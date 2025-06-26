import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double a = scanner.nextDouble();
        double B = scanner.nextDouble();
        double c = scanner.nextDouble();

        double average = (a * 2 + B * 3 + c * 5) / 10;

        System.out.printf("MEDIA = %.1f%n", average);
        
        scanner.close();
    }
}
