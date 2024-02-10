#include <stdio.h>
#include <stdbool.h>

int main() {
    int number;
    scanf("%d", &number);

    while (number--) {
        int value;
        scanf("%d", &value);

        bool isPrime = true;

        for (int j = 2; j < value; j++) {
            if (value % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) printf("%d eh primo\n", value);
        else printf("%d nao eh primo\n", value);
    }
    
    return 0;
}
