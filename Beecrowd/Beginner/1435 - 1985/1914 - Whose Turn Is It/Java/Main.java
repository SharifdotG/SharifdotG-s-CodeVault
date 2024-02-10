import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();
        scanner.nextLine();

        while (testCases-- > 0) {
            String[] input = scanner.nextLine().split(" ");
            String player1 = input[0];
            String choice1 = input[1];
            String player2 = input[2];
            String choice2 = input[3];

            String[] numbers = scanner.nextLine().split(" ");
            int number1 = Integer.parseInt(numbers[0]);
            int number2 = Integer.parseInt(numbers[1]);

            if ((number1 + number2) % 2 == 0) {
                if (choice1.equals("PAR")) {
                    System.out.println(player1);
                } else System.out.println(player2);
            } else {
                if (choice1.equals("IMPAR")) {
                    System.out.println(player1);
                } else System.out.println(player2);
            }
        }

        scanner.close();
    }
}
