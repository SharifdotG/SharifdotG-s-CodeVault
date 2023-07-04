import java.util.Scanner;

public class centimeter_to_meter_kilometer {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the length in centimeter: ");
        int lengthInCentimeter = scanner.nextInt();

        float lengthInMeters = lengthInCentimeter / 100.0F;
        float lengthInKilometers = lengthInCentimeter / 100000.0F;

        System.out.printf("The length in meter is: %.2f\n", lengthInMeters);
        System.out.printf("The length in kilometer is: %.2f\n", lengthInKilometers);
    }
}