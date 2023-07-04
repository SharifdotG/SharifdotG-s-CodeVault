import java.util.Scanner;

public class days_to_years_weeks_days {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of days: ");
        int number_of_days = scanner.nextInt();

        int years = number_of_days / 365;
        int remaining_days = number_of_days % 365;
        int weeks = remaining_days / 7;
        int remaining_days_2 = remaining_days % 7;

        System.out.println("Years: " + years);
        System.out.println("Weeks: " + weeks);
        System.out.println("Days: " + remaining_days_2);
    }
}