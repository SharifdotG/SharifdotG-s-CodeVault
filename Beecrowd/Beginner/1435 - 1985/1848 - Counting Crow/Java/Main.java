import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int cawCounter = 0, cawValue = 0;

        while (cawCounter < 3) {
            String caw = scanner.nextLine();

            if (caw.equals("--*")) cawValue += 1;
            else if (caw.equals("-*-")) cawValue += 2;
            else if (caw.equals("-**")) cawValue += 3;
            else if (caw.equals("*--")) cawValue += 4;
            else if (caw.equals("*-*")) cawValue += 5;
            else if (caw.equals("**-")) cawValue += 6;
            else if (caw.equals("***")) cawValue += 7;
            else if (caw.equals("caw caw")) {
                System.out.println(cawValue);
                
                cawValue = 0;
                cawCounter++;
            }
        }

        scanner.close();
    }
}
