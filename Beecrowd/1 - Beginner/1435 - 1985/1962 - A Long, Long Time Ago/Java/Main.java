import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();

        while (testCases-- > 0) {
            int yearsPassed = scanner.nextInt();
            
            if (yearsPassed < 2015) {
                System.out.println(2015 - yearsPassed + " D.C.");
            } else System.out.println(yearsPassed - 2014 + " A.C.");
        }

        scanner.close();
    }
}
