import java.util.Scanner;

public class Main {
    private static int binaryToDecimal(String binaryStr) {
        return Integer.parseInt(binaryStr, 2);
    }

    private static int hexToDecimal(String hexStr) {
        return Integer.parseInt(hexStr, 16);
    }

    private static String decimalToBinary(int decimal) {
        String binaryStr = Integer.toBinaryString(decimal);
        return binaryStr;
    }

    private static String decimalToHex(int decimal) {
        String hexStr = Integer.toHexString(decimal);
        return hexStr.toLowerCase();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();

        for (int caseNum = 1; caseNum <= n; ++caseNum) {
            String inputLine = scanner.nextLine();
            String[] parts = inputLine.split(" ");
            String numberStr = parts[0];
            String baseType = parts[1];

            int decimalValue;
            if (baseType.equals("bin")) {
                decimalValue = binaryToDecimal(numberStr);
            } else if (baseType.equals("hex")) {
                decimalValue = hexToDecimal(numberStr);
            } else if (baseType.equals("dec")) {
                decimalValue = Integer.parseInt(numberStr);
            } else {
                System.err.println("Unknown base type");
                continue;
            }

            String decimalStr = Integer.toString(decimalValue);
            String hexStr = decimalToHex(decimalValue);
            String binaryStr = decimalToBinary(decimalValue);

            binaryStr = binaryStr.replaceFirst("^0+(?!$)", "");

            System.out.println("Case " + caseNum + ":");
            if (!baseType.equals("dec")) System.out.println(decimalStr + " dec");
            if (!baseType.equals("hex")) System.out.println(hexStr + " hex");
            if (!baseType.equals("bin")) System.out.println(binaryStr + " bin");
            System.out.println();

        }
        scanner.close();
    }
}
