import java.util.Scanner;

public class Main {
    private static final double PI = 3.14159;
    private static final double GRAVITY = 9.80665;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextDouble()) {
            double initialHeight = scanner.nextDouble();
            double minDistance = scanner.nextDouble();
            double maxDistance = scanner.nextDouble();
            int numShots = scanner.nextInt();

            for (int i = 0; i < numShots; i++) {
                double angleDegrees = scanner.nextDouble();
                double initialSpeed = scanner.nextDouble();

                double angleRadians = angleDegrees * PI / 180;

                double horizontalSpeed = initialSpeed * Math.cos(angleRadians);
                double verticalSpeed = initialSpeed * Math.sin(angleRadians);

                double timeToRise = verticalSpeed / GRAVITY;

                double maxHeight = (verticalSpeed * verticalSpeed) / (2 * GRAVITY) + initialHeight;

                double finalVerticalSpeed = Math.sqrt(2 * GRAVITY * maxHeight);

                double timeToFall = finalVerticalSpeed / GRAVITY;

                double totalTime = timeToRise + timeToFall;

                double horizontalDistance = horizontalSpeed * totalTime;

                if (horizontalDistance > minDistance && horizontalDistance < maxDistance) {
                    System.out.printf("%.5f -> DUCK%n", horizontalDistance);
                } else {
                    System.out.printf("%.5f -> NUCK%n", horizontalDistance);
                }
            }
        }

        scanner.close();
    }
}
