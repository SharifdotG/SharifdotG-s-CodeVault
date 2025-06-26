#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    while (number--) {
        int value;
        scanf("%d", &value);

        if (value == 0) printf("NULL\n");
        else if (value % 2 == 0) {
            if (value > 0) printf("EVEN POSITIVE\n");
            else printf("EVEN NEGATIVE\n");
        } else {
            if (value > 0) printf("ODD POSITIVE\n");
            else printf("ODD NEGATIVE\n");
        }
    }

    return 0;
}
