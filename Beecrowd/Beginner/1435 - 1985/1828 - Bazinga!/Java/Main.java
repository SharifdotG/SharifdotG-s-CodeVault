import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();
        scanner.nextLine();

        for (int i = 1; i <= testCases; i++) {
            String sheldon = scanner.next();
            String raj = scanner.next();

            if (sheldon.equals("tesoura") && raj.equals("papel"))
                System.out.println("Caso #" + i + ": Bazinga!");
            else if (sheldon.equals("papel") && raj.equals("pedra"))
                System.out.println("Caso #" + i + ": Bazinga!");
            else if (sheldon.equals("pedra") && raj.equals("lagarto"))
                System.out.println("Caso #" + i + ": Bazinga!");
            else if (sheldon.equals("lagarto") && raj.equals("Spock"))
                System.out.println("Caso #" + i + ": Bazinga!");
            else if (sheldon.equals("Spock") && raj.equals("tesoura"))
                System.out.println("Caso #" + i + ": Bazinga!");
            else if (sheldon.equals("tesoura") && raj.equals("lagarto"))
                System.out.println("Caso #" + i + ": Bazinga!");
            else if (sheldon.equals("lagarto") && raj.equals("papel"))
                System.out.println("Caso #" + i + ": Bazinga!");
            else if (sheldon.equals("papel") && raj.equals("Spock"))
                System.out.println("Caso #" + i + ": Bazinga!");
            else if (sheldon.equals("Spock") && raj.equals("pedra"))
                System.out.println("Caso #" + i + ": Bazinga!");
            else if (sheldon.equals("pedra") && raj.equals("tesoura"))
                System.out.println("Caso #" + i + ": Bazinga!");
            else if (sheldon.equals(raj))
                System.out.println("Caso #" + i + ": De novo!");
            else System.out.println("Caso #" + i + ": Raj trapaceou!");
        }

        scanner.close();
    }
}
