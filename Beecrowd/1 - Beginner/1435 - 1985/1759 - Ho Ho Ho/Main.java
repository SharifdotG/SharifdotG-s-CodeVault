import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int timesHoSpoken = scanner.nextInt();

        for (int i = 0; i < timesHoSpoken; i++) {
            if (i == timesHoSpoken - 1) {
                System.out.println("Ho!");
            } else System.out.print("Ho ");
        }

        scanner.close();
    }
}
