import java.util.Scanner;

public class simple_interest {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Get the principal amount, time, and interest rate from the user.
        System.out.print("Enter the principal amount: ");
        float principal = input.nextFloat();

        System.out.print("Enter the time period in years: ");
        float time = input.nextFloat();

        System.out.print("Enter the interest rate: ");
        float rateOfInterest = input.nextFloat();

        // Calculate the simple interest.
        float simpleInterest = principal * time * rateOfInterest / 100;

        // Print the simple interest.
        System.out.println("The simple interest is: " + simpleInterest);
    }
}