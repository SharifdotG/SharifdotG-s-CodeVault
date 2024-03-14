import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] par = new int[5];
        int[] impar = new int[5];
        int number, parIndex = 0, imparIndex = 0;

        for (int i = 0; i < 15; i++) {
            number = scanner.nextInt();

            if (number % 2 == 0) {
                par[parIndex] = number;
                parIndex++;
            } else {
                impar[imparIndex] = number;
                imparIndex++;
            }

            if (parIndex == 5) {
                for (int j = 0; j < 5; j++) {
                    System.out.println("par[" + j + "] = " + par[j]);
                }

                parIndex = 0;
            }

            if (imparIndex == 5) {
                for (int j = 0; j < 5; j++) {
                    System.out.println("impar[" + j + "] = " + impar[j]);
                }
                
                imparIndex = 0;
            }
        }

        for (int i = 0; i < imparIndex; i++) {
            System.out.println("impar[" + i + "] = " + impar[i]);
        }

        for (int i = 0; i < parIndex; i++) {
            System.out.println("par[" + i + "] = " + par[i]);
        }

        scanner.close();
    }
}
