#include <stdio.h>
#include <string.h>

int main() {
    int food;
    while (scanf("%d", &food) && food != 0) {
        int total = 0;

        while (food--) {
            int amount;
            char name[20];
            scanf("%d %[^\n]", &amount, name);

            if (strcmp(name, "suco de laranja") == 0) {
                total += amount * 120;
            } else if (strcmp(name, "morango fresco") == 0) {
                total += amount * 85;
            } else if (strcmp(name, "mamao") == 0) {
                total += amount * 85;
            } else if (strcmp(name, "goiaba vermelha") == 0) {
                total += amount * 70;
            } else if (strcmp(name, "manga") == 0) {
                total += amount * 56;
            } else if (strcmp(name, "laranja") == 0) {
                total += amount * 50;
            } else if (strcmp(name, "brocolis") == 0) {
                total += amount * 34;
            }
        }

        if (total < 110) {
            printf("Mais %d mg\n", 110 - total);
        } else if (total > 130) {
            printf("Menos %d mg\n", total - 130);
        } else printf("%d mg\n", total);
    }

    return 0;
}
