public class Main {
    public static void main(String[] args) {
        int i = 1, j = 7;

        while (i <= 9) {
            for (int k = 0; k < 3; k++) {
                System.out.println("I=" + i + " J=" + j);
                j--;
            }

            i += 2;
            j += 5;
        }
    }
}
