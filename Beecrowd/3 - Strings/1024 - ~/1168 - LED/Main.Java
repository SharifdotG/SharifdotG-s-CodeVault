import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        while (n-- > 0) {
            String s = scanner.next();

            int leds = 0;
            for (char c : s.toCharArray()) {
                switch (c) {
                    case '1':
                        leds += 2;
                        break;
                    case '2':
                    case '3':
                    case '5':
                        leds += 5;
                        break;
                    case '4':
                        leds += 4;
                        break;
                    case '6':
                    case '9':
                    case '0':
                        leds += 6;
                        break;
                    case '7':
                        leds += 3;
                        break;
                    case '8':
                        leds += 7;
                        break;
                }
            }

            System.out.println(leds + " leds");
        }

        scanner.close();
    }
}