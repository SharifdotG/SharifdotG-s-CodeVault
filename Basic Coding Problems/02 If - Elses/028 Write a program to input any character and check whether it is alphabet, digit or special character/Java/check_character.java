import java.util.Scanner;

public class check_character {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter any character: ");
        char character = scanner.next().charAt(0);

        if (Character.isAlphabetic(character)) {
            System.out.println("The character is an alphabet.");
        } else if (Character.isDigit(character)) {
            System.out.println("The character is a digit.");
        } else {
            System.out.println("The character is a special character.");
        }
    }
}