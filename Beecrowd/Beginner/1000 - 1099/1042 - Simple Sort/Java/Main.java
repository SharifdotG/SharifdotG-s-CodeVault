import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();

        int[] numbers = {a, b, c};
        Arrays.sort(numbers);

        System.out.println(numbers[0]);
        System.out.println(numbers[1]);
        System.out.println(numbers[2]);
        System.out.println();

        System.out.println(a);
        System.out.println(b);
        System.out.println(c);

        scanner.close();
    }
}
