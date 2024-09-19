import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        while (n-- > 0) {
            String s1 = scanner.next();
            String s2 = scanner.next();

            int i = 0, j = 0;
            StringBuilder result = new StringBuilder();
            while (i < s1.length() || j < s2.length()) {
                if (i < s1.length()) {
                    result.append(s1.charAt(i++));
                }
                if (j < s2.length()) {
                    result.append(s2.charAt(j++));
                }
            }

            System.out.println(result);
        }

        scanner.close();
    }
}
