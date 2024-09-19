import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();

        while (n-- > 0) {
            String a = scanner.next();
            String b = scanner.next();

            if (a.length() < b.length()) {
                System.out.println("nao encaixa");
            } else {
                if (a.endsWith(b)) {
                    System.out.println("encaixa");
                } else {
                    System.out.println("nao encaixa");
                }
            }
        }

        scanner.close();
    }
}
