import java.util.Scanner;

public class triangle_area {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the base of the triangle: ");
        float base = scanner.nextFloat();

        System.out.print("Enter the height of the triangle: ");
        float height = scanner.nextFloat();

        float area = (float) 0.5 * base * height;

        System.out.printf("The area of the triangle is: %.2f\n", area);
    }
}