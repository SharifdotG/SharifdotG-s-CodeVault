import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double volume, diameter;

        while (scanner.hasNext()) {
            volume = scanner.nextDouble();
            diameter = scanner.nextDouble();

            double radius = diameter / 2;
            double area = 3.14 * radius * radius;
            double height = volume / area;

            System.out.printf("ALTURA = %.2f\n", height);
            System.out.printf("AREA = %.2f\n", area);
        }

        scanner.close();
    }
}
