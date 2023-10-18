import java.util.Scanner;

public class AreaofaSquare {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the side of a Square: ");
        double side = scanner.nextDouble();
        
        System.out.printf("Area of a Square = %.2f\n", side * side);
        
        scanner.close();
    }
}
