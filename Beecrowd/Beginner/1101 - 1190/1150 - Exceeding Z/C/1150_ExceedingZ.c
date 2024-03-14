#include <stdio.h>

int main() {
    int x, z;
    scanf("%d %d", &x, &z);

    while (z <= x) {
        scanf("%d", &z);
    }

    int sum = 0, count = 0;

    for (int i = x; sum <= z; i++) {
        sum += i;
        count++;
    }

    printf("%d\n", count);
    
    return 0;
}
