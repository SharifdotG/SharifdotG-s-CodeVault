import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int z = scanner.nextInt();

        while (z <= x) {
            z = scanner.nextInt();
        }

        int sum = 0, count = 0;

        for (int i = x; sum <= z; i++) {
            sum += i;
            count++;
        }

        System.out.println(count);
        
        scanner.close();
    }
}
