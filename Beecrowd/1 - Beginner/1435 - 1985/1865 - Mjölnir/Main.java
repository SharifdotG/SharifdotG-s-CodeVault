import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();
        scanner.nextLine();

        while (testCases-- > 0) {
            String[] input = scanner.nextLine().split(" ");
            String name = input[0];
            int force = Integer.parseInt(input[1]);

            if (name.equals("Thor")) {
                System.out.println("Y");
            } else System.out.println("N");
        }
        
        scanner.close();
    }
}
