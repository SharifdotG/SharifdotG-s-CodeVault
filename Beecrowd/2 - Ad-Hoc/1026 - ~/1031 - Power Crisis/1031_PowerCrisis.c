#include <stdio.h>

int main() {
    int regions;
    while (scanf("%d", &regions) && regions) {
        int randomNumber = 1;

        while (1) {
            int v[regions];
            for (int i = 0; i < regions; i++) {
                v[i] = i + 1;
            }

            int count = regions;
            
            int i = 0;
            while (count > 1) {
                for (int j = i; j < count - 1; j++) {
                    v[j] = v[j + 1];
                }
                
                count--;
                i = (i + randomNumber - 1) % count;
            }

            if (v[0] == 13) {
                printf("%d\n", randomNumber);
                break;
            }

            randomNumber++;
        }
    }

    return 0;
}
