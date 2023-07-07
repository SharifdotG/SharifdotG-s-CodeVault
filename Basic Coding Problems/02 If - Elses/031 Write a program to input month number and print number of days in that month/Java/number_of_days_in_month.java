import java.util.Scanner;

public class number_of_days_in_month {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the month number: ");
        int month = scanner.nextInt();

        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            System.out.println("The number of days in this month is 31.");
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            System.out.println("The number of days in this month is 30.");
        } else if (month == 2) {
            System.out.println("The number of days in this month is 28 or 29.");
        } else {
            System.out.println("Invalid month number.");
        }
    }
}