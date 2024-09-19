import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();

        for (int i = 0; i < testCases; i++) {
            int peoples = scanner.nextInt();
            int steps = scanner.nextInt();

            ArrayList<Integer> people = new ArrayList<>();
            for (int j = 0; j < peoples; j++) {
                people.add(j + 1);
            }

            int idx = 0;
            while (people.size() > 1) {
                idx = (idx + steps - 1) % people.size();
                people.remove(idx);
            }

            System.out.println("Case " + (i + 1) + ": " + people.get(0));
        }

        scanner.close();
    }
}
