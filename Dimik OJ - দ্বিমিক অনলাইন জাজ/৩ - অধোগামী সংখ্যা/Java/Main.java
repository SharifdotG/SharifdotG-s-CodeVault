public class Main {
    public static void main(String[] args) {
        for (int i = 1000; i >= 1; i--) {
            System.out.print(i + "\t");

            if (i % 5 == 1) {
                System.out.println();
            }
        }
    }
}
