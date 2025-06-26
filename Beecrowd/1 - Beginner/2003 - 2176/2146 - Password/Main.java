import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextInt()) {
            int password = scanner.nextInt();
            System.out.println(password - 1);
        }

        scanner.close();
    }
}
