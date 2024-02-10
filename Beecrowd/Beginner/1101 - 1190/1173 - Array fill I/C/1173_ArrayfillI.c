#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    for (int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, number);
        
        number *= 2;
    }
    
    return 0;
}
