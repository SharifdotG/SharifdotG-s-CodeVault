import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            double ev1 = sc.nextDouble();
            double ev2 = sc.nextDouble();
            double at = sc.nextDouble();
            double d = sc.nextDouble();
            
            if (ev1 == 0) break;

            double n1 = Math.ceil(ev1 / d);
            double n2 = Math.ceil(ev2 / d);

            double answer, p;

            if (at == 3) {
                answer = n1 / (n1 + n2);
            } else {
                p = at / 6.0;
                answer = (1 - Math.pow((1 - p) / p, n1)) / (1 - Math.pow((1 - p) / p, n1 + n2));
            }

            System.out.printf("%.1f\n", answer * 100);
        }
        sc.close();
    }
}
