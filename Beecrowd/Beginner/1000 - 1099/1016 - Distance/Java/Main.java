import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int distance = scanner.nextInt();

        int time = distance * 2;

        System.out.println(time + " minutos");
        
        scanner.close();
    }
}