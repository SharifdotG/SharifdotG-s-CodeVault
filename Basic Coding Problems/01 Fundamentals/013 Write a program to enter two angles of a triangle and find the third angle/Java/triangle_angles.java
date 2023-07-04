import java.util.Scanner;

public class triangle_angles {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first angle: ");
        int firstAngle = scanner.nextInt();

        System.out.print("Enter the second angle: ");
        int secondAngle = scanner.nextInt();

        int thirdAngle = 180 - (firstAngle + secondAngle);

        System.out.println("The third angle of the triangle is: " + thirdAngle);
    }
}