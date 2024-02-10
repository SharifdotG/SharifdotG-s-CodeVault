import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number1 = scanner.nextInt();
        int number2 = scanner.nextInt();
        int sum = 0;

        if (number1 > number2) {
            int temp = number1;
            number1 = number2;
            number2 = temp;
        }

        for (int i = number1 + 1; i < number2; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        System.out.println(sum);
        
        scanner.close();
    }
}
