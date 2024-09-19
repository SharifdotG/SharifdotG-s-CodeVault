#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct triangle {
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle *tr, int n) {
    double *p = malloc(n * sizeof(double));

    for (int i = 0; i < n; i++) {
        double a = tr[i].a, b = tr[i].b, c = tr[i].c;
        double s = (a + b + c) / 2;

        p[i] = sqrt(s * (s - a) * (s - b) * (s - c));
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p[i] > p[j]) {
                double temp = p[i];
                p[i] = p[j];
                p[j] = temp;

                triangle temp_tr = tr[i];
                tr[i] = tr[j];
                tr[j] = temp_tr;
            }
        }
    }
    
    free(p);
}

int main() {
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}