import java.util.Scanner;

public class triangle_type {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the three sides of the triangle: ");
        int sideA = scanner.nextInt();
        int sideB = scanner.nextInt();
        int sideC = scanner.nextInt();

        if (sideA == sideB && sideB == sideC) {
            System.out.println("The triangle is equilateral.");
        } else if (sideA == sideB || sideA == sideC || sideB == sideC) {
            System.out.println("The triangle is isosceles.");
        } else {
            System.out.println("The triangle is scalene.");
        }
    }
}