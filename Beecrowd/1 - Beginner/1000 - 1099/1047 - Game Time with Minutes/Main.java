import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int startHour = scanner.nextInt();
        int startMinute = scanner.nextInt();
        int endHour = scanner.nextInt();
        int endMinute = scanner.nextInt();

        int durationMinute = endHour * 60 + endMinute - startHour * 60 - startMinute;

        if (durationMinute <= 0) durationMinute += 24 * 60;

        int durationHour = durationMinute / 60;
        durationMinute %= 60;

        System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHour, durationMinute);

        scanner.close();
    }
}
