import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextLine()) {
            String s1 = scanner.nextLine();
            if (!scanner.hasNextLine()) break;
            String s2 = scanner.nextLine();

            int count = 0;
            for (int i = 0; i < s1.length(); i++) {
                for (int j = 0; j < s2.length(); j++) {
                    if (s1.charAt(i) == s2.charAt(j)) {
                        int k = 0;
                        while (i + k < s1.length() && j + k < s2.length() && s1.charAt(i + k) == s2.charAt(j + k)) {
                            k++;
                        }

                        count = Math.max(count, k);
                    }
                }
            }

            System.out.println(count);
        }

        scanner.close();
    }
}
