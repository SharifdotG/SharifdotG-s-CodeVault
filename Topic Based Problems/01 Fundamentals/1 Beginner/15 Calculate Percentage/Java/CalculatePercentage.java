import java.util.Scanner;

public class CalculatePercentage {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double number, totalNumber;

        System.out.print("Enter number: ");
        number = scanner.nextDouble();

        System.out.print("Enter total number: ");
        totalNumber = scanner.nextDouble();

        System.out.printf("Percentage of %.2f is: %.2f%%\n", number, (number / totalNumber) * 100);

        scanner.close();
    }
}
