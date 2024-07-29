public class Main {
    public static void main(String[] args) {
        double s = 1;

        for (int i = 3, j = 2; i <= 39; i += 2, j *= 2) {
            s += (double) i / j;
        }

        System.out.printf("%.2f\n", s);
    }
}
