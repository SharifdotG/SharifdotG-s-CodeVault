import java.util.Scanner;

public class week_day {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter week number (1-7): ");
        int week_number = scanner.nextInt();

        String dayOfWeek;
        if (week_number == 1) {
            dayOfWeek = "Sunday";
        } else if (week_number == 2) {
            dayOfWeek = "Monday";
        } else if (week_number == 3) {
            dayOfWeek = "Tuesday";
        } else if (week_number == 4) {
            dayOfWeek = "Wednesday";
        } else if (week_number == 5) {
            dayOfWeek = "Thursday";
        } else if (week_number == 6) {
            dayOfWeek = "Friday";
        } else if (week_number == 7) {
            dayOfWeek = "Saturday";
        } else {
            dayOfWeek = "Invalid Input";
        }

        System.out.println("The day of the week is: " + dayOfWeek);
    }
}