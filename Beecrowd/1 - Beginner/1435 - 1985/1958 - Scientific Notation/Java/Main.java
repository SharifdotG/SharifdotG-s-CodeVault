import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double number = scanner.nextDouble();
        
        System.out.println(String.format("%+.4E", number));

        scanner.close();
    }
}
