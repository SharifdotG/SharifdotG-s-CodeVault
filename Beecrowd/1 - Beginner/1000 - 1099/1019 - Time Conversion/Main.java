import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int totalTime = scanner.nextInt();

        int hours = totalTime / 3600;
        int minutes = (totalTime % 3600) / 60;
        int seconds = (totalTime % 3600) % 60;

        System.out.println(hours + ":" + minutes + ":" + seconds);

        scanner.close();
    }
}