import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int tea = scanner.nextInt();
        int correct = 0;

        for (int i = 0; i < 5; i++) {
            int answer = scanner.nextInt();

            if (answer == tea) {
                correct++;
            }
        }

        System.out.println(correct);
        
        scanner.close();
    }
}
