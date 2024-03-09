#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {
        printf("Valido-");

        if (a == b && b == c) {
            printf("Equilatero\n");
        } else if (a == b || b == c || a == c) {
            printf("Isoceles\n");
        } else printf("Escaleno\n");

        printf("Retangulo: ");

        if (a * a == b * b + c * c ||
            b * b == a * a + c * c ||
            c * c == a * a + b * b) {
            printf("S\n");
        } else printf("N\n");
    } else printf("Invalido\n");

    return 0;
}
