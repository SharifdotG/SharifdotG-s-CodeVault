import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();

        while (n-- > 0) {
            String s = scanner.nextLine();
            int len = s.length();

            StringBuilder firstHalf = new StringBuilder(s.substring(0, len / 2));
            StringBuilder secondHalf = new StringBuilder(s.substring(len / 2));

            firstHalf.reverse();
            secondHalf.reverse();

            System.out.println(firstHalf.toString() + secondHalf.toString());
        }

        scanner.close();
    }
}
