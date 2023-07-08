import java.util.Scanner;

public class triangle_validity {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the angles of the triangle: ");
        int angleA = scanner.nextInt();
        int angleB = scanner.nextInt();
        int angleC = scanner.nextInt();

        if (angleA + angleB + angleC == 180 && angleA > 0 && angleB > 0 && angleC > 0) {
            System.out.println("The triangle is valid.");
        } else {
            System.out.println("The triangle is not valid.");
        }
    }
}