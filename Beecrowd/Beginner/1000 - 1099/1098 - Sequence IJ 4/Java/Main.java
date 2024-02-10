public class Main {
    public static void main(String[] args) {
        float i = 0, j = 1;

        while (i <= 2.1) {
            if (i == 0 || i == 1 || i > 1.9) {
                System.out.printf("I=%.0f J=%.0f\n", i, j + i);
                System.out.printf("I=%.0f J=%.0f\n", i, j + 1 + i);
                System.out.printf("I=%.0f J=%.0f\n", i, j + 2 + i);
            } else {
                System.out.printf("I=%.1f J=%.1f\n", i, j + i);
                System.out.printf("I=%.1f J=%.1f\n", i, j + 1 + i);
                System.out.printf("I=%.1f J=%.1f\n", i, j + 2 + i);
            }

            i += 0.2;
        }
    }
}
