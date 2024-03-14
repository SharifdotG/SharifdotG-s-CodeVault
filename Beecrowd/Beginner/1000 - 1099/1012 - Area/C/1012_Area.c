#include <stdio.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double triangle = (a * c) / 2;
    double circle = 3.14159 * c * c;
    double trapezium = ((a + b) * c) / 2;
    double square = b * b;
    double rectangle = a * b;

    printf("TRIANGULO: %.3lf\n", triangle);
    printf("CIRCULO: %.3lf\n", circle);
    printf("TRAPEZIO: %.3lf\n", trapezium);
    printf("QUADRADO: %.3lf\n", square);
    printf("RETANGULO: %.3lf\n", rectangle);
    
    return 0;
}
