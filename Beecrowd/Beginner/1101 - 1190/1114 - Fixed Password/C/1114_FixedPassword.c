#include <stdio.h>

int main() {
    int password = 2002, input;

    while (1) {
        scanf("%d", &input);

        if (input == password) {
            printf("Acesso Permitido\n");
            break;
        } else printf("Senha Invalida\n");
    }
    
    return 0;
}
