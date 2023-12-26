#include <stdio.h>
#include <math.h>

int main() {
    int size1, size2, maxAllowed;

    while (scanf("%d", &size1) == 1 && size1 != 0) {
        scanf("%d %d", &size2, &maxAllowed);

        int area = size1 * size2;
        int side = sqrt((area * 100) / maxAllowed);

        printf("%d\n", side);
    }

    return 0;
}
