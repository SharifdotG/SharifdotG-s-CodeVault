import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            int n = sc.nextInt();
            int l = sc.nextInt();
            int c = sc.nextInt();
            int lines = 1, pages = 1, words = 0;

            for (int i = 0; i < n; i++) {
                String s = sc.next();
                if (words + s.length() <= c) {
                    words += s.length() + 1;
                } else {
                    lines++;
                    words = s.length() + 1;
                }
                if (lines > l) {
                    lines = 1;
                    pages++;
                }
            }

            System.out.println(pages);
        }
        sc.close();
    }
}