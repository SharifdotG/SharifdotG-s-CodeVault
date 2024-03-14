import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int code = scanner.nextInt();
        int quantity = scanner.nextInt();

        double[] prices = {4.00, 4.50, 5.00, 2.00, 1.50};
        double price = prices[code - 1];

        System.out.printf("Total: R$ %.2f\n", price * quantity);

        scanner.close();
    }
}
