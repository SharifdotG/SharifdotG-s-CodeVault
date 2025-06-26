import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int value1 = scanner.nextInt();
        int value2 = scanner.nextInt();
        int sum = 0;
        
        if (value1 > value2) {
            int temp = value1;
            value1 = value2;
            value2 = temp;
        }

        for (int i = value1; i <= value2; i++) {
            if (i % 13 != 0) {
                sum += i;
            }
        }

        System.out.println(sum);
        
        scanner.close();
    }
}
