#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char s[101];
        scanf("%s", s);

        int leds = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            switch (s[i]) {
            case '1':
                leds += 2;
                break;
            case '2':
            case '3':
            case '5':
                leds += 5;
                break;
            case '4':
                leds += 4;
                break;
            case '6':
            case '9':
            case '0':
                leds += 6;
                break;
            case '7':
                leds += 3;
                break;
            case '8':
                leds += 7;
                break;
            }
        }

        printf("%d leds\n", leds);
    }

    return 0;
}