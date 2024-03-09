import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();
        scanner.nextLine();

        while (testCases-- > 0) {
            String word = scanner.next();
            System.out.printf("%.2f\n", word.length() * 0.01);
        }
        
        scanner.close();
    }
}
