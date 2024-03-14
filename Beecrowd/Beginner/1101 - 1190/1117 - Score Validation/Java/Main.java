import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double number, average = 0;
        int count = 0;

        while (count < 2) {
            number = scanner.nextDouble();

            if (number >= 0 && number <= 10) {
                average += number;
                count++;
            } else System.out.println("nota invalida");
        }

        System.out.printf("media = %.2f\n", average / 2);
        
        scanner.close();
    }
}
