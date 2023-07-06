import java.util.Scanner;

public class find_maximum_between_four_numbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter four numbers: ");
        int first = scanner.nextInt();
        int second = scanner.nextInt();
        int third = scanner.nextInt();
        int fourth = scanner.nextInt();

        int max = first;
        if (second > max) {
            max = second;
        } if (third > max) {
            max = third;
        } if (fourth > max) {
            max = fourth;
        }

        System.out.println("The maximum number is: " + max);
    }
}