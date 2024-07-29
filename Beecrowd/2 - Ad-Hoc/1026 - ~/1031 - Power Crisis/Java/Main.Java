import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            int regions = scanner.nextInt();
            if (regions == 0) break;

            int randomNumber = 1;

            while (true) {
                ArrayList<Integer> list = new ArrayList<>();
                for (int i = 1; i <= regions; i++) {
                    list.add(i);
                }

                int i = 0;
                while (list.size() > 1) {
                    list.remove(i);
                    i = (i + randomNumber - 1) % list.size();
                }

                if (list.get(0) == 13) {
                    System.out.println(randomNumber);
                    break;
                }

                randomNumber++;
            }
        }

        scanner.close();
    }
}
