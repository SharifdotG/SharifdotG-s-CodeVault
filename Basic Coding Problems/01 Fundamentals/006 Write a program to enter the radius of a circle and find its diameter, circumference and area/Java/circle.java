import java.util.Scanner;

public class circle {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the radius of the circle: ");
        float radius = scanner.nextFloat();

        float diameter = 2 * radius;
        float circumference = 2 * (float) Math.PI * radius;
        float area = (float) Math.PI * radius * radius;

        System.out.println("The diameter of the circle is: " + diameter);
        System.out.println("The circumference of the circle is: " + circumference);
        System.out.println("The area of the circle is: " + area);
    }
}