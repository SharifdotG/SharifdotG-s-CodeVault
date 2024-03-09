#include <bits/stdc++.h>

using namespace std;

int main() {
    int expressionsAndPlayers;
    while (cin >> expressionsAndPlayers) {
        vector<vector<int>> expressions(expressionsAndPlayers);

        for (int i = 0; i < expressionsAndPlayers; i++) {
            int operand1, operand2, result;
            char equalsSign;
            cin >> operand1 >> operand2 >> equalsSign >> result;
            expressions[i] = {operand1, operand2, result};
        }

        set<string> disqualified_players;

        for (int i = 0; i < expressionsAndPlayers; i++) {
            string player_name;
            int chosenExpression;
            char playerAnswer;
            cin >> player_name >> chosenExpression >> playerAnswer;

            chosenExpression--;

            int firstOperand = expressions[chosenExpression][0];
            int secondOperand = expressions[chosenExpression][1];
            int expectedResult = expressions[chosenExpression][2];

            switch (playerAnswer) {
                case '+':
                    if (firstOperand + secondOperand != expectedResult)
                        disqualified_players.insert(player_name);
                    break;
                case '-':
                    if (firstOperand - secondOperand != expectedResult)
                        disqualified_players.insert(player_name);
                    break;
                case '*':
                    if (firstOperand * secondOperand != expectedResult)
                        disqualified_players.insert(player_name);
                    break;
                case 'I':
                    if (firstOperand + secondOperand == expectedResult ||
                        firstOperand - secondOperand == expectedResult ||
                        firstOperand * secondOperand == expectedResult)
                        disqualified_players.insert(player_name);
                    break;
            }
        }

        if (disqualified_players.empty()) {
            cout << "You Shall All Pass!" << endl;
        } else if (disqualified_players.size() == expressionsAndPlayers) {
            cout << "None Shall Pass!" << endl;
        } else {
            auto it = disqualified_players.begin();
            cout << *it;
            it = next(it);

            while (it != disqualified_players.end()) {
                cout << " " << *it;
                it = next(it);
            }

            cout << endl;
        }
    }

    return 0;
}
