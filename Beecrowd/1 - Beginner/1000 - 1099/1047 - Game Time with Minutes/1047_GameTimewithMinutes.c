#include <stdio.h>

int main() {
    int startHour, startMinute, endHour, endMinute;
    scanf("%d %d %d %d", &startHour, &startMinute, &endHour, &endMinute);

    int durationMinute = endHour * 60 + endMinute - startHour * 60 - startMinute;

    if (durationMinute <= 0) durationMinute += 24 * 60;

    int durationHour = durationMinute / 60;
    durationMinute %= 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHour, durationMinute);
    
    return 0;
}
