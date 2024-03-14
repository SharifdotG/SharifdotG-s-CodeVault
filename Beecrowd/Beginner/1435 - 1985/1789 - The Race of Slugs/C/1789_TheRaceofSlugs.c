#include <stdio.h>

int main() {
    int slugs;

    while (scanf("%d", &slugs) != EOF) {
        int maxSpeed = 0;

        for (int i = 0; i < slugs; i++) {
            int speed;
            scanf("%d", &speed);

            if (speed > maxSpeed) maxSpeed = speed;
        }

        if (maxSpeed < 10) printf("1\n");
        else if (maxSpeed >= 10 && maxSpeed < 20) printf("2\n");
        else printf("3\n");
    }

    return 0;
}
