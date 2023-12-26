import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        while (scanner.hasNext()) {
            int slugs = scanner.nextInt();
            int maxSpeed = 0;

            for (int i = 0; i < slugs; i++) {
                int speed = scanner.nextInt();

                if (speed > maxSpeed) maxSpeed = speed;
            }

            if (maxSpeed < 10) System.out.println(1);
            else if (maxSpeed >= 10 && maxSpeed < 20) System.out.println(2);
            else System.out.println(3);
        }
        
        scanner.close();
    }
}
