#include <stdio.h>

int main() {
    int amount;
    scanf("%d", &amount);
    
    printf("%d\n", amount);

    int notes[] = {100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 7; i++) {
        int noteAmount = amount / notes[i];
        
        printf("%d nota(s) de R$ %d,00\n", noteAmount, notes[i]);

        amount -= noteAmount * notes[i];
    }

    return 0;
}