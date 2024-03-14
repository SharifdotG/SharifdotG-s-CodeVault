import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        float grade1 = scanner.nextFloat();
        float grade2 = scanner.nextFloat();
        float grade3 = scanner.nextFloat();
        float grade4 = scanner.nextFloat();

        float average = (grade1 * 2 + grade2 * 3 + grade3 * 4 + grade4 * 1) / 10;

        System.out.printf("Media: %.1f\n", average);

        if (average >= 7.0) {
            System.out.println("Aluno aprovado.");
        } else if (average < 5.0){
            System.out.println("Aluno reprovado.");
        } else {
            System.out.println("Aluno em exame.");

            float exam = scanner.nextFloat();
            System.out.printf("Nota do exame: %.1f\n", exam);

            average = (average + exam) / 2;

            if(average >= 5.0) {
                System.out.println("Aluno aprovado.");
            } else {
                System.out.println("Aluno reprovado.");
            }

            System.out.printf("Media final: %.1f\n", average);
        }

        scanner.close();
    }
}
