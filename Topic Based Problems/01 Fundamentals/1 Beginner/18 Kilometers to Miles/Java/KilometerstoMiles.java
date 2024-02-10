import java.util.Scanner;

public class KilometerstoMiles {
    public static void main(String[] args) {
        double kilometers;
        
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the distance in Kilometers: ");
        kilometers = scanner.nextDouble();
        scanner.close();

        System.out.printf("Distance in Miles = %.2f%n", kilometers * 0.621371);
    }
}
