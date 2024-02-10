import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double denominatorRepetitions = scanner.nextDouble();

        double result = 0;

        for (int i = 0; i < (int) denominatorRepetitions; i++) {
            if (i == 0) {
                result = 1 / (6 + result);
            } else result = 1 / (6 + result);
        }

        System.out.printf("%.10f\n", result + 3);

        scanner.close();
    }
}
