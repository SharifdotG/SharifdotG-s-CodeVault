import java.util.Scanner;

public class equilateral_triangle {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the side of the equilateral triangle: ");
        float side = scanner.nextFloat();

        float area = (float) (Math.sqrt(3) / 4) * side * side;

        System.out.println("The area of the equilateral triangle is: " + area);
    }
}