import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        long stars = scanner.nextLong();

        long[] sheep = new long[(int)stars];
        long[] star = new long[(int)stars];
        long starCount = 0, sheepCount = 0;

        for (int i = 0; i < stars; i++) {
            sheep[i] = scanner.nextLong();
        }

        for (int i = 0; i < stars; ) {
            if (sheep[i] % 2 == 1) {
                star[i] = 1;
                sheep[i]--;
                
                i++;
            } else if (sheep[i] % 2 == 0) {
                if (sheep[i] > 0) {
                    star[i] = 1;
                    sheep[i]--;
                }

                i--;
            }
            
            if (i < 0 || i >= stars) break;
        }

        for (int i = 0; i < stars; i++) {
            sheepCount += sheep[i];
            starCount += star[i];
        }

        System.out.println(starCount + " " + sheepCount);

        scanner.close();
    }
}
