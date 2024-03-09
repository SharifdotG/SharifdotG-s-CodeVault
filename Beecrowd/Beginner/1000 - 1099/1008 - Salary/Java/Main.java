import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();
        int hours = scanner.nextInt();
        double SALARY = scanner.nextDouble();

        double totalSalary = hours * SALARY;

        System.out.println("NUMBER = " + number);
        System.out.printf("SALARY = U$ %.2f%n", totalSalary);

        scanner.close();
    }
}
