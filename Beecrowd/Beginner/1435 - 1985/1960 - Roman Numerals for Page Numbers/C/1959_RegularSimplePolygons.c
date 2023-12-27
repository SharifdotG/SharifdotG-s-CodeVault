#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int thousands = number / 1000;
    int hundreds = (number % 1000) / 100;
    int tens = (number % 100) / 10;
    int units = number % 10;

    char romanNumber[20] = "";

    switch (thousands) {
        case 1:
            strcat(romanNumber, "M");
            break;
        case 2:
            strcat(romanNumber, "MM");
            break;
        case 3:
            strcat(romanNumber, "MMM");
            break;
    }

    switch (hundreds) {
        case 1:
            strcat(romanNumber, "C");
            break;
        case 2:
            strcat(romanNumber, "CC");
            break;
        case 3:
            strcat(romanNumber, "CCC");
            break;
        case 4:
            strcat(romanNumber, "CD");
            break;
        case 5:
            strcat(romanNumber, "D");
            break;
        case 6:
            strcat(romanNumber, "DC");
            break;
        case 7:
            strcat(romanNumber, "DCC");
            break;
        case 8:
            strcat(romanNumber, "DCCC");
            break;
        case 9:
            strcat(romanNumber, "CM");
            break;
    }

    switch (tens) {
        case 1:
            strcat(romanNumber, "X");
            break;
        case 2:
            strcat(romanNumber, "XX");
            break;
        case 3:
            strcat(romanNumber, "XXX");
            break;
        case 4:
            strcat(romanNumber, "XL");
            break;
        case 5:
            strcat(romanNumber, "L");
            break;
        case 6:
            strcat(romanNumber, "LX");
            break;
        case 7:
            strcat(romanNumber, "LXX");
            break;
        case 8:
            strcat(romanNumber, "LXXX");
            break;
        case 9:
            strcat(romanNumber, "XC");
            break;
    }

    switch (units) {
        case 1:
            strcat(romanNumber, "I");
            break;
        case 2:
            strcat(romanNumber, "II");
            break;
        case 3:
            strcat(romanNumber, "III");
            break;
        case 4:
            strcat(romanNumber, "IV");
            break;
        case 5:
            strcat(romanNumber, "V");
            break;
        case 6:
            strcat(romanNumber, "VI");
            break;
        case 7:
            strcat(romanNumber, "VII");
            break;
        case 8:
            strcat(romanNumber, "VIII");
            break;
        case 9:
            strcat(romanNumber, "IX");
            break;
    }

    printf("%s\n", romanNumber);

    return 0;
}
