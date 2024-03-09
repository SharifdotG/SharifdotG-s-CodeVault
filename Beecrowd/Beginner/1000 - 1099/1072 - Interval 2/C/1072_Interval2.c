#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int in = 0, out = 0;

    for (int i = 0; i < number; i++) {
        int value;
        scanf("%d", &value);

        if (value >= 10 && value <= 20) in++;
        else out++;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
    
    return 0;
}
