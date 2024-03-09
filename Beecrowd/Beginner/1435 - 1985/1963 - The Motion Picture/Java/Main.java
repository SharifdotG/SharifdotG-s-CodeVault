import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        double a = scanner.nextDouble();
        double b = scanner.nextDouble();

        double percentage = ((b - a) / a) * 100;

        System.out.printf("%.2f%%\n", percentage);

        scanner.close();
    }
}
