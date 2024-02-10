#include <stdio.h>
#include <stdlib.h>

int main() {
    int height, pipes;
    scanf("%d %d", &height, &pipes);

    int previousPipe;
    scanf("%d", &previousPipe);

    int isPossible = 1;
    
    for (int i = 1; i < pipes; i++) {
        int currentPipe;
        scanf("%d", &currentPipe);

        if (abs(currentPipe - previousPipe) > height) {
            isPossible = 0;
            break;
        }

        previousPipe = currentPipe;
    }

    if (isPossible) printf("YOU WIN\n");
    else printf("GAME OVER\n");

    return 0;
}
