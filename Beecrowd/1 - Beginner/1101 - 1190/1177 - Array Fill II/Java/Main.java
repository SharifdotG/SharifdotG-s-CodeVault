import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();

        int[] array = new int[1000];

        for (int i = 0; i < 1000; i++) {
            array[i] = i % number;
        }

        for (int i = 0; i < 1000; i++) {
            System.out.println("N[" + i + "] = " + array[i]);
        }
        
        scanner.close();
    }
}
