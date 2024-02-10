import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double salary = scanner.nextDouble();

        double newSalary;
        int percentage;

        if (salary <= 400) {
            newSalary = salary * 1.15;
            percentage = 15;
        } else if (salary <= 800) {
            newSalary = salary * 1.12;
            percentage = 12;
        } else if (salary <= 1200) {
            newSalary = salary * 1.10;
            percentage = 10;
        } else if (salary <= 2000) {
            newSalary = salary * 1.07;
            percentage = 7;
        } else {
            newSalary = salary * 1.04;
            percentage = 4;
        }

        System.out.printf("Novo salario: %.2f\n", newSalary);
        System.out.printf("Reajuste ganho: %.2f\n", newSalary - salary);
        System.out.printf("Em percentual: %d %%\n", percentage);

        scanner.close();
    }
}
