import java.util.Scanner;

public class quadratic_equation {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the value of a, b, c: ");
        float a = scanner.nextFloat();
        float b = scanner.nextFloat();
        float c = scanner.nextFloat();

        float discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            float root1 = (float) ((-b + Math.sqrt(discriminant)) / (2 * a));
            float root2 = (float) ((-b - Math.sqrt(discriminant)) / (2 * a));
            System.out.println("The roots are: " + root1 + " and " + root2);
        } else if (discriminant == 0) {
            float root2;
            float root1 = root2 = -b / (2 * a);
            System.out.println("The roots are: " + root1 + " and " + root2);
        } else {
            float realPart = -b / (2 * a);
            float imaginaryPart = (float) (Math.sqrt(-discriminant) / (2 * a));
            System.out.println("The roots are: " + realPart + " + " + imaginaryPart + "i and " + realPart + " - " + imaginaryPart + "i");
        }
    }
}