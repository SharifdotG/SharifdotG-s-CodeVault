import java.util.Scanner;

public class maximum_between_three_numbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter three numbers: ");
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        int num3 = scanner.nextInt();

        int maxNum = num1;
        if (num2 > maxNum) {
            maxNum = num2;
        }
        if (num3 > maxNum) {
            maxNum = num3;
        }

        System.out.println("The maximum number is: " + maxNum);
    }
}