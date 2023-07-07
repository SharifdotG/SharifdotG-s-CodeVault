import java.util.Scanner;

public class uppercase_lowercase_alphabet {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a character: ");
        char character = scanner.next().charAt(0);

        if (Character.isUpperCase(character)) {
            System.out.println("The character is uppercase alphabet.");
        } else if (Character.isLowerCase(character)) {
            System.out.println("The character is lowercase alphabet.");
        } else {
            System.out.println("The character is not an alphabet.");
        }
    }
}