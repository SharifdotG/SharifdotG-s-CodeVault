import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int lastValue, i = 1;

        while (scanner.hasNextInt()) {
            lastValue = scanner.nextInt();
            int sum = 1;

            for (int j = 1; j <= lastValue; j++) {
                sum += j;
            }

            if (lastValue == 0) {
                System.out.println("Caso " + i + ": " + sum + " numero");
            } else System.out.println("Caso " + i + ": " + sum + " numeros");

            System.out.print("0");

            for (int j = 1; j <= lastValue; j++) {
                for (int k = 1; k <= j; k++) {
                    System.out.print(" " + j);
                }
            }

            System.out.println("\n");
            
            i++;
        }

        scanner.close();
    }
}
