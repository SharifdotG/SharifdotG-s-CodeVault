import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();

        while (testCases-- > 0) {
            String number = scanner.next();
            if (Character.getNumericValue(number.charAt(number.length() - 1)) % 2 == 0) {
                System.out.println("even");
            } else {
                System.out.println("odd");
            }
        }
        
        scanner.close();
    }
}
