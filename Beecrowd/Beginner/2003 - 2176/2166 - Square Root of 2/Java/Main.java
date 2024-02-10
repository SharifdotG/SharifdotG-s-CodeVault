import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int denominatorRepititions = scanner.nextInt();
        double result = 0;

        for (int i = 0; i < denominatorRepititions; i++) {
            result += 2;
            result = 1 / result;
        }

        result += 1;

        System.out.printf("%.10f\n", result);
        
        scanner.close();
    }
}
