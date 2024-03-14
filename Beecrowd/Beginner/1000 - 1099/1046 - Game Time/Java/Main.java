import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int start = scanner.nextInt();
        int end = scanner.nextInt();

        if (start >= end) {
            System.out.println("O JOGO DUROU " + (24 - start + end) + " HORA(S)");
        } else System.out.println("O JOGO DUROU " + (end - start) + " HORA(S)");

        scanner.close();
    }
}
