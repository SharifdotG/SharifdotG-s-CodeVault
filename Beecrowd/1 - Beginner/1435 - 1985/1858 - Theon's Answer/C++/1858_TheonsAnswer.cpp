#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfPeople;
    cin >> numberOfPeople;

    int theonAnswer, theonAnswerPosition = 0;
    cin >> theonAnswer;
    
    int minimum = theonAnswer;

    for (int i = 1; i < numberOfPeople; i++) {
        cin >> theonAnswer;
        
        if (theonAnswer < minimum) {
            minimum = theonAnswer;
            theonAnswerPosition = i;
        }
    }

    cout << theonAnswerPosition + 1 << endl;

    return 0;
}