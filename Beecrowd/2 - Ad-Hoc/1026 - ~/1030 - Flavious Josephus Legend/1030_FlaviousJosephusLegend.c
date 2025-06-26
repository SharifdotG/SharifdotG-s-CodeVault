#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    for (int i = 0; i < testCases; i++) {
        int peoples, steps;
        scanf("%d %d", &peoples, &steps);

        int people[peoples];
        for (int j = 0; j < peoples; j++) {
            people[j] = j + 1;
        }

        int idx = 0;
        int remaining = peoples;
        while (remaining > 1) {
            idx = (idx + steps - 1) % remaining;
            for (int k = idx; k < remaining - 1; k++) {
                people[k] = people[k + 1];
            }
            remaining--;
        }

        printf("Case %d: %d\n", i + 1, people[0]);
    }

    return 0;
}
