import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            int x = scanner.nextInt();

            int[] fibValues = new int[x + 1];
            int[] callCounts = new int[x + 1];

            fibValues[0] = 0, fibValues[1] = 1;
            callCounts[0] = , callCounts[1] = 1;

            for (int j = 2; j <= x; j++) {
                fibValues[j] = fibValues[j - 1] + fibValues[j - 2];
                callCounts[j] = callCounts[j - 1] + callCounts[j - 2] + 1;
            }

            if (x == 0) {
                System.out.println("fib(" + x + ") = 1 calls = " + fibValues[x]);
            } else {
                System.out.println("fib(" + x + ") = " + (callCounts[x] - 1) + " calls = " + fibValues[x]);
            }
        }
        scanner.close();
    }
}