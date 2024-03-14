import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int age, sum = 0, count = 0;

        while (scanner.hasNextInt() && (age = scanner.nextInt()) >= 0) {
            sum += age;
            count++;
        }

        scanner.close();
        System.out.printf("%.2f\n", (double)sum / count);
    }
}
