import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();
        
        int value = 1;

        while (number-- > 0) {
            System.out.println(value + " " + (value + 1) + " " + (value + 2) + " PUM");
            value += 4;
        }
        
        scanner.close();
    }
}
