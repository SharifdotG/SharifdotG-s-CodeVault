#include <stdio.h>

int main() {
    int tea, answer, correct = 0;
    scanf("%d", &tea);

    for (int i = 0; i < 5; i++) {
        scanf("%d", &answer);

        if (answer == tea) {
            correct++;
        }
    }

    printf("%d\n", correct);

    return 0;
}
