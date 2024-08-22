#include <stdio.h>
#include <stdbool.h>

int main() {
    char s[1001];

    while (fgets(s, sizeof(s), stdin)) {
        bool italic = false, bold = false;

        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == '\n') {
                continue;
            }

            if (s[i] == '_') {
                if (!italic) {
                    printf("<i>");
                } else {
                    printf("</i>");
                }

                italic = !italic;
            } else if (s[i] == '*') {
                if (!bold) {
                    printf("<b>");
                } else {
                    printf("</b>");
                }
                
                bold = !bold;
            } else {
                putchar(s[i]);
            }
        }
        
        printf("\n");
    }

    return 0;
}
