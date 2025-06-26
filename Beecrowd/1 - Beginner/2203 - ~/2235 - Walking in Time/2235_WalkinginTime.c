#include <stdio.h>

int main() {
    int credit1, credit2, credit3;
    scanf("%d %d %d", &credit1, &credit2, &credit3);

    if (credit1 == credit2 || credit1 == credit3 ||
        credit2 == credit3 || credit1 + credit2 == credit3 ||
        credit1 + credit3 == credit2 || credit2 + credit3 == credit1) {
        printf("S\n");
    } else printf("N\n");

    return 0;
}
