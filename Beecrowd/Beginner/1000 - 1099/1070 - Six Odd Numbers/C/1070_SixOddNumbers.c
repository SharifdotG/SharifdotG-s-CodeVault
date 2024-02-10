#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    for (int i = 1; i <= 6; i++) {
        if (number % 2 != 0) printf("%d\n", number);
        else printf("%d\n", ++number);

        number += 2;
    }
    
    return 0;
}
