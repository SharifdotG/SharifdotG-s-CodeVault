// Getting Runtime Error :')

#include <stdio.h>
#include <string.h>

int main() {
    int expressionsAndPlayers;
    while (scanf("%d", &expressionsAndPlayers) == 1) {
        int expressions[expressionsAndPlayers][3];

        for (int i = 0; i < expressionsAndPlayers; i++) {
            int operand1, operand2, result;
            char equalsSign;
            scanf("%d %d %c %d", &operand1, &operand2, &equalsSign, &result);
            expressions[i][0] = operand1;
            expressions[i][1] = operand2;
            expressions[i][2] = result;
        }

        char disqualified_players[100][21];
        int disqualified_count = 0;

        while (getchar() != '\n');

        for (int i = 0; i < expressionsAndPlayers; i++) {
            char player_name[21];
            int chosenExpression;
            char playerAnswer;

            scanf("%s %d %c", player_name, &chosenExpression, &playerAnswer);
            while (getchar() != '\n');

            chosenExpression--;

            int firstOperand = expressions[chosenExpression][0];
            int secondOperand = expressions[chosenExpression][1];
            int expectedResult = expressions[chosenExpression][2];

            switch (playerAnswer) {
                case '+':
                    if (firstOperand + secondOperand != expectedResult)
                        strcpy(disqualified_players[disqualified_count++], player_name);
                    break;
                case '-':
                    if (firstOperand - secondOperand != expectedResult)
                        strcpy(disqualified_players[disqualified_count++], player_name);
                    break;
                case '*':
                    if (firstOperand * secondOperand != expectedResult)
                        strcpy(disqualified_players[disqualified_count++], player_name);
                    break;
                case 'I':
                    if (firstOperand + secondOperand == expectedResult ||
                        firstOperand - secondOperand == expectedResult ||
                        firstOperand * secondOperand == expectedResult)
                        strcpy(disqualified_players[disqualified_count++], player_name);
                    break;
            }
        }

        if (disqualified_count == 0) {
            puts("You Shall All Pass!");
        } else if (disqualified_count == expressionsAndPlayers) {
            puts("None Shall Pass!");
        } else {
            printf("%s", disqualified_players[0]);
            for (int i = 1; i < disqualified_count; i++) {
                printf(" %s", disqualified_players[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
