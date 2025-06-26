import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int numbersInList = scanner.nextInt();

        int multiplesOf2 = 0, multiplesOf3 = 0, multiplesOf4 = 0, multiplesOf5 = 0;

        while (numbersInList-- > 0) {
            int number = scanner.nextInt();

            if (number % 2 == 0) multiplesOf2++;
            if (number % 3 == 0) multiplesOf3++;
            if (number % 4 == 0) multiplesOf4++;
            if (number % 5 == 0) multiplesOf5++;
        }

        System.out.println(multiplesOf2 + " Multiplo(s) de 2");
        System.out.println(multiplesOf3 + " Multiplo(s) de 3");
        System.out.println(multiplesOf4 + " Multiplo(s) de 4");
        System.out.println(multiplesOf5 + " Multiplo(s) de 5");

        scanner.close();
    }
}
