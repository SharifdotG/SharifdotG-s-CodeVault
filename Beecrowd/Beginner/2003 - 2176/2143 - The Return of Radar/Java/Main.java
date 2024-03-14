import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases;

        while ((testCases = scanner.nextInt()) != 0) {
            while (testCases-- > 0) {
                int people = scanner.nextInt();

                if (people % 2 == 0) {
                    System.out.println((people - 2) * 2 + 2);
                } else System.out.println((people - 1) * 2 + 1);
            }
        }

        scanner.close();
    }
}
