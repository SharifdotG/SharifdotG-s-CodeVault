import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double number, sum = 0;
        int count = 0;

        for (int i = 0; i < 6; i++) {
            number = scanner.nextDouble();

            if (number > 0) {
                count++;
                sum += number;
            }
        }

        System.out.println(count + " valores positivos");
        System.out.printf("%.1f\n", sum / count);

        scanner.close();
    }
}
