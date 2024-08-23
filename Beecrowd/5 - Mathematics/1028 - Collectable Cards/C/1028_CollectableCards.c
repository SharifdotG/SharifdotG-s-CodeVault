#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int f, c;
        scanf("%d %d", &f, &c);
        
        printf("%d\n", gcd(f, c));
    }

    return 0;
}
