import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int number = scanner.nextInt();

        int thousands = number / 1000;
        int hundreds = (number % 1000) / 100;
        int tens = (number % 100) / 10;
        int units = number % 10;

        StringBuilder romanNumber = new StringBuilder();

        switch (thousands) {
            case 1:
                romanNumber.append("M");
                break;
            case 2:
                romanNumber.append("MM");
                break;
            case 3:
                romanNumber.append("MMM");
                break;
        }

        switch (hundreds) {
            case 1:
                romanNumber.append("C");
                break;
            case 2:
                romanNumber.append("CC");
                break;
            case 3:
                romanNumber.append("CCC");
                break;
            case 4:
                romanNumber.append("CD");
                break;
            case 5:
                romanNumber.append("D");
                break;
            case 6:
                romanNumber.append("DC");
                break;
            case 7:
                romanNumber.append("DCC");
                break;
            case 8:
                romanNumber.append("DCCC");
                break;
            case 9:
                romanNumber.append("CM");
                break;
        }

        switch (tens) {
            case 1:
                romanNumber.append("X");
                break;
            case 2:
                romanNumber.append("XX");
                break;
            case 3:
                romanNumber.append("XXX");
                break;
            case 4:
                romanNumber.append("XL");
                break;
            case 5:
                romanNumber.append("L");
                break;
            case 6:
                romanNumber.append("LX");
                break;
            case 7:
                romanNumber.append("LXX");
                break;
            case 8:
                romanNumber.append("LXXX");
                break;
            case 9:
                romanNumber.append("XC");
                break;
        }

        switch (units) {
            case 1:
                romanNumber.append("I");
                break;
            case 2:
                romanNumber.append("II");
                break;
            case 3:
                romanNumber.append("III");
                break;
            case 4:
                romanNumber.append("IV");
                break;
            case 5:
                romanNumber.append("V");
                break;
            case 6:
                romanNumber.append("VI");
                break;
            case 7:
                romanNumber.append("VII");
                break;
            case 8:
                romanNumber.append("VIII");
                break;
            case 9:
                romanNumber.append("IX");
                break;
        }

        System.out.println(romanNumber.toString());

        scanner.close();
    }
}
