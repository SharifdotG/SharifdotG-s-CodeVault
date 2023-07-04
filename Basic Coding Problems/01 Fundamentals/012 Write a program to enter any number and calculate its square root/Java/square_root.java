import java.util.Scanner;

public class square_root {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        float squareRoot = (float) Math.sqrt(number);

        System.out.println("The square root of " + number + " is " + squareRoot);
    }
}