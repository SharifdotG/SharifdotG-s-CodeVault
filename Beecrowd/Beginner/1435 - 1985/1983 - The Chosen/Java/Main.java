import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int students = scanner.nextInt();

        int[] student = new int[students];
        double[] grade = new double[students];

        for (int i = 0; i < students; i++) {
            student[i] = scanner.nextInt();
            grade[i] = scanner.nextDouble();
        }

        double highestGrade = grade[0];
        int highestGradeStudent = student[0];

        for (int i = 1; i < students; i++) {
            if (grade[i] > highestGrade) {
                highestGrade = grade[i];
                highestGradeStudent = student[i];
            }
        }

        if (highestGrade >= 8) {
            System.out.println(highestGradeStudent);
        } else {
            System.out.println("Minimum note not reached");
        }

        scanner.close();
    }
}
