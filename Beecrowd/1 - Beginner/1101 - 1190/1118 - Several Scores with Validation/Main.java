import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double number, average, sum = 0;
        int count = 0, option;

        while (count < 2) {
            number = scanner.nextDouble();

            if (number >= 0 && number <= 10) {
                sum += number;
                count++;
            } else System.out.println("nota invalida");
        }

        average = sum / 2;

        System.out.printf("media = %.2f\n", average);

        while (true) {
            System.out.println("novo calculo (1-sim 2-nao)");
            option = scanner.nextInt();

            if (option == 1) {
                sum = 0;
                count = 0;

                while (count < 2) {
                    number = scanner.nextDouble();

                    if (number >= 0 && number <= 10) {
                        sum += number;
                        count++;
                    } else System.out.println("nota invalida");
                }

                average = sum / 2;

                System.out.printf("media = %.2f\n", average);
            } else if (option == 2) break;
        }

        scanner.close();
    }
}
