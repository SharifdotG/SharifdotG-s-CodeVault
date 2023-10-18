import java.util.Scanner;

public class CalculateBMI {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        double weight = scanner.nextDouble();
        double height = scanner.nextDouble();

        double bmi = weight / (height * height);

        System.out.println(bmi);
        
        scanner.close();
    }
}
