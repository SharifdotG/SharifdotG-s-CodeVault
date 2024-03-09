import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long sides = scanner.nextLong();
        long length = scanner.nextLong();

        System.out.println(sides * length);

        scanner.close();
    }
}
