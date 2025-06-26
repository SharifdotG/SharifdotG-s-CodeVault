import java.util.Scanner;

public class Main {
    private static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    private static void simplify(int[] numeratorDenominator) {
        int numerator = numeratorDenominator[0];
        int denominator = numeratorDenominator[1];

        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }

        int divisor = gcd(Math.abs(numerator), Math.abs(denominator));
        numerator /= divisor;
        denominator /= divisor;

        numeratorDenominator[0] = numerator;
        numeratorDenominator[1] = denominator;
    }

    private static void processOperation(int n1, int d1, int n2, int d2, char op) {
        int resultNumerator, resultDenominator;

        switch (op) {
            case '+':
                resultNumerator = n1 * d2 + n2 * d1;
                resultDenominator = d1 * d2;
                break;
            case '-':
                resultNumerator = n1 * d2 - n2 * d1;
                resultDenominator = d1 * d2;
                break;
            case '*':
                resultNumerator = n1 * n2;
                resultDenominator = d1 * d2;
                break;
            case '/':
                resultNumerator = n1 * d2;
                resultDenominator = n2 * d1;
                break;
            default:
                System.out.println("Invalid operator");
                return;
        }

        System.out.print(resultNumerator + "/" + resultDenominator + " ");

        int[] result = { resultNumerator, resultDenominator };
        simplify(result);

        System.out.println("= " + result[0] + "/" + result[1]);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        scanner.nextLine();

        for (int i = 0; i < T; i++) {
            int n1 = scanner.nextInt();
            char slash1 = scanner.next().charAt(0);
            int d1 = scanner.nextInt();
            char op = scanner.next().charAt(0);
            int n2 = scanner.nextInt();
            char slash2 = scanner.next().charAt(0);
            int d2 = scanner.nextInt();
            scanner.nextLine();

            processOperation(n1, d1, n2, d2, op);
        }

        scanner.close();
    }
}
