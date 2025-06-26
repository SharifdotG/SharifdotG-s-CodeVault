#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    
    while (number != 0) {
        for (int i = 1; i <= number; i++) {
            if (i == number) printf("%d\n", i);
            else printf("%d ", i);
        }
        
        scanf("%d", &number);
    }
    
    return 0;
}
