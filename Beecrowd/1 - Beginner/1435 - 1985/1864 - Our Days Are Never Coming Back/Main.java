import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String phrase = "LIFE IS NOT A PROBLEM TO BE SOLVED";
        Scanner scanner = new Scanner(System.in);
        int numberOfCharacters = scanner.nextInt();

        for (int i = 0; i < numberOfCharacters; i++) {
            System.out.print(phrase.charAt(i));
        }

        System.out.println();
        
        scanner.close();
    }
}
