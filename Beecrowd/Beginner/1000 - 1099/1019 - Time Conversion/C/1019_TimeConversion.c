#include <stdio.h>

int main() {
    int totalTime;
    scanf("%d", &totalTime);

    int hours = totalTime / 3600;
    int minutes = (totalTime % 3600) / 60;
    int seconds = (totalTime % 3600) % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}