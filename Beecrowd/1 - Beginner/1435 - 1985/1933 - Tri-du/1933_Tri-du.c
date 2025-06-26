#include <stdio.h>

int main() {
    int card1, card2;
    scanf("%d %d", &card1, &card2);

    if (card1 == card2) printf("%d\n", card1);
    else if (card1 > card2) printf("%d\n", card1);
    else printf("%d\n", card2);

    return 0;
}
