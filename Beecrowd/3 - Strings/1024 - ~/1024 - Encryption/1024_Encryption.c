#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000

int main() {
    int testCases;
    scanf("%d\n", &testCases);

    while (testCases--) {
        char message[MAX_LENGTH];
        fgets(message, MAX_LENGTH, stdin);

        size_t len = strlen(message);
        if (message[len - 1] == '\n') {
            message[len - 1] = '\0';
        }

        for (int i = 0; message[i] != '\0'; i++) {
            if (isalpha(message[i])) {
                message[i] += 3;
            }
        }

        int start = 0;
        int end = strlen(message) - 1;
        while (start < end) {
            char temp = message[start];
            message[start] = message[end];
            message[end] = temp;
            start++;
            end--;
        }

        for (int i = strlen(message) / 2; message[i] != '\0'; i++) {
            message[i]--;
        }

        printf("%s\n", message);
    }

    return 0;
}
