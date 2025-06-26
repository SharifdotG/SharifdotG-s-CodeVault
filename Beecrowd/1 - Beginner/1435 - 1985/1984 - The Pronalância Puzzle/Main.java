import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String number = scanner.next();

        StringBuilder reversed = new StringBuilder(number).reverse();

        System.out.println(reversed);
        
        scanner.close();
    }
}
