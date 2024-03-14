import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String binary = scanner.next();

        int count = 0;
        for (int i = 0; i < binary.length(); i++) {
            if (binary.charAt(i) == '1') {
                count++;
            }
        }

        if (count % 2 == 0) {
            System.out.println(binary + "0");
        } else System.out.println(binary + "1");

        scanner.close();
    }
}
