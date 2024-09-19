import java.util.Scanner;

public class BasicIO {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter byteValue: ");
        byte byteValue = scanner.nextByte();

        System.out.print("Enter shortValue: ");
        short shortValue = scanner.nextShort();

        System.out.print("Enter intValue: ");
        int intValue = scanner.nextInt();

        System.out.print("Enter longValue: ");
        long longValue = scanner.nextLong();

        System.out.print("Enter longLongValue: ");
        long longLongValue = scanner.nextLong();

        System.out.print("Enter floatValue: ");
        float floatValue = scanner.nextFloat();

        System.out.print("Enter doubleValue: ");
        double doubleValue = scanner.nextDouble();

        System.out.print("Enter charValue: ");
        char charValue = scanner.next().charAt(0);

        System.out.print("Enter stringValue: ");
        String stringValue = scanner.next();

        System.out.println();

        System.out.println("byteValue: " + byteValue);
        System.out.println("shortValue: " + shortValue);
        System.out.println("intValue: " + intValue);
        System.out.println("longValue: " + longValue);
        System.out.println("longLongValue: " + longLongValue);
        System.out.println("floatValue: " + floatValue);
        System.out.println("doubleValue: " + doubleValue);
        System.out.println("charValue: " + charValue);
        System.out.println("stringValue: " + stringValue);

        scanner.close();
    }
}
