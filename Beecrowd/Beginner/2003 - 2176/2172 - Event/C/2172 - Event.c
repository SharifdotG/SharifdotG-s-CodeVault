#include <stdio.h>

int main() {
    int increaseEXP, monsterEXP;

    while (scanf("%d %d", &increaseEXP, &monsterEXP) == 2 && increaseEXP != 0 && monsterEXP != 0) {
        printf("%d\n", increaseEXP * monsterEXP);
    }

    return 0;
}
