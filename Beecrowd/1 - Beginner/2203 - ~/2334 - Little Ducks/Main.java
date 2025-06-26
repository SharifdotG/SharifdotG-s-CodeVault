import java.math.BigInteger;
import java.util.Scanner;

// I get TLE with this solution

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        while (scanner.hasNext()) {
            BigInteger ducks = scanner.nextBigInteger();

            if (ducks.equals(BigInteger.valueOf(-1))) {
                break;
            }

            if (ducks.equals(BigInteger.valueOf(0))) {
                System.out.println(0);
            } else {
                System.out.println(ducks.subtract(BigInteger.valueOf(1)));
            }
        }

        scanner.close();
    }
}
