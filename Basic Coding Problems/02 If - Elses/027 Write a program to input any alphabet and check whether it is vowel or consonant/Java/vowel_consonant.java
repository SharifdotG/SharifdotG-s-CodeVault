import java.util.Scanner;

public class vowel_consonant {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter any alphabet: ");
        char letter = scanner.next().charAt(0);

        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
            System.out.println("The alphabet is a vowel.");
        } else {
            System.out.println("The alphabet is a consonant.");
        }
    }
}