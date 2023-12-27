import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int month, day;

        while (scanner.hasNext()) {
            month = scanner.nextInt();
            day = scanner.nextInt();

            if (month == 12 && day == 25) {
                System.out.println("E natal!");
            } else if (month == 12 && day == 24) {
                System.out.println("E vespera de natal!");
            } else if (month == 12 && day > 25) {
                System.out.println("Ja passou!");
            } else {
                int days = 0;

                if (month == 1) days = 360 - day;
                else if (month == 2) days = 360 - 31 - day;
                else if (month == 3) days = 360 - 31 - 29 - day;
                else if (month == 4) days = 360 - 31 - 29 - 31 - day;
                else if (month == 5) days = 360 - 31 - 29 - 31 - 30 - day;
                else if (month == 6) days = 360 - 31 - 29 - 31 - 30 - 31 - day;
                else if (month == 7) days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - day;
                else if (month == 8) days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - day;
                else if (month == 9) days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - day;
                else if (month == 10) days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - day;
                else if (month == 11) days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 - day;
                else if (month == 12) days = 360 - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 - 30 - day;

                System.out.println("Faltam " + days + " dias para o natal!");
            }
        }
        scanner.close();
    }
}
