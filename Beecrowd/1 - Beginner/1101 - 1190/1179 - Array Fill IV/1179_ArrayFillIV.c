#include <stdio.h>

int main() {
    int par[5], impar[5], number, parIndex = 0, imparIndex = 0;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &number);

        if (number % 2 == 0) {
            par[parIndex] = number;
            parIndex++;
        } else {
            impar[imparIndex] = number;
            imparIndex++;
        }

        if (parIndex == 5) {
            for (int j = 0; j < 5; j++) {
                printf("par[%d] = %d\n", j, par[j]);
            }

            parIndex = 0;
        }

        if (imparIndex == 5) {
            for (int j = 0; j < 5; j++) {
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            
            imparIndex = 0;
        }
    }

    for (int i = 0; i < imparIndex; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (int i = 0; i < parIndex; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }
    
    return 0;
}
