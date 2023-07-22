import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double firstNumber = scanner.nextDouble();
        double secondNumber = scanner.nextDouble();

        double average = (firstNumber * 3.5 + secondNumber * 7.5) / (3.5 + 7.5);

        System.out.printf("MEDIA = %.5f\n", average);
    }
}