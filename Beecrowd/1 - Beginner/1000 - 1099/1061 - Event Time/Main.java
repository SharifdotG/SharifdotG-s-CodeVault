import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int day1, hour1, minute1, second1;
        int day2, hour2, minute2, second2;
        int day, hour, minute, second;
        String word;

        word = scanner.next();
        day1 = scanner.nextInt();
        hour1 = scanner.nextInt();
        word = scanner.next();
        minute1 = scanner.nextInt();
        word = scanner.next();
        second1 = scanner.nextInt();
        word = scanner.next();
        day2 = scanner.nextInt();
        hour2 = scanner.nextInt();
        word = scanner.next();
        minute2 = scanner.nextInt();
        word = scanner.next();
        second2 = scanner.nextInt();

        second = second2 - second1;
        minute = minute2 - minute1;
        hour = hour2 - hour1;
        day = day2 - day1;

        if (second < 0) {
            second += 60;
            minute--;
        }

        if (minute < 0) {
            minute += 60;
            hour--;
        }

        if (hour < 0) {
            hour += 24;
            day--;
        }

        System.out.println(day + " dia(s)");
        System.out.println(hour + " hora(s)");
        System.out.println(minute + " minuto(s)");
        System.out.println(second + " segundo(s)");

        scanner.close();
    }
}
