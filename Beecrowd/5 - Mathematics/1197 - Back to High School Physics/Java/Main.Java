import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext()) {
            int v = scanner.nextInt();
            int t = scanner.nextInt();

            System.out.println(2 * v * t);
        }
        
        scanner.close();
    }
}
