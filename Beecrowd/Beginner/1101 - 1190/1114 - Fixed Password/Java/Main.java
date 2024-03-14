import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int password = 2002, input;

        while (true) {
            input = scanner.nextInt();

            if (input == password) {
                System.out.println("Acesso Permitido");
                break;
            } else System.out.println("Senha Invalida");
        }

        scanner.close();
    }
}
