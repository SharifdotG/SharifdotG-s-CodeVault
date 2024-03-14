#include <stdio.h>
#include <string.h>

int main() {
    char number[100];
    scanf("%s", number);
    int length = strlen(number);
    
    for (int i = 0; i < length / 2; i++) {
        char temp = number[i];
        number[i] = number[length - i - 1];
        number[length - i - 1] = temp;
    }

    printf("%s\n", number);

    return 0;
}
