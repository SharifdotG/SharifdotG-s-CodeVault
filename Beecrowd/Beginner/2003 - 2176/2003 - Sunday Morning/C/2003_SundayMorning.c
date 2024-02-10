#include <stdio.h>

int main() {
    int hour, minute;
    char semicolon;

    while (scanf("%d %c %d", &hour, &semicolon, &minute) != EOF) {
        int delay = 0;

        if (hour >= 7) {
            delay = (hour - 7) * 60 + minute;
        }

        printf("Atraso maximo: %d\n", delay);
    }

    return 0;
}
