import java.util.Scanner;

public class power {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the base: ");
        int base = scanner.nextInt();

        System.out.print("Enter the power: ");
        int power = scanner.nextInt();

        int result = (int) Math.pow(base, power);

        System.out.println("The value of " + base + "^" + power + " is " + result);
    }
}