import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();

        for (int i = 0; i < 10; i++) {
            System.out.println("N[" + i + "] = " + number);
            
            number *= 2;
        }

        scanner.close();
    }
}
