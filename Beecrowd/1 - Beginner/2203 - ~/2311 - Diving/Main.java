import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int divers = scanner.nextInt();
        scanner.nextLine();

        while (divers-- > 0) {
            String name = scanner.next();
            double difficulty = scanner.nextDouble();

            double[] grades = new double[7];
            for (int i = 0; i < 7; i++) {
                grades[i] = scanner.nextDouble();
            }

            Arrays.sort(grades);

            double total = 0;
            for (int i = 1; i < 6; i++) {
                total += grades[i];
            }

            System.out.printf("%s %.2f\n", name, total * difficulty);
        }

        scanner.close();
    }
}
