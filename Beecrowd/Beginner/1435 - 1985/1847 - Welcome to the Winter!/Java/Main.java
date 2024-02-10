import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int temp1 = scanner.nextInt();
        int temp2 = scanner.nextInt();
        int temp3 = scanner.nextInt();

        if (temp1 > temp2 && temp2 <= temp3)
            System.out.println(":)");
        else if (temp1 < temp2 && temp2 >= temp3)
            System.out.println(":(");
        else if (temp1 < temp2 && temp2 < temp3 && (temp3 - temp2) < (temp2 - temp1))
            System.out.println(":(");
        else if (temp1 < temp2 && temp2 < temp3 && (temp3 - temp2) >= (temp2 - temp1))
            System.out.println(":)");
        else if (temp1 > temp2 && temp2 > temp3 && (temp2 - temp3) < (temp1 - temp2))
            System.out.println(":)");
        else if (temp1 > temp2 && temp2 > temp3 && (temp2 - temp3) >= (temp1 - temp2))
            System.out.println(":(");
        else if (temp1 == temp2 && temp2 < temp3)
            System.out.println(":)");
        else if (temp1 == temp2 && temp2 > temp3)
            System.out.println(":(");
        else
            System.out.println(":(");

        scanner.close();
    }
}
