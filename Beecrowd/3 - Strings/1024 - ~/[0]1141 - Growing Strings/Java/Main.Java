import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            char d = scanner.next().charAt(0);
            String n = scanner.next();

            if (d == '0' && n.equals("0")) {
                break;
            }

            n = n.replace(Character.toString(d), "");

            n = n.replaceAll("^0+", "");

            if (n.isEmpty()) {
                System.out.println(0);
            } else {
                System.out.println(n);
            }
        }
    }
}
