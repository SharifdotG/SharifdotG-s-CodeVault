import java.util.Scanner;

public class DaysConversion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int days;

        System.out.print("Enter days: ");
        days = scanner.nextInt();

        System.out.println("Years: " + days / 365);
        System.out.println("Remaining Months: " + (days % 365) / 30);
        System.out.println("Remaining Weeks: " + ((days % 365) % 30) / 7);
        System.out.println("Remaining Days: " + ((days % 365) % 30) % 7);

        scanner.close();
    }
}
