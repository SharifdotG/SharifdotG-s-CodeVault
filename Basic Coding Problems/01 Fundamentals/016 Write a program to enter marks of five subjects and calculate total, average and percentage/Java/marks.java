import java.util.Scanner;

public class marks {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the marks of the subjects: ");
        int subject1 = scanner.nextInt();
        int subject2 = scanner.nextInt();
        int subject3 = scanner.nextInt();
        int subject4 = scanner.nextInt();
        int subject5 = scanner.nextInt();

        int total = subject1 + subject2 + subject3 + subject4 + subject5;
        float average = total / 5.0f;
        float percentage = (total / 500.0f) * 100;

        System.out.println("The total marks of the subjects is: " + total);
        System.out.println("The average marks of the subjects is: " + average);
        System.out.println("The percentage of the total marks of the subjects is: " + percentage + "%");
    }
}