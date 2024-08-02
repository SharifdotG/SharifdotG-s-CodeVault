#include <stdio.h>

int main() {
    char s[1000];
    scanf("%s", s);
    
    int freq[10] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            freq[s[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }

    return 0;
}