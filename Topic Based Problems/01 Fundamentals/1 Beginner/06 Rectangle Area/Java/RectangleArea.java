import java.util.Scanner;

public class RectangleArea {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int length, width;

        System.out.print("Enter length: ");
        length = scanner.nextInt();

        System.out.print("Enter width: ");
        width = scanner.nextInt();

        System.out.println("Area of rectangle is: " + (length * width));

        scanner.close();
    }
}
