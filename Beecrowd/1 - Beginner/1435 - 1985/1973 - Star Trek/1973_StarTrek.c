#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int stars;
    scanf("%lld", &stars);

    long long int *sheep = (long long int *)malloc(stars * sizeof(long long int));
    long long int *star = (long long int *)malloc(stars * sizeof(long long int));
    long long int starCount = 0, sheepcount = 0;

    for (long long int i = 0; i < stars; i++) {
        scanf("%lld", &sheep[i]);
    }

    for (long long int i = 0; i < stars; ) {
        if (sheep[i] % 2 == 1) {
            star[i] = 1;
            sheep[i]--;

            i++;
        } else if (sheep[i] % 2 == 0) {
            if (sheep[i] > 0) {
                star[i] = 1;
                sheep[i]--;
            }

            i--;
        }

        if (i < 0 || i >= stars) break;
    }

    for (long long int i = 0; i < stars; i++) {
        sheepcount += sheep[i];
        starCount += star[i];
    }

    printf("%lld %lld\n", starCount, sheepcount);

    free(sheep);
    free(star);

    return 0;
}
