import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNext()) {
            int fiddlesticksX = scanner.nextInt();
            int fiddlesticksY = scanner.nextInt();
            int invaderX = scanner.nextInt();
            int invaderY = scanner.nextInt();
            int invaderSpeed = scanner.nextInt();
            int castingRadius = scanner.nextInt();
            int crowRadius = scanner.nextInt();

            double distance = Math.sqrt(Math.pow(invaderX - fiddlesticksX, 2) + Math.pow(invaderY - fiddlesticksY, 2)) + invaderSpeed * 1.5;
            double range = castingRadius + crowRadius;

            if (distance <= range) {
                System.out.println("Y");
            } else System.out.println("N");
        }
        
        scanner.close();
    }
}
