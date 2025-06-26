import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();

        while (n-- > 0) {
            String s = scanner.nextLine();
            int k = scanner.nextInt();
            scanner.nextLine();

            StringBuilder result = new StringBuilder();
            for (int i = 0; i < s.length(); i++) {
                char c = s.charAt(i);
                result.append((c - k) < 'A' ? (char)(c - k + 26) : (char)(c - k));
            }

            System.out.println(result.toString());
        }
        
        scanner.close();
    }
}
