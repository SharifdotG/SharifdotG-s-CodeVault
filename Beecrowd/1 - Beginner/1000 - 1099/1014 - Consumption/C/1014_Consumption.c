#include <stdio.h>

int main() {
    int x;
    double y;
    scanf("%d %lf", &x, &y);

    double consumption = x / y;

    printf("%.3lf km/l\n", consumption);
    
    return 0;
}