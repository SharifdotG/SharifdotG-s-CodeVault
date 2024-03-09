#include <stdio.h>

int main() {
    int line;
    char operation;
    double sum = 0.0, number;
    
    scanf("%d %c", &line, &operation);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &number);
            
            if (i == line) {
                sum += number;
            }
        }
    }

    if (operation == 'S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum / 12.0);

    return 0;
}
