#include <stdio.h>

int main() {
    int number;

    while (scanf("%d", &number) == 1 && number != 0) {
        int sum = 0;
        
        if (number % 2 == 0) {
            for (int i = 0; i < 5; i++) {
                sum += number;
                number += 2;
            }
        } else {
            number++;
            
            for (int i = 0; i < 5; i++) {
                sum += number;
                number += 2;
            }
        }

        printf("%d\n", sum);
    }
    
    return 0;
}
