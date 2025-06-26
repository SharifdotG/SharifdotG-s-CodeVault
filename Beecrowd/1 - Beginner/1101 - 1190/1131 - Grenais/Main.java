import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int inter = 0, gremio = 0, draw = 0, grenais = 0;

        while (true) {
            int i = scanner.nextInt();
            int g = scanner.nextInt();

            if (i > g) inter++;
            else if (i < g) gremio++;
            else draw++;

            grenais++;

            System.out.println("Novo grenal (1-sim 2-nao)");

            int option = scanner.nextInt();

            if (option == 2) break;
        }

        System.out.printf("%d grenais\n", grenais);
        System.out.printf("Inter:%d\n", inter);
        System.out.printf("Gremio:%d\n", gremio);
        System.out.printf("Empates:%d\n", draw);

        if (inter > gremio) System.out.println("Inter venceu mais");
        else if (inter < gremio) System.out.println("Gremio venceu mais");
        else System.out.println("Nao houve vencedor");

        scanner.close();
    }
}
