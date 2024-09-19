#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binaryToDecimal(const char *binaryStr) {
    return (int)strtol(binaryStr, NULL, 2);
}

int hexToDecimal(const char *hexStr) { return (int)strtol(hexStr, NULL, 16); }

void decimalToBinary(int decimal, char *binaryStr) {
    int index = 0;
    if (decimal == 0) {
        binaryStr[index++] = '0';
    } else {
        int temp = decimal;
        while (temp > 0) {
            binaryStr[index++] = (temp % 2) ? '1' : '0';
            temp /= 2;
        }
        for (int i = 0; i < index / 2; ++i) {
            char tempChar = binaryStr[i];
            binaryStr[i] = binaryStr[index - i - 1];
            binaryStr[index - i - 1] = tempChar;
        }
    }
    binaryStr[index] = '\0';
}

void decimalToHex(int decimal, char *hexStr) {
    sprintf(hexStr, "%x", decimal);
    for (int i = 0; hexStr[i]; i++) {
        hexStr[i] = tolower(hexStr[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    for (int caseNum = 1; caseNum <= n; ++caseNum) {
        char inputLine[100];
        fgets(inputLine, sizeof(inputLine), stdin);

        char numberStr[50], baseType[10];
        sscanf(inputLine, "%s %s", numberStr, baseType);

        int decimalValue;
        if (strcmp(baseType, "bin") == 0) {
            decimalValue = binaryToDecimal(numberStr);
        } else if (strcmp(baseType, "hex") == 0) {
            decimalValue = hexToDecimal(numberStr);
        } else if (strcmp(baseType, "dec") == 0) {
            decimalValue = atoi(numberStr);
        } else {
            fprintf(stderr, "Unknown base type\n");
            continue;
        }

        char decimalStr[50], hexStr[50], binaryStr[50];
        sprintf(decimalStr, "%d", decimalValue);
        decimalToHex(decimalValue, hexStr);
        decimalToBinary(decimalValue, binaryStr);

        char *firstOne = strchr(binaryStr, '1');
        if (firstOne != NULL) {
            memmove(binaryStr, firstOne, strlen(firstOne) + 1);
        }

        printf("Case %d:\n", caseNum);
        if (strcmp(baseType, "dec") != 0)
            printf("%s dec\n", decimalStr);
        if (strcmp(baseType, "hex") != 0)
            printf("%s hex\n", hexStr);
        if (strcmp(baseType, "bin") != 0)
            printf("%s bin\n", binaryStr);
        printf("\n");
    }

    return 0;
}
