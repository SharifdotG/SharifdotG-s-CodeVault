#include <stdio.h>

int main() {
    double pointX, pointY;
    scanf("%lf %lf", &pointX, &pointY);

    if (pointX == 0 && pointY == 0) printf("Origem\n");
    else if (pointX == 0) printf("Eixo Y\n");
    else if (pointY == 0) printf("Eixo X\n");
    else if (pointX > 0 && pointY > 0) printf("Q1\n");
    else if (pointX < 0 && pointY > 0) printf("Q2\n");
    else if (pointX < 0 && pointY < 0) printf("Q3\n");
    else printf("Q4\n");
    
    return 0;
}
