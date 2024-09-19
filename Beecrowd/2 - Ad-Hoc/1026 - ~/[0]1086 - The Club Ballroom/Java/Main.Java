import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    private static final int MAXN = 3501;
    private static final int MAXPRIME = 35000;

    public static List<Integer> sieve(int n) {
        List<Integer> primes = new ArrayList<>();
        boolean[] is_prime = new boolean[n + 1];
        for (int i = 0; i <= n; i++) is_prime[i] = true;
        is_prime[0] = is_prime[1] = false;

        for (int i = 2; i <= n; i++) {
            if (is_prime[i]) {
                primes.add(i);
                for (int j = i * 2; j <= n; j += i) {
                    is_prime[j] = false;
                }
            }
        }

        return primes;
    }

    public static void main(String[] args) {
        List<Integer> primes = sieve(MAXPRIME);

        Scanner scanner = new Scanner(System.in);
        int n;
        while ((n = scanner.nextInt()) != 0) {
            List<Integer> josephus = new ArrayList<>();
            for (int i = 1; i <= n; i++) {
                josephus.add(i);
            }

            int idx = 0;
            for (int i = 0; i < n - 1; i++) {
                idx = (idx + primes.get(i) - 1) % josephus.size();
                josephus.remove(idx);
            }

            System.out.println(josephus.get(0));
        }

        scanner.close();
    }
}
