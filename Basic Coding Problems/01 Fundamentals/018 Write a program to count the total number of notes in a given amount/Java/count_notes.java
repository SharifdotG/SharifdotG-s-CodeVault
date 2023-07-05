import java.util.Scanner;

public class count_notes {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the amount: ");
        int amount = scanner.nextInt();

        int notesOf500 = amount / 500;
        amount %= 500;

        int notesOf200 = amount / 200;
        amount %= 200;

        int notesOf100 = amount / 100;
        amount %= 100;

        int notesOf50 = amount / 50;
        amount %= 50;

        int notesOf20 = amount / 20;
        amount %= 20;

        int notesOf10 = amount / 10;
        amount %= 10;

        int notesOf5 = amount / 5;
        amount %= 5;

        int notesOf2 = amount / 2;
        amount %= 2;

        int notesOf1 = amount;

        System.out.println("The number of 500 notes is: " + notesOf500);
        System.out.println("The number of 200 notes is: " + notesOf200);
        System.out.println("The number of 100 notes is: " + notesOf100);
        System.out.println("The number of 50 notes is: " + notesOf50);
        System.out.println("The number of 20 notes is: " + notesOf20);
        System.out.println("The number of 10 notes is: " + notesOf10);
        System.out.println("The number of 5 notes is: " + notesOf5);
        System.out.println("The number of 2 notes is: " + notesOf2);
        System.out.println("The number of 1 notes is: " + notesOf1);
    }
}