import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int card1 = scanner.nextInt();
        int card2 = scanner.nextInt();

        if (card1 == card2) System.out.println(card1);
        else if (card1 > card2) System.out.println(card1);
        else System.out.println(card2);

        scanner.close();
    }
}
