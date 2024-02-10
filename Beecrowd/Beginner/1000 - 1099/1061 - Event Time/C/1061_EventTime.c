#include <stdio.h>
#include <string.h>

int main() {
    int day1, hour1, minute1, second1;
    int day2, hour2, minute2, second2;
    int day, hour, minute, second;
    char word[10];

    scanf("%s %d", word, &day1);
    scanf("%d %s %d %s %d", &hour1, word, &minute1, word, &second1);
    scanf("%s %d", word, &day2);
    scanf("%d %s %d %s %d", &hour2, word, &minute2, word, &second2);

    second = second2 - second1;
    minute = minute2 - minute1;
    hour = hour2 - hour1;
    day = day2 - day1;

    if (second < 0) {
        second += 60;
        minute--;
    }

    if (minute < 0) {
        minute += 60;
        hour--;
    }

    if (hour < 0) {
        hour += 24;
        day--;
    }

    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hour);
    printf("%d minuto(s)\n", minute);
    printf("%d segundo(s)\n", second);

    return 0;
}
