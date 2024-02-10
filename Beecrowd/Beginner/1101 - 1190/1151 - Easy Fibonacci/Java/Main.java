import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();
        int first = 0, second = 1, next;

        for (int i = 1; i <= number; i++) {
            if (i == number) System.out.println(first);
            else System.out.print(first + " ");

            next = first + second;
            first = second;
            second = next;
        }

        scanner.close();
    }
}
