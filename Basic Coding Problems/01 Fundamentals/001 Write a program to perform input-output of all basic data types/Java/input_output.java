import java.util.Scanner;

public class input_output {
    public static void main(String[] args) {
        byte byteValue;
        char character;
        short shortInteger;
        int integer;
        long longInteger;
        float floatValue;
        double doubleValue;

        // Get user input
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a byte: ");
        byteValue = scanner.nextByte();

        System.out.print("Enter a character: ");
        character = scanner.next().charAt(0);

        System.out.print("Enter a short integer: ");
        shortInteger = scanner.nextShort();

        System.out.print("Enter an integer: ");
        integer = scanner.nextInt();

        System.out.print("Enter a long integer: ");
        longInteger = scanner.nextLong();

        System.out.print("Enter a float: ");
        floatValue = scanner.nextFloat();

        System.out.print("Enter a double: ");
        doubleValue = scanner.nextDouble();

        // Print the results
        System.out.println("\nThe byte is: " + byteValue);
        System.out.println("\nThe character is: " + character);
        System.out.println("The short integer is: " + shortInteger);
        System.out.println("The integer is: " + integer);
        System.out.println("The long integer is: " + longInteger);
        System.out.println("The float is: " + floatValue);
        System.out.println("The double is: " + doubleValue);
    }
}