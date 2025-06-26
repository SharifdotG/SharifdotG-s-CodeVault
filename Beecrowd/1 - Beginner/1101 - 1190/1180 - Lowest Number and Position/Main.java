import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int number = scanner.nextInt();

        int lowestNumber = 0, lowestNumberPosition = 0;

        for (int i = 1; i <= number; i++) {
            int currentNumber = scanner.nextInt();

            if (i == 1) {
                lowestNumber = currentNumber;
                lowestNumberPosition = i;
            } else {
                if (currentNumber < lowestNumber) {
                    lowestNumber = currentNumber;
                    lowestNumberPosition = i;
                }
            }
        }

        System.out.println("Menor valor: " + lowestNumber);
        System.out.println("Posicao: " + (lowestNumberPosition - 1));

        scanner.close();
    }
}
