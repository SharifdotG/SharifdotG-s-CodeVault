#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int *x = (int *)a;
    int *y = (int *)b;
    if (x[0] != y[0]) {
        return x[0] - y[0];
    } else {
        return x[1] - y[1];
    }
}

int main() {
    int numPoints;

    while (scanf("%d", &numPoints) != EOF) {
        int points[numPoints][2];

        for (int i = 0; i < numPoints; i++) {
            scanf("%d %d", &points[i][0], &points[i][1]);
        }

        qsort(points, numPoints, sizeof(points[0]), compare);

        int topCounts[numPoints], bottomCounts[numPoints];
        for (int i = 0; i < numPoints; i++) {
            topCounts[i] = 1;
            bottomCounts[i] = 1;
        }

        for (int i = 1; i < numPoints; i++) {
            int maxTopCount = 1, maxBottomCount = 1;

            for (int j = 0; j < i; j++) {
                if (points[i][0] > points[j][0] &&
                    points[i][1] == points[j][1] + 2) {
                    maxTopCount = (maxTopCount > bottomCounts[j] + 1)
                                      ? maxTopCount
                                      : bottomCounts[j] + 1;
                }
                if (points[i][0] > points[j][0] &&
                    points[i][1] == points[j][1] - 2) {
                    maxBottomCount = (maxBottomCount > topCounts[j] + 1)
                                         ? maxBottomCount
                                         : topCounts[j] + 1;
                }
            }

            topCounts[i] = maxTopCount;
            bottomCounts[i] = maxBottomCount;
        }

        int maxPointsInCurve = 1;
        for (int i = 0; i < numPoints; i++) {
            maxPointsInCurve = (maxPointsInCurve > topCounts[i])
                                   ? maxPointsInCurve
                                   : topCounts[i];
            maxPointsInCurve = (maxPointsInCurve > bottomCounts[i])
                                   ? maxPointsInCurve
                                   : bottomCounts[i];
        }

        printf("%d\n", maxPointsInCurve);
    }

    return 0;
}