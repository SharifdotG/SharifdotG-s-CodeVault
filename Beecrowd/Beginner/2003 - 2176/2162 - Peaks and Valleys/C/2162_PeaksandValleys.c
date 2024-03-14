#include <stdio.h>

int main() {
    int landscapeMeasures, count1 = 0, count2 = 0;
    scanf("%d", &landscapeMeasures);

    int height[landscapeMeasures];
    for (int i = 0; i < landscapeMeasures; i++) {
        scanf("%d", &height[i]);
    }

    if (height[0] < height[1]) {
        for (int i = 0; i < landscapeMeasures - 1; i++) {
            if (i % 2 == 0) {
                if (height[i] < height[i + 1]) {
                    count1++;
                }
            } else {
                if (height[i] > height[i + 1]) {
                    count2++;
                }
            }
        }
    } else if (height[0] > height[1]) {
        for (int i = 0; i < landscapeMeasures - 1; i++) {
            if (i % 2 == 0) {
                if (height[i] > height[i + 1]) {
                    count1++;
                }
            } else {
                if (height[i] < height[i + 1]) {
                    count2++;
                }
            }
        }
    }

    if (count1 + count2 + 1 == landscapeMeasures) {
        printf("1\n");
    } else printf("0\n");

    return 0;
}
