import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double number = scanner.nextDouble();

        if (number >= 0 && number <= 25) {
            System.out.println("Intervalo [0,25]");
        } else if (number > 25 && number <= 50) {
            System.out.println("Intervalo (25,50]");
        } else if (number > 50 && number <= 75) {
            System.out.println("Intervalo (50,75]");
        } else if (number > 75 && number <= 100) {
            System.out.println("Intervalo (75,100]");
        } else { 
            System.out.println("Fora de intervalo");
        }

        scanner.close();
    }
}