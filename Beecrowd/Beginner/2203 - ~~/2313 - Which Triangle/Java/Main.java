import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();

        if (a < b + c && b < a + c && c < a + b) {
            System.out.print("Valido-");

            if (a == b && b == c) {
                System.out.println("Equilatero");
            } else if (a == b || b == c || a == c) {
                System.out.println("Isoceles");
            } else System.out.println("Escaleno");

            System.out.print("Retangulo: ");

            if (a * a == b * b + c * c ||
                b * b == a * a + c * c ||
                c * c == a * a + b * b) {
                System.out.println("S");
            } else System.out.println("N");
        } else System.out.println("Invalido");

        scanner.close();
    }
}
