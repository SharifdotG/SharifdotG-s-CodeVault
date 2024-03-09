#include <stdio.h>

int main() {
    double amount;
    scanf("%lf", &amount);

    int notes[6] = {100, 50, 20, 10, 5, 2};
    int coins[6] = {100, 50, 25, 10, 5, 1};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int note = notes[i];
        int quantity = amount / note;
        amount -= quantity * note;
        printf("%d nota(s) de R$ %.2lf\n", quantity, (double)note / 1.00);
    }

    amount *= 100;

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int coin = coins[i];
        int quantity = amount / coin;
        amount -= quantity * coin;
        printf("%d moeda(s) de R$ %.2lf\n", quantity, (double)coin / 100.0);
    }
    
    return 0;
}