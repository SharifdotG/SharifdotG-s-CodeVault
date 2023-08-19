import java.util.Scanner;

public class RectanglePerimeter {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the length of the rectangle: ");
        int length = scanner.nextInt();

        System.out.print("Enter the breadth of the rectangle: ");
        int breadth = scanner.nextInt();

        int perimeter = 2 * (length + breadth);

        System.out.println("The perimeter of the rectangle is: " + perimeter);

        scanner.close();
    }
}