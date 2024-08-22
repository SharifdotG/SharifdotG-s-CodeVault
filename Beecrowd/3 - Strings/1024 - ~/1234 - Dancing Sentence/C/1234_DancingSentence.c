#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    
    while (fgets(s, sizeof(s), stdin)) {
        int upper = 1;
        
        for (int i = 0; s[i] != '\0'; i++) {
            if (isalpha(s[i])) {
                if (upper) {
                    s[i] = toupper(s[i]);
                } else {
                    s[i] = tolower(s[i]);
                }
                
                upper = !upper;
            }
        }
        
        printf("%s", s);
    }

    return 0;
}
