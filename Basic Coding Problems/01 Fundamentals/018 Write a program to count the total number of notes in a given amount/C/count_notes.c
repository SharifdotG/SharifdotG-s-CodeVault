#include <stdio.h>

int main() {
    int amount;
    int notes_of_500, notes_of_200, notes_of_100, notes_of_50, notes_of_20, notes_of_10, notes_of_5, notes_of_2, notes_of_1;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    notes_of_500 = amount / 500;
    amount %= 500;

    notes_of_200 = amount / 200;
    amount %= 200;

    notes_of_100 = amount / 100;
    amount %= 100;

    notes_of_50 = amount / 50;
    amount %= 50;

    notes_of_20 = amount / 20;
    amount %= 20;

    notes_of_10 = amount / 10;
    amount %= 10;

    notes_of_5 = amount / 5;
    amount %= 5;

    notes_of_2 = amount / 2;
    amount %= 2;

    notes_of_1 = amount;

    printf("The number of 500 notes is: %d\n", notes_of_500);
    printf("The number of 200 notes is: %d\n", notes_of_200);
    printf("The number of 100 notes is: %d\n", notes_of_100);
    printf("The number of 50 notes is: %d\n", notes_of_50);
    printf("The number of 20 notes is: %d\n", notes_of_20);
    printf("The number of 10 notes is: %d\n", notes_of_10);
    printf("The number of 5 notes is: %d\n", notes_of_5);
    printf("The number of 2 notes is: %d\n", notes_of_2);
    printf("The number of 1 notes is: %d\n", notes_of_1);

    return 0;
}