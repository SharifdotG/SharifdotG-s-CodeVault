#include <stdio.h>
#include <string.h>

int main() {
    int cawCounter = 0, cawValue = 0;

    while (cawCounter < 3) {
        char caw[10];
        fgets(caw, sizeof(caw), stdin);
        caw[strcspn(caw, "\r\n")] = 0;
        
        if (strcmp(caw, "--*") == 0) cawValue += 1;
        else if (strcmp(caw, "-*-") == 0) cawValue += 2;
        else if (strcmp(caw, "-**") == 0) cawValue += 3;
        else if (strcmp(caw, "*--") == 0) cawValue += 4;
        else if (strcmp(caw, "*-*") == 0) cawValue += 5;
        else if (strcmp(caw, "**-") == 0) cawValue += 6;
        else if (strcmp(caw, "***") == 0) cawValue += 7;
        else if (strcmp(caw, "caw caw") == 0) {
            printf("%d\n", cawValue);
            
            cawValue = 0;
            cawCounter++;
        }
    }

    return 0;
}
