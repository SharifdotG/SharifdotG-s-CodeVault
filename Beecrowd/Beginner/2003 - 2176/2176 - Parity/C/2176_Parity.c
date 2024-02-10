#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    scanf("%s", binary);

    int count = 0;
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '1') {
            count++;
        }
    }

    if (count % 2 == 0) {
        printf("%s0\n", binary);
    } else printf("%s1\n", binary);

    return 0;
}
