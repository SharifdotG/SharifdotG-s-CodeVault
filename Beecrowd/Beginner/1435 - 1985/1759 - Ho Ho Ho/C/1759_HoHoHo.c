#include <stdio.h>

int main() {
    int timesHoSpoken;
    scanf("%d", &timesHoSpoken);

    for (int i = 0; i < timesHoSpoken; i++) {
        if (i == timesHoSpoken - 1) {
            printf("Ho!\n");
        } else printf("Ho ");
    }

    return 0;
}
