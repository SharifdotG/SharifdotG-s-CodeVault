import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int count = 0, pos = 0, i = 1;

        while (scanner.hasNext()) {
            String subsequence = scanner.next();
            String sequence = scanner.next();

            while (pos != -1) {
                pos = sequence.indexOf(subsequence, pos);

                if (pos != -1) {
                    count++;
                    pos++;
                }
            }

            System.out.println("Caso #" + i + ":");

            if (count == 0) {
                System.out.println("Nao existe subsequencia");
            } else {
                System.out.println("Qtd.Subsequencias: " + count);
                System.out.println("Pos: " + (sequence.lastIndexOf(subsequence) + 1));
            }

            System.out.println();

            count = 0;
            pos = 0;

            i++;
        }

        scanner.close();
    }
}
