import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int line = scanner.nextInt();
        char operation = scanner.next().charAt(0);
        double sum = 0.0, number;

        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                number = scanner.nextDouble();

                if (i == line) {
                    sum += number;
                }
            }
        }

        if (operation == 'S') System.out.printf("%.1f\n", sum);
        else System.out.printf("%.1f\n", sum / 12.0);


        scanner.close();
    }
}
