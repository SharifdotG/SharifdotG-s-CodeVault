import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int tabs = scanner.nextInt();
        int actions = scanner.nextInt();
        scanner.nextLine();

        while (actions-- > 0) {
            String action = scanner.next();

            if (action.equals("fechou")) {
                tabs++;
            } else tabs--;
        }

        System.out.println(tabs);
        scanner.close();
    }
}
