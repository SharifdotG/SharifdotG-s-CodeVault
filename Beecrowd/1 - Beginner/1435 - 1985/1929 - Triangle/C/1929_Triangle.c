#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a < b + c && b < a + c && c < a + b) {
        printf("S\n");
    } else if (a < b + d && b < a + d && d < a + b) {
        printf("S\n");
    } else if (a < c + d && c < a + d && d < a + c) {
        printf("S\n");
    } else if (b < c + d && c < b + d && d < b + c) {
        printf("S\n");
    } else printf("N\n");

    return 0;
}
