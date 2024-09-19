#include <bits/stdc++.h>

using namespace std;

int main() {
    int questions;
    cin >> questions;

    string answers;
    cin >> answers;

    int adrianScore = 0;
    int brunoScore = 0;
    int goranScore = 0;

    for (int i = 0; i < questions; i++) {
        if (i % 3 == 0 && answers[i] == 'A') adrianScore++;
        else if (i % 3 == 1 && answers[i] == 'B') adrianScore++;
        else if (i % 3 == 2 && answers[i] == 'C') adrianScore++;

        if (i % 4 == 0 && answers[i] == 'B') brunoScore++;
        else if (i % 4 == 1 && answers[i] == 'A') brunoScore++;
        else if (i % 4 == 2 && answers[i] == 'B') brunoScore++;
        else if (i % 4 == 3 && answers[i] == 'C') brunoScore++;

        if (i % 6 == 0 && answers[i] == 'C') goranScore++;
        else if (i % 6 == 1 && answers[i] == 'C') goranScore++;
        else if (i % 6 == 2 && answers[i] == 'A') goranScore++;
        else if (i % 6 == 3 && answers[i] == 'A') goranScore++;
        else if (i % 6 == 4 && answers[i] == 'B') goranScore++;
        else if (i % 6 == 5 && answers[i] == 'B') goranScore++;
    }

    int maxScore = max(adrianScore, max(brunoScore, goranScore));
    cout << maxScore << endl;

    if (adrianScore == maxScore) cout << "Adrian" << endl;
    if (brunoScore == maxScore) cout << "Bruno" << endl;
    if (goranScore == maxScore) cout << "Goran" << endl;

    return 0;
}
