import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();
        scanner.nextLine();

        while (testCases-- > 0) {
            String message = scanner.nextLine();

            StringBuilder sb = new StringBuilder(message);
            for (int i = 0; i < sb.length(); i++) {
                char c = sb.charAt(i);
                if (Character.isLetter(c)) {
                    sb.setCharAt(i, (char) (c + 3));
                }
            }

            sb.reverse();

            int mid = sb.length() / 2;
            for (int i = mid; i < sb.length(); i++) {
                sb.setCharAt(i, (char) (sb.charAt(i) - 1));
            }

            System.out.println(sb);
        }

        scanner.close();
    }
}
