import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int numberOfPeople = scanner.nextInt();
        int theonAnswer = scanner.nextInt();
        int theonAnswerPosition = 0;
        int minimum = theonAnswer;

        for (int i = 1; i < numberOfPeople; i++) {
            theonAnswer = scanner.nextInt();

            if (theonAnswer < minimum) {
                minimum = theonAnswer;
                theonAnswerPosition = i;
            }
        }

        System.out.println(theonAnswerPosition + 1);
        
        scanner.close();
    }
}
