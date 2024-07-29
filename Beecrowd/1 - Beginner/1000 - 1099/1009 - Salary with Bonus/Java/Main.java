import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String name;
        double salary, sales;

        name = scanner.next();
        salary = scanner.nextDouble();
        sales = scanner.nextDouble();

        double totalSalary = salary + sales * 0.15;

        System.out.printf("TOTAL = R$ %.2f%n", totalSalary);
        
        scanner.close();
    }
}
