#include <stdio.h>

int main() {
    int number, first = 0, second = 1, next;
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        if (i == number) printf("%d\n", first);
        else printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }
    
    return 0;
}
