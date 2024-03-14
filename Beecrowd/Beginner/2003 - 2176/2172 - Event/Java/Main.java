import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int increaseEXP, monsterEXP;

        while (scanner.hasNextInt()) {
            increaseEXP = scanner.nextInt();
            monsterEXP = scanner.nextInt();

            if (increaseEXP == 0 || monsterEXP == 0) {
                break;
            }

            System.out.println(increaseEXP * monsterEXP);
        }

        scanner.close();
    }
}
