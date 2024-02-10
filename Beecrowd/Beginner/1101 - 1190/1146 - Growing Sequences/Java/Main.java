import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();

        while(number != 0){
            for(int i = 1; i <= number; i++) {
                if (i == number) System.out.print(i);
                else System.out.print(i + " ");
            }

            System.out.println();
            number = scanner.nextInt();
        }

        scanner.close();
    }
}
