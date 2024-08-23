import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        StringBuilder output = new StringBuilder();

        while (scanner.hasNext()) {
            String n = scanner.next();
            if (n.charAt(0) == '-') {
                break;
            }
            
            if (n.charAt(1) == 'x') {
                int x = Integer.parseInt(n.substring(2), 16);
                output.append(x).append("\n");
            } else {
                int num = Integer.parseInt(n);
                output.append(String.format("0x%X", num)).append("\n");
            }
        }

        System.out.print(output.toString());
        scanner.close();
    }
}
