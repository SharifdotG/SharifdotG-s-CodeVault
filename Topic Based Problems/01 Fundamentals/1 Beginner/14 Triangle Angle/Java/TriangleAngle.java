import java.util.Scanner;

public class TriangleAngle {
    public static void main(String[] args) {
        int firstAngle, secondAngle, thirdAngle;

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter first angle: ");
        firstAngle = scanner.nextInt();

        System.out.print("Enter second angle: ");
        secondAngle = scanner.nextInt();

        thirdAngle = 180 - (firstAngle + secondAngle);

        System.out.println("Third angle is: " + thirdAngle);

        scanner.close();
    }
}
