import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int courses = scanner.nextInt();
        scanner.nextLine();

        while (courses-- > 0) {
            String course = scanner.nextLine();
        }

        System.out.println("Ciencia da Computacao");

        scanner.close();
    }
}
