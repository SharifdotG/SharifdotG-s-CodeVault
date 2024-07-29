import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int ageInDays = scanner.nextInt();
        scanner.close();

        int years = ageInDays / 365;
        ageInDays -= years * 365;

        int months = ageInDays / 30;
        ageInDays -= months * 30;

        System.out.println(years + " ano(s)");
        System.out.println(months + " mes(es)");
        System.out.println(ageInDays + " dia(s)");
    }
}