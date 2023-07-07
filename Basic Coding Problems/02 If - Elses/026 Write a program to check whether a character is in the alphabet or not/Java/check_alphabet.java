import java.util.Scanner;

public class check_alphabet {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a character: ");
        char character = scanner.next().charAt(0);

        boolean isLetter = Character.isLetter(character);

        if (isLetter) {
            System.out.println(character + " is in the alphabet.");
        } else {
            System.out.println(character + " is not in the alphabet.");
        }
    }
}