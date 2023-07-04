import java.util.Scanner;

public class rectangle_area {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get the length and width of the rectangle from the user.
        System.out.print("Enter the length of the rectangle: ");
        int length = scanner.nextInt();
        System.out.print("Enter the width of the rectangle: ");
        int width = scanner.nextInt();

        // Calculate the area of the rectangle.
        int area = length * width;

        // Print the area of the rectangle.
        System.out.println("The area of the rectangle is: " + area);
    }
}