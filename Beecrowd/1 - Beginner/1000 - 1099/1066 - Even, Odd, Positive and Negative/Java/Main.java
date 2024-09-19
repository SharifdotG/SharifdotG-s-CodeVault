import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int even = 0, odd = 0, positive = 0, negative = 0;

        for (int i = 0; i < 5; i++) {
            int number = scanner.nextInt();

            if (number % 2 == 0) even++;
            else odd++;

            if (number > 0) positive++;
            else if (number < 0) negative++;
        }

        System.out.printf("%d valor(es) par(es)\n", even);
        System.out.printf("%d valor(es) impar(es)\n", odd);
        System.out.printf("%d valor(es) positivo(s)\n", positive);
        System.out.printf("%d valor(es) negativo(s)\n", negative);

        scanner.close();
    }
}
