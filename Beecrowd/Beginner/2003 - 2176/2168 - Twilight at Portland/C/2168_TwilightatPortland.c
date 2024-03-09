#include <stdio.h>

int main() {
    int cameras;
    scanf("%d", &cameras);

    int grid[cameras + 1][cameras + 1];

    for (int i = 0; i < cameras + 1; i++) {
        for (int j = 0; j < cameras + 1; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    for (int i = 0; i < cameras; i++) {
        for (int j = 0; j < cameras; j++) {
            if (grid[i][j] + grid[i][j + 1] + grid[i + 1][j] + grid[i + 1][j + 1] >= 2) {
                printf("S");
            } else printf("U");
        }

        printf("\n");
    }

    return 0;
}
