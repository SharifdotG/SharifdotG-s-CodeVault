import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int testCases = scanner.nextInt();
        while (testCases-- > 0) {
            int pa = scanner.nextInt();
            int pb = scanner.nextInt();
            double g1 = scanner.nextDouble();
            double g2 = scanner.nextDouble();

            int years = 0;
            
            while (pa <= pb) {
                pa += pa * (g1 / 100);
                pb += pb * (g2 / 100);
                years++;

                if (years > 100) {
                    System.out.println("Mais de 1 seculo.");
                    break;
                }
            }

            if (years <= 100) {
                System.out.println(years + " anos.");
            }
        }

        scanner.close();
    }
}
