import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int positiveNumbers = 0;

        for (int i = 0; i < 6; i++) {
            double number = scanner.nextDouble();
            
            if (number > 0) positiveNumbers++;
        }

        System.out.println(positiveNumbers + " valores positivos");
        
        scanner.close();
    }
}
