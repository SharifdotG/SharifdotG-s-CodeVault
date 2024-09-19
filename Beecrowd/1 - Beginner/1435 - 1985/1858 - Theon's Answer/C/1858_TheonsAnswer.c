#include <stdio.h>

int main() {
    int numberOfPeople;
    scanf("%d", &numberOfPeople);

    int theonAnswer, theonAnswerPosition = 0;
    scanf("%d", &theonAnswer);
    
    int minimum = theonAnswer;

    for (int i = 1; i < numberOfPeople; i++) {
        scanf("%d", &theonAnswer);
        
        if (theonAnswer < minimum) {
            minimum = theonAnswer;
            theonAnswerPosition = i;
        }
    }

    printf("%d\n", theonAnswerPosition + 1);

    return 0;
}
