import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String name = scanner.nextLine();

        if (name.length() <= 80) {
            System.out.println("YES");
        } else System.out.println("NO");

        scanner.close();
    }
}
