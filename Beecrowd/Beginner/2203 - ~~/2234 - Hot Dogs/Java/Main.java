import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int hotDogs = scanner.nextInt();
        int participants = scanner.nextInt();

        System.out.printf("%.2f\n", (float) hotDogs / participants);

        scanner.close();
    }
}
