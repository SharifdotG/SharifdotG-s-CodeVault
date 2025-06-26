import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int credit1 = scanner.nextInt();
        int credit2 = scanner.nextInt();
        int credit3 = scanner.nextInt();

        if (credit1 == credit2 || credit1 == credit3 ||
            credit2 == credit3 || credit1 + credit2 == credit3 ||
            credit1 + credit3 == credit2 || credit2 + credit3 == credit1) {
            System.out.println("S");
        } else System.out.println("N");

        scanner.close();
    }
}
