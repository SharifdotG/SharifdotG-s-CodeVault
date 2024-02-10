import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double pointX = scanner.nextDouble();
        double pointY = scanner.nextDouble();

        if (pointX == 0 && pointY == 0) System.out.println("Origem");
        else if (pointX == 0) System.out.println("Eixo Y");
        else if (pointY == 0) System.out.println("Eixo X");
        else if (pointX > 0 && pointY > 0) System.out.println("Q1");
        else if (pointX < 0 && pointY > 0) System.out.println("Q2");
        else if (pointX < 0 && pointY < 0) System.out.println("Q3");
        else System.out.println("Q4");

        scanner.close();
    }
}
