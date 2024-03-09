import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int product1Code = scanner.nextInt();
        int product1Units = scanner.nextInt();
        double product1Price = scanner.nextDouble();

        int product2Code = scanner.nextInt();
        int product2Units = scanner.nextInt();
        double product2Price = scanner.nextDouble();

        double total = product1Units * product1Price + product2Units * product2Price;

        System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);

        scanner.close();
    }
}
