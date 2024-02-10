#include <stdio.h>

int main() {
    int positiveNumbers = 0;
    double number;

    for (int i = 0; i < 6; i++) {
        scanf("%lf", &number);
        
        if (number > 0) positiveNumbers++;
    }

    printf("%d valores positivos\n", positiveNumbers);
    
    return 0;
}
