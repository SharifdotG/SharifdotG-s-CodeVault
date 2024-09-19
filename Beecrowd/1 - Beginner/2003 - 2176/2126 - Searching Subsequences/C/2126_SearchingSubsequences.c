#include <stdio.h>
#include <string.h>

int main() {
    char sequence[100], subsequence[100];
    int count = 0, pos = 0, i = 1;

    while (scanf("%s%s", subsequence, sequence) != EOF) {
        char *ptr = sequence;

        while ((ptr = strstr(ptr, subsequence)) != NULL) {
            count++;
            pos = (int)(ptr - sequence) + 1;
            ptr++;
        }

        printf("Caso #%d:\n", i);

        if (count == 0) {
            printf("Nao existe subsequencia\n");
        } else {
            printf("Qtd.Subsequencias: %d\n", count);
            printf("Pos: %d\n", pos);
        }
        
        printf("\n");

        count = 0, pos = 0;

        i++;
    }

    return 0;
}