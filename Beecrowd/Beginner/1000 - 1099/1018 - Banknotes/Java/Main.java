import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int amount = scanner.nextInt();

        System.out.println(amount);

        int[] notes = {100, 50, 20, 10, 5, 2, 1};

        for (int i = 0; i < 7; i++) {
            int noteAmount = amount / notes[i];

            System.out.printf("%d nota(s) de R$ %d,00\n", noteAmount, notes[i]);
            
            amount -= noteAmount * notes[i];
        }
        
        scanner.close();
    }
}
